/*
 * Copyright (C) Freescale Semiconductor, Inc. 2007
 *
 * Author: Scott Wood <scottwood@freescale.com>,
 * with some bits from older board-specific PCI initialization.
 *
 * See file CREDITS for list of people who contributed to this
 * project.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 */

#include <common.h>
#include <pci.h>

#if defined(CONFIG_OF_LIBFDT)
#include <libfdt.h>
#elif defined(CONFIG_OF_FLAT_TREE)
#include <ft_build.h>
#endif

#include <asm/mpc8349_pci.h>

#ifdef CONFIG_83XX_GENERIC_PCI
#define MAX_BUSES 2

DECLARE_GLOBAL_DATA_PTR;

static struct pci_controller pci_hose[MAX_BUSES];
static int pci_num_buses;

static void pci_init_bus(int bus, struct pci_region *reg)
{
	volatile immap_t *immr = (volatile immap_t *)CFG_IMMR;
	volatile pot83xx_t *pot = immr->ios.pot;
	volatile pcictrl83xx_t *pci_ctrl = &immr->pci_ctrl[bus];
	struct pci_controller *hose = &pci_hose[bus];
	u32 dev;
	u16 reg16;
	int i;

	if (bus == 1)
		pot += 3;

	/* Setup outbound translation windows */
	for (i = 0; i < 3; i++, reg++, pot++) {
		if (reg->size == 0)
			break;

		hose->regions[i] = *reg;
		hose->region_count++;

		pot->potar = reg->bus_start >> 12;
		pot->pobar = reg->phys_start >> 12;
		pot->pocmr = ~(reg->size - 1) >> 12;

		if (reg->flags & PCI_REGION_IO)
			pot->pocmr |= POCMR_IO;
#ifdef CONFIG_83XX_PCI_STREAMING
		else if (reg->flags & PCI_REGION_PREFETCH)
			pot->pocmr |= POCMR_SE;
#endif

		if (bus == 1)
			pot->pocmr |= POCMR_DST;

		pot->pocmr |= POCMR_EN;
	}

	/* Point inbound translation at RAM */
	pci_ctrl->pitar1 = 0;
	pci_ctrl->pibar1 = 0;
	pci_ctrl->piebar1 = 0;
	pci_ctrl->piwar1 = PIWAR_EN | PIWAR_PF | PIWAR_RTT_SNOOP |
	                   PIWAR_WTT_SNOOP | (__ilog2(gd->ram_size) - 1);

	i = hose->region_count++;
	hose->regions[i].bus_start = 0;
	hose->regions[i].phys_start = 0;
	hose->regions[i].size = gd->ram_size;
	hose->regions[i].flags = PCI_REGION_MEM | PCI_REGION_MEMORY;

	hose->first_busno = 0;
	hose->last_busno = 0xff;

	pci_setup_indirect(hose, CFG_IMMR + 0x8300 + bus * 0x80,
	                         CFG_IMMR + 0x8304 + bus * 0x80);

	pci_register_hose(hose);

	/*
	 * Write to Command register
	 */
	reg16 = 0xff;
	dev = PCI_BDF(hose->first_busno, 0, 0);
	pci_hose_read_config_word(hose, dev, PCI_COMMAND, &reg16);
	reg16 |= PCI_COMMAND_SERR | PCI_COMMAND_MASTER | PCI_COMMAND_MEMORY;
	pci_hose_write_config_word(hose, dev, PCI_COMMAND, reg16);

	/*
	 * Clear non-reserved bits in status register.
	 */
	pci_hose_write_config_word(hose, dev, PCI_STATUS, 0xffff);
	pci_hose_write_config_byte(hose, dev, PCI_LATENCY_TIMER, 0x80);
	pci_hose_write_config_byte(hose, dev, PCI_CACHE_LINE_SIZE, 0x08);

#ifdef CONFIG_PCI_SCAN_SHOW
	printf("PCI:   Bus Dev VenId DevId Class Int\n");
#endif
	/*
	 * Hose scan.
	 */
	hose->last_busno = pci_hose_scan(hose);
}

/*
 * The caller must have already set OCCR, and the PCI_LAW BARs
 * must have been set to cover all of the requested regions.
 *
 * If fewer than three regions are requested, then the region
 * list is terminated with a region of size 0.
 */
void mpc83xx_pci_init(int num_buses, struct pci_region **reg, int warmboot)
{
	volatile immap_t *immr = (volatile immap_t *)CFG_IMMR;
	int i;

	if (num_buses > MAX_BUSES) {
		printf("%d PCI buses requsted, %d supported\n",
		       num_buses, MAX_BUSES);

		num_buses = MAX_BUSES;
	}

	pci_num_buses = num_buses;

	/*
	 * Release PCI RST Output signal.
	 * Power on to RST high must be at least 100 ms as per PCI spec.
	 * On warm boots only 1 ms is required.
	 */
	udelay(warmboot ? 1000 : 100000);

	for (i = 0; i < num_buses; i++)
		immr->pci_ctrl[i].gcr = 1;

	/*
	 * RST high to first config access must be at least 2^25 cycles
	 * as per PCI spec.  This could be cut in half if we know we're
	 * running at 66MHz.  This could be insufficiently long if we're
	 * running the PCI bus at significantly less than 33MHz.
	 */
	udelay(1020000);

	for (i = 0; i < num_buses; i++)
		pci_init_bus(i, reg[i]);
}

#if defined(CONFIG_OF_LIBFDT)
void ft_pci_setup(void *blob, bd_t *bd)
{
	int nodeoffset;
	int err;
	int tmp[2];

	if (pci_num_buses < 1)
		return;

	nodeoffset = fdt_path_offset(blob, "/" OF_SOC "/pci@8500");
	if (nodeoffset >= 0) {
		tmp[0] = cpu_to_be32(pci_hose[0].first_busno);
		tmp[1] = cpu_to_be32(pci_hose[0].last_busno);
		err = fdt_setprop(blob, nodeoffset, "bus-range",
				  tmp, sizeof(tmp));

		tmp[0] = cpu_to_be32(gd->pci_clk);
		err = fdt_setprop(blob, nodeoffset, "clock-frequency",
				  tmp, sizeof(tmp[0]));
	}

	if (pci_num_buses < 2)
		return;

	nodeoffset = fdt_path_offset(blob, "/" OF_SOC "/pci@8600");
	if (nodeoffset >= 0) {
		tmp[0] = cpu_to_be32(pci_hose[0].first_busno);
		tmp[1] = cpu_to_be32(pci_hose[0].last_busno);
		err = fdt_setprop(blob, nodeoffset, "bus-range",
				  tmp, sizeof(tmp));

		tmp[0] = cpu_to_be32(gd->pci_clk);
		err = fdt_setprop(blob, nodeoffset, "clock-frequency",
				  tmp, sizeof(tmp[0]));
	}
}
#elif CONFIG_OF_FLAT_TREE
void ft_pci_setup(void *blob, bd_t *bd)
{
	u32 *p;
	int len;

	if (pci_num_buses < 1)
		return;

	p = (u32 *)ft_get_prop(blob, "/" OF_SOC "/pci@8500/bus-range", &len);
	if (p) {
		p[0] = pci_hose[0].first_busno;
		p[1] = pci_hose[0].last_busno;
	}

	if (pci_num_buses < 2)
		return;

	p = (u32 *)ft_get_prop(blob, "/" OF_SOC "/pci@8600/bus-range", &len);
	if (p) {
		p[0] = pci_hose[1].first_busno;
		p[1] = pci_hose[1].last_busno;
	}
}
#endif /* CONFIG_OF_FLAT_TREE */

#endif /* CONFIG_83XX_GENERIC_PCI */

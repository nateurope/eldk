/* -*- linux-c -*-
 * include/asm-powerpc/ipipe_base.h
 *
 * Copyright (C) 2007 Philippe Gerum.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, Inc., 675 Mass Ave, Cambridge MA 02139,
 * USA; either version 2 of the License, or (at your option) any later
 * version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#ifndef __ASM_POWERPC_IPIPE_BASE_H
#define __ASM_POWERPC_IPIPE_BASE_H

#define IPIPE_NR_XIRQS		NR_IRQS
#ifdef CONFIG_PPC64
#define IPIPE_IRQ_ISHIFT	6		/* 64-bit arch. */
#else
#define IPIPE_IRQ_ISHIFT	5		/* 32-bit arch. */
#endif

/* 
 * The first virtual interrupt is reserved for the timer (see
 * __ipipe_init_platform). 
 */
#define IPIPE_TIMER_VIRQ	IPIPE_VIRQ_BASE

#ifdef CONFIG_SMP
/* 
 * These are virtual IPI numbers. The OpenPIC supports only 4 IPIs and
 * IPIs 0x0,0x1,0x3 are already used by Linux. The virtualization
 * layer is implemented by using the free IPI 0x2 and cascading it in
 * arch/powerpc/kernel/ipipe.c.
 */
/* these are bit numbers in practice */
#define IPIPE_MSG_CRITICAL_IPI	0
#define IPIPE_MSG_SERVICE_IPI0	(IPIPE_MSG_CRITICAL_IPI + 1)
#define IPIPE_MSG_SERVICE_IPI1	(IPIPE_MSG_CRITICAL_IPI + 2)
#define IPIPE_MSG_SERVICE_IPI2	(IPIPE_MSG_CRITICAL_IPI + 3)
#define IPIPE_MSG_SERVICE_IPI3	(IPIPE_MSG_CRITICAL_IPI + 4)
#define IPIPE_MSG_SERVICE_IPI4	(IPIPE_MSG_CRITICAL_IPI + 5)

#define IPIPE_MSG_IPI_MASK	((1UL << IPIPE_MSG_CRITICAL_IPI) |	\
				 (1UL << IPIPE_MSG_SERVICE_IPI0) |	\
				 (1UL << IPIPE_MSG_SERVICE_IPI1) |	\
				 (1UL << IPIPE_MSG_SERVICE_IPI2) |	\
				 (1UL << IPIPE_MSG_SERVICE_IPI3) |	\
				 (1UL << IPIPE_MSG_SERVICE_IPI4))

#define IPIPE_CRITICAL_IPI	(IPIPE_VIRQ_BASE + 1)
#define IPIPE_SERVICE_IPI0	(IPIPE_CRITICAL_IPI + 1)
#define IPIPE_SERVICE_IPI1	(IPIPE_CRITICAL_IPI + 2)
#define IPIPE_SERVICE_IPI2	(IPIPE_CRITICAL_IPI + 3)
#define IPIPE_SERVICE_IPI3	(IPIPE_CRITICAL_IPI + 4)
#define IPIPE_SERVICE_IPI4	(IPIPE_CRITICAL_IPI + 5)

#define IPIPE_MSG_IPI_OFFSET	(IPIPE_CRITICAL_IPI)

#define ipipe_processor_id()	raw_smp_processor_id()
#else  /* !CONFIG_SMP */
#define ipipe_processor_id()	0
#endif /* CONFIG_SMP */

/* traps */
#define IPIPE_TRAP_ACCESS	 0	/* Data or instruction access exception */
#define IPIPE_TRAP_ALIGNMENT	 1	/* Alignment exception */
#define IPIPE_TRAP_ALTUNAVAIL	 2	/* Altivec unavailable */
#define IPIPE_TRAP_PCE		 3	/* Program check exception */
#define IPIPE_TRAP_MCE		 4	/* Machine check exception */
#define IPIPE_TRAP_UNKNOWN	 5	/* Unknown exception */
#define IPIPE_TRAP_IABR		 6	/* Instruction breakpoint */
#define IPIPE_TRAP_RM		 7	/* Run mode exception */
#define IPIPE_TRAP_SSTEP	 8	/* Single-step exception */
#define IPIPE_TRAP_NREC		 9	/* Non-recoverable exception */
#define IPIPE_TRAP_SOFTEMU	10	/* Software emulation */
#define IPIPE_TRAP_DEBUG	11	/* Debug exception */
#define IPIPE_TRAP_SPE		12	/* SPE exception */
#define IPIPE_TRAP_ALTASSIST	13	/* Altivec assist exception */
#define IPIPE_TRAP_CACHE	14	/* Cache-locking exception (FSL) */
#define IPIPE_TRAP_KFPUNAVAIL	15	/* FP unavailable exception */
#define IPIPE_NR_FAULTS		16
/* Pseudo-vectors used for kernel events */
#define IPIPE_FIRST_EVENT		IPIPE_NR_FAULTS
#define IPIPE_EVENT_SYSCALL		(IPIPE_FIRST_EVENT)
#define IPIPE_EVENT_SCHEDULE		(IPIPE_FIRST_EVENT + 1)
#define IPIPE_EVENT_SIGWAKE		(IPIPE_FIRST_EVENT + 2)
#define IPIPE_EVENT_SETSCHED		(IPIPE_FIRST_EVENT + 3)
#define IPIPE_EVENT_INIT		(IPIPE_FIRST_EVENT + 4)
#define IPIPE_EVENT_EXIT		(IPIPE_FIRST_EVENT + 5)
#define IPIPE_EVENT_CLEANUP		(IPIPE_FIRST_EVENT + 6)
#define IPIPE_LAST_EVENT		IPIPE_EVENT_CLEANUP
#define IPIPE_NR_EVENTS			(IPIPE_LAST_EVENT + 1)

#ifndef __ASSEMBLY__

#ifdef CONFIG_SMP

void __ipipe_stall_root(void);

unsigned long __ipipe_test_and_stall_root(void);

unsigned long __ipipe_test_root(void);

#else /* !CONFIG_SMP */

#include <linux/bitops.h>

#if __GNUC__ >= 4
/* Alias to ipipe_root_cpudom_var(status) */
extern unsigned long __ipipe_root_status;
#else
extern unsigned long *const __ipipe_root_status_addr;
#define __ipipe_root_status	(*__ipipe_root_status_addr)
#endif

static __inline__ void __ipipe_stall_root(void)
{
	volatile unsigned long *p = &__ipipe_root_status;
	set_bit(0, p);
}

static __inline__ unsigned long __ipipe_test_and_stall_root(void)
{
	volatile unsigned long *p = &__ipipe_root_status;
	return test_and_set_bit(0, p);
}

static __inline__ unsigned long __ipipe_test_root(void)
{
	volatile unsigned long *p = &__ipipe_root_status;
	return test_bit(0, p);
}

#endif /* !CONFIG_SMP */

#endif /* !__ASSEMBLY__ */

#endif	/* !__ASM_POWERPC_IPIPE_BASE_H */

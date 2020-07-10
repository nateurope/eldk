#ifndef __ASM_POWERPC_CPUTABLE_H
#define __ASM_POWERPC_CPUTABLE_H

#include <asm/asm-compat.h>

#define PPC_FEATURE_32			0x80000000
#define PPC_FEATURE_64			0x40000000
#define PPC_FEATURE_601_INSTR		0x20000000
#define PPC_FEATURE_HAS_ALTIVEC		0x10000000
#define PPC_FEATURE_HAS_FPU		0x08000000
#define PPC_FEATURE_HAS_MMU		0x04000000
#define PPC_FEATURE_HAS_4xxMAC		0x02000000
#define PPC_FEATURE_UNIFIED_CACHE	0x01000000
#define PPC_FEATURE_HAS_SPE		0x00800000
#define PPC_FEATURE_HAS_EFP_SINGLE	0x00400000
#define PPC_FEATURE_HAS_EFP_DOUBLE	0x00200000
#define PPC_FEATURE_NO_TB		0x00100000
#define PPC_FEATURE_POWER4		0x00080000
#define PPC_FEATURE_POWER5		0x00040000
#define PPC_FEATURE_POWER5_PLUS		0x00020000
#define PPC_FEATURE_CELL		0x00010000
#define PPC_FEATURE_BOOKE		0x00008000
#define PPC_FEATURE_SMT			0x00004000
#define PPC_FEATURE_ICACHE_SNOOP	0x00002000
#define PPC_FEATURE_ARCH_2_05		0x00001000
#define PPC_FEATURE_PA6T		0x00000800
#define PPC_FEATURE_HAS_DFP		0x00000400
#define PPC_FEATURE_POWER6_EXT		0x00000200

#define PPC_FEATURE_TRUE_LE		0x00000002
#define PPC_FEATURE_PPC_LE		0x00000001

#endif /* __ASM_POWERPC_CPUTABLE_H */

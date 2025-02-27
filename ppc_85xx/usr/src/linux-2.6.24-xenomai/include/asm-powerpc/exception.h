#ifndef _ASM_POWERPC_EXCEPTION_H
#define _ASM_POWERPC_EXCEPTION_H
/*
 * Extracted from head_64.S
 *
 *  PowerPC version
 *    Copyright (C) 1995-1996 Gary Thomas (gdt@linuxppc.org)
 *
 *  Rewritten by Cort Dougan (cort@cs.nmt.edu) for PReP
 *    Copyright (C) 1996 Cort Dougan <cort@cs.nmt.edu>
 *  Adapted for Power Macintosh by Paul Mackerras.
 *  Low-level exception handlers and MMU support
 *  rewritten by Paul Mackerras.
 *    Copyright (C) 1996 Paul Mackerras.
 *
 *  Adapted for 64bit PowerPC by Dave Engebretsen, Peter Bergner, and
 *    Mike Corrigan {engebret|bergner|mikejc}@us.ibm.com
 *
 *  This file contains the low-level support and setup for the
 *  PowerPC-64 platform, including trap and interrupt dispatch.
 *
 *  This program is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public License
 *  as published by the Free Software Foundation; either version
 *  2 of the License, or (at your option) any later version.
 */
/*
 * The following macros define the code that appears as
 * the prologue to each of the exception handlers.  They
 * are split into two parts to allow a single kernel binary
 * to be used for pSeries and iSeries.
 *
 * We make as much of the exception code common between native
 * exception handlers (including pSeries LPAR) and iSeries LPAR
 * implementations as possible.
 */

#define EX_R9		0
#define EX_R10		8
#define EX_R11		16
#define EX_R12		24
#define EX_R13		32
#define EX_SRR0		40
#define EX_DAR		48
#define EX_DSISR	56
#define EX_CCR		60
#define EX_R3		64
#define EX_LR		72

#ifdef CONFIG_SOFTDISABLE	
#define COPY_SOFTISTATE(mreg)			\
	lbz	mreg,PACASOFTIRQEN(r13);	\
	std	mreg,SOFTE(r1);
#define TEST_SOFTISTATE(mreg, dlabel)		\
	lbz	mreg,PACASOFTIRQEN(r13);	\
	cmpwi	mreg,0;				\
	beq-	dlabel;
#else
#ifdef CONFIG_IPIPE
/* Do NOT alter Rc(eq) in this code;  our caller uses it. */
#define COPY_SOFTISTATE(mreg)			\
	ld	mreg,PACAROOTPCPU(r13);		\
	ld	mreg,0(mreg);			\
	nor	mreg,mreg,mreg;			\
	clrldi	mreg,mreg,63;			\
	std	mreg,SOFTE(r1);
#define TEST_SOFTISTATE(mreg, dlabel)
#else
#define COPY_SOFTISTATE(mreg)
#define TEST_SOFTISTATE(mreg, dlabel)
#endif
#endif

/*
 * We're short on space and time in the exception prolog, so we can't
 * use the normal SET_REG_IMMEDIATE macro. Normally we just need the
 * low halfword of the address, but for Kdump we need the whole low
 * word.
 */
#ifdef CONFIG_CRASH_DUMP
#define LOAD_HANDLER(reg, label)					\
	oris	reg,reg,(label)@h;	/* virt addr of handler ... */	\
	ori	reg,reg,(label)@l;	/* .. and the rest */
#else
#define LOAD_HANDLER(reg, label)					\
	ori	reg,reg,(label)@l;	/* virt addr of handler ... */
#endif

#define EXCEPTION_PROLOG_1(area)				\
	mfspr	r13,SPRN_SPRG3;		/* get paca address into r13 */	\
	std	r9,area+EX_R9(r13);	/* save r9 - r12 */		\
	std	r10,area+EX_R10(r13);					\
	std	r11,area+EX_R11(r13);					\
	std	r12,area+EX_R12(r13);					\
	mfspr	r9,SPRN_SPRG1;						\
	std	r9,area+EX_R13(r13);					\
	mfcr	r9

/*
 * Equal to EXCEPTION_PROLOG_PSERIES, except that it forces 64bit mode.
 * The firmware calls the registered system_reset_fwnmi and
 * machine_check_fwnmi handlers in 32bit mode if the cpu happens to run
 * a 32bit application at the time of the event.
 * This firmware bug is present on POWER4 and JS20.
 */
#define EXCEPTION_PROLOG_PSERIES_FORCE_64BIT(area, label)		\
	EXCEPTION_PROLOG_1(area);					\
	clrrdi	r12,r13,32;		/* get high part of &label */	\
	mfmsr	r10;							\
	/* force 64bit mode */						\
	li	r11,5;			/* MSR_SF_LG|MSR_ISF_LG */	\
	rldimi	r10,r11,61,0;		/* insert into top 3 bits */	\
	/* done 64bit mode */						\
	mfspr	r11,SPRN_SRR0;		/* save SRR0 */			\
	LOAD_HANDLER(r12,label)						\
	ori	r10,r10,MSR_IR|MSR_DR|MSR_RI;				\
	mtspr	SPRN_SRR0,r12;						\
	mfspr	r12,SPRN_SRR1;		/* and SRR1 */			\
	mtspr	SPRN_SRR1,r10;						\
	rfid;								\
	b	.	/* prevent speculative execution */

#define EXCEPTION_PROLOG_PSERIES(area, label)				\
	EXCEPTION_PROLOG_1(area);					\
	clrrdi	r12,r13,32;		/* get high part of &label */	\
	mfmsr	r10;							\
	mfspr	r11,SPRN_SRR0;		/* save SRR0 */			\
	LOAD_HANDLER(r12,label)						\
	ori	r10,r10,MSR_IR|MSR_DR|MSR_RI;				\
	mtspr	SPRN_SRR0,r12;						\
	mfspr	r12,SPRN_SRR1;		/* and SRR1 */			\
	mtspr	SPRN_SRR1,r10;						\
	rfid;								\
	b	.	/* prevent speculative execution */

/*
 * The common exception prolog is used for all except a few exceptions
 * such as a segment miss on a kernel address.  We have to be prepared
 * to take another exception from the point where we first touch the
 * kernel stack onwards.
 *
 * On entry r13 points to the paca, r9-r13 are saved in the paca,
 * r9 contains the saved CR, r11 and r12 contain the saved SRR0 and
 * SRR1, and relocation is on.
 */
#define EXCEPTION_PROLOG_COMMON(n, area)				   \
	andi.	r10,r12,MSR_PR;		/* See if coming from user	*/ \
	mr	r10,r1;			/* Save r1			*/ \
	subi	r1,r1,INT_FRAME_SIZE;	/* alloc frame on kernel stack	*/ \
	beq-	1f;							   \
	ld	r1,PACAKSAVE(r13);	/* kernel stack to use		*/ \
1:	cmpdi	cr1,r1,0;		/* check if r1 is in userspace	*/ \
	bge-	cr1,2f;			/* abort if it is		*/ \
	b	3f;							   \
2:	li	r1,(n);			/* will be reloaded later	*/ \
	sth	r1,PACA_TRAP_SAVE(r13);					   \
	b	bad_stack;						   \
3:	std	r9,_CCR(r1);		/* save CR in stackframe	*/ \
	std	r11,_NIP(r1);		/* save SRR0 in stackframe	*/ \
	std	r12,_MSR(r1);		/* save SRR1 in stackframe	*/ \
	std	r10,0(r1);		/* make stack chain pointer	*/ \
	std	r0,GPR0(r1);		/* save r0 in stackframe	*/ \
	std	r10,GPR1(r1);		/* save r1 in stackframe	*/ \
	ACCOUNT_CPU_USER_ENTRY(r9, r10);				   \
	std	r2,GPR2(r1);		/* save r2 in stackframe	*/ \
	SAVE_4GPRS(3, r1);		/* save r3 - r6 in stackframe	*/ \
	SAVE_2GPRS(7, r1);		/* save r7, r8 in stackframe	*/ \
	ld	r9,area+EX_R9(r13);	/* move r9, r10 to stackframe	*/ \
	ld	r10,area+EX_R10(r13);					   \
	std	r9,GPR9(r1);						   \
	std	r10,GPR10(r1);						   \
	ld	r9,area+EX_R11(r13);	/* move r11 - r13 to stackframe	*/ \
	ld	r10,area+EX_R12(r13);					   \
	ld	r11,area+EX_R13(r13);					   \
	std	r9,GPR11(r1);						   \
	std	r10,GPR12(r1);						   \
	std	r11,GPR13(r1);						   \
	ld	r2,PACATOC(r13);	/* get kernel TOC into r2	*/ \
	mflr	r9;			/* save LR in stackframe	*/ \
	std	r9,_LINK(r1);						   \
	mfctr	r10;			/* save CTR in stackframe	*/ \
	std	r10,_CTR(r1);						   \
	COPY_SOFTISTATE(r10);						   \
	mfspr	r11,SPRN_XER;		/* save XER in stackframe	*/ \
	std	r11,_XER(r1);						   \
	li	r9,(n)+1;						   \
	std	r9,_TRAP(r1);		/* set trap number		*/ \
	li	r10,0;							   \
	ld	r11,exception_marker@toc(r2);				   \
	std	r10,RESULT(r1);		/* clear regs->result		*/ \
	std	r11,STACK_FRAME_OVERHEAD-16(r1); /* mark the frame	*/

/*
 * Exception vectors.
 */
#define STD_EXCEPTION_PSERIES(n, label)			\
	. = n;						\
	.globl label##_pSeries;				\
label##_pSeries:					\
	HMT_MEDIUM;					\
	mtspr	SPRN_SPRG1,r13;		/* save r13 */	\
	EXCEPTION_PROLOG_PSERIES(PACA_EXGEN, label##_common)

#define HSTD_EXCEPTION_PSERIES(n, label)		\
	. = n;						\
	.globl label##_pSeries;				\
label##_pSeries:					\
	HMT_MEDIUM;					\
	mtspr	SPRN_SPRG1,r20;		/* save r20 */	\
	mfspr	r20,SPRN_HSRR0;		/* copy HSRR0 to SRR0 */ \
	mtspr	SPRN_SRR0,r20;				\
	mfspr	r20,SPRN_HSRR1;		/* copy HSRR0 to SRR0 */ \
	mtspr	SPRN_SRR1,r20;				\
	mfspr	r20,SPRN_SPRG1;		/* restore r20 */ \
	mtspr	SPRN_SPRG1,r13;		/* save r13 */	\
	EXCEPTION_PROLOG_PSERIES(PACA_EXGEN, label##_common)


#define MASKABLE_EXCEPTION_PSERIES(n, label)				\
	. = n;								\
	.globl label##_pSeries;						\
label##_pSeries:							\
	HMT_MEDIUM;							\
	mtspr	SPRN_SPRG1,r13;		/* save r13 */			\
	mfspr	r13,SPRN_SPRG3;		/* get paca address into r13 */	\
	std	r9,PACA_EXGEN+EX_R9(r13);	/* save r9, r10 */	\
	std	r10,PACA_EXGEN+EX_R10(r13);				\
	mfcr	r9;							\
	TEST_SOFTISTATE(r10, masked_interrupt);				\
	mfspr	r10,SPRN_SPRG1;						\
	std	r10,PACA_EXGEN+EX_R13(r13);				\
	std	r11,PACA_EXGEN+EX_R11(r13);				\
	std	r12,PACA_EXGEN+EX_R12(r13);				\
	clrrdi	r12,r13,32;		/* get high part of &label */	\
	mfmsr	r10;							\
	mfspr	r11,SPRN_SRR0;		/* save SRR0 */			\
	LOAD_HANDLER(r12,label##_common)				\
	ori	r10,r10,MSR_IR|MSR_DR|MSR_RI;				\
	mtspr	SPRN_SRR0,r12;						\
	mfspr	r12,SPRN_SRR1;		/* and SRR1 */			\
	mtspr	SPRN_SRR1,r10;						\
	rfid;								\
	b	.	/* prevent speculative execution */

#ifdef CONFIG_IPIPE
/* IBM legacy I-Series are not supported. */
#define ENABLE_INTS				\
	ld	r12,_MSR(r1);			\
	mfmsr	r11;				\
	rlwimi	r11,r12,0,MSR_EE;		\
	mtmsrd	r11,1
#define DISABLE_INTS	/* We lie, mostly... */	\
	ld	r11,PACAROOTPCPU(r13);		\
	ld	r10,0(r11);			\
	ori	r10,r10,1;			\
	std	r10,0(r11);			\
	mfmsr	r10;				\
	ori	r10,r10,MSR_EE;			\
	mtmsrd	r10,1;
#define DISABLE_INTS_REALLY			\
	mfmsr	r11;				\
	rldicl	r11,r11,48,1;/* clear MSR_EE */	\
	rotldi	r11,r11,16;			\
	mtmsrd	r11,1;
#else /* !CONFIG_IPIPE */

#ifdef CONFIG_PPC_ISERIES
#define DISABLE_INTS				\
	li	r11,0;				\
	stb	r11,PACASOFTIRQEN(r13);		\
BEGIN_FW_FTR_SECTION;				\
	stb	r11,PACAHARDIRQEN(r13);		\
END_FW_FTR_SECTION_IFCLR(FW_FEATURE_ISERIES);	\
BEGIN_FW_FTR_SECTION;				\
	mfmsr	r10;				\
	ori	r10,r10,MSR_EE;			\
	mtmsrd	r10,1;				\
END_FW_FTR_SECTION_IFSET(FW_FEATURE_ISERIES)

#else
#define DISABLE_INTS				\
	li	r11,0;				\
	stb	r11,PACASOFTIRQEN(r13);		\
	stb	r11,PACAHARDIRQEN(r13)

#endif /* CONFIG_PPC_ISERIES */
		
#define ENABLE_INTS				\
	ld	r12,_MSR(r1);			\
	mfmsr	r11;				\
	rlwimi	r11,r12,0,MSR_EE;		\
	mtmsrd	r11,1

#endif /* !CONFIG_IPIPE */

#ifdef CONFIG_IPIPE_TRACE_IRQSOFF
#define TRACE_DISABLE_INTS		bl	__ipipe_trace_irqson
#define TRACE_ENABLE_INTS		bl	__ipipe_trace_irqson
#define TRACE_DISABLE_INTS_REALLY	bl	__ipipe_trace_irqsoff
#else	
#define TRACE_DISABLE_INTS
#define TRACE_ENABLE_INTS
#define TRACE_DISABLE_INTS_REALLY
#endif

#define STD_EXCEPTION_COMMON(trap, label, hdlr)		\
	.align	7;					\
	.globl label##_common;				\
label##_common:						\
	EXCEPTION_PROLOG_COMMON(trap, PACA_EXGEN);	\
	DISABLE_INTS;					\
	bl	.save_nvgprs;				\
	TRACE_DISABLE_INTS;				\
	addi	r3,r1,STACK_FRAME_OVERHEAD;		\
	bl	hdlr;					\
	b	.ret_from_except

/*
 * Like STD_EXCEPTION_COMMON, but for exceptions that can occur
 * in the idle task and therefore need the special idle handling.
 */
#define STD_EXCEPTION_COMMON_IDLE(trap, label, hdlr)	\
	.align	7;					\
	.globl label##_common;				\
label##_common:						\
	EXCEPTION_PROLOG_COMMON(trap, PACA_EXGEN);	\
	FINISH_NAP;					\
	DISABLE_INTS;					\
	bl	.save_nvgprs;				\
	TRACE_DISABLE_INTS;				\
	addi	r3,r1,STACK_FRAME_OVERHEAD;		\
	bl	hdlr;					\
	b	.ret_from_except

#define STD_EXCEPTION_COMMON_LITE(trap, label, hdlr)	\
	.align	7;					\
	.globl label##_common;				\
label##_common:						\
	EXCEPTION_PROLOG_COMMON(trap, PACA_EXGEN);	\
	FINISH_NAP;					\
	DISABLE_INTS;					\
BEGIN_FTR_SECTION					\
	bl	.ppc64_runlatch_on;			\
END_FTR_SECTION_IFSET(CPU_FTR_CTRL)			\
	TRACE_DISABLE_INTS;				\
	addi	r3,r1,STACK_FRAME_OVERHEAD;		\
	bl	hdlr;					\
	b	.ret_from_except_lite

#ifdef CONFIG_IPIPE
#define IPIPE_EXCEPTION_COMMON_LITE(trap, label, hdlr)	\
	.align	7;					\
	.globl label##_common;				\
label##_common:						\
	EXCEPTION_PROLOG_COMMON(trap, PACA_EXGEN);	\
	DISABLE_INTS_REALLY;				\
	TRACE_DISABLE_INTS_REALLY;			\
	addi	r3,r1,STACK_FRAME_OVERHEAD;		\
	bl	hdlr;					\
	b	.__ipipe_ret_from_except_lite
#endif /* CONFIG_IPIPE */

/*
 * When the idle code in power4_idle puts the CPU into NAP mode,
 * it has to do so in a loop, and relies on the external interrupt
 * and decrementer interrupt entry code to get it out of the loop.
 * It sets the _TLF_NAPPING bit in current_thread_info()->local_flags
 * to signal that it is in the loop and needs help to get out.
 */
#ifdef CONFIG_PPC_970_NAP
#define FINISH_NAP				\
BEGIN_FTR_SECTION				\
	clrrdi	r11,r1,THREAD_SHIFT;		\
	ld	r9,TI_LOCAL_FLAGS(r11);		\
	andi.	r10,r9,_TLF_NAPPING;		\
	bnel	power4_fixup_nap;		\
END_FTR_SECTION_IFSET(CPU_FTR_CAN_NAP)
#else
#define FINISH_NAP
#endif

#endif	/* _ASM_POWERPC_EXCEPTION_H */

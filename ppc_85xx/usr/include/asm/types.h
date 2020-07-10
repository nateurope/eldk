#ifndef _ASM_POWERPC_TYPES_H
#define _ASM_POWERPC_TYPES_H

#ifndef __ASSEMBLY__

/*
 * This file is never included by application software unless
 * explicitly requested (e.g., via linux/types.h) in which case the
 * application is Linux specific so (user-) name space pollution is
 * not a major issue.  However, for interoperability, libraries still
 * need to be careful to avoid a name clashes.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version
 * 2 of the License, or (at your option) any later version.
 */

#ifdef __powerpc64__
typedef unsigned int umode_t;
#else
typedef unsigned short umode_t;
#endif

/*
 * __xx is ok: it doesn't pollute the POSIX namespace. Use these in the
 * header files exported to user space
 */

typedef __signed__ char __s8;
typedef unsigned char __u8;

typedef __signed__ short __s16;
typedef unsigned short __u16;

typedef __signed__ int __s32;
typedef unsigned int __u32;

#ifdef __powerpc64__
typedef __signed__ long __s64;
typedef unsigned long __u64;
#else
#if defined(__GNUC__)
__extension__ typedef __signed__ long long __s64;
__extension__ typedef unsigned long long __u64;
#endif
#endif /* __powerpc64__ */

typedef struct {
	__u32 u[4];
} __attribute__((aligned(16))) __vector128;

#endif /* __ASSEMBLY__ */


#endif /* _ASM_POWERPC_TYPES_H */

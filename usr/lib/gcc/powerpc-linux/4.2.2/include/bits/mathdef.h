/*  DO NOT EDIT THIS FILE.

    It has been auto-edited by fixincludes from:

	"/var/tmp/eldk.UZpAG7/usr/crosstool/gcc-4.2.2-glibc-20070515T2025-eldk/powerpc-linux/powerpc-linux/sys-include/bits/mathdef.h"

    This had to be done to correct non-standard usages in the
    original, manufacturer supplied header file.  */

/* Copyright (C) 1997,1998,1999,2000,2003,2004,2006
	Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.  */

#if !defined _MATH_H && !defined _COMPLEX_H
# error "Never use <bits/mathdef.h> directly; include <math.h> instead"
#endif


/* FIXME! This file describes properties of the compiler, not the machine;
   it should not be part of libc!

   FIXME! This file does not deal with the -fshort-double option of
   gcc! */

#if defined __USE_ISOC99 && defined _MATH_H && !defined _MATH_H_MATHDEF
# define _MATH_H_MATHDEF	1

# ifdef __GNUC__
#  if  defined(__STRICT_ANSI__)

/* In GNU or ANSI mode, gcc leaves `float' expressions as-is.  */
typedef float float_t;		/* `float' expressions are evaluated as
				   `float'.  */
typedef double double_t;	/* `double' expressions are evaluated as
				   `double'.  */

#  else

/* For `gcc -traditional', `float' expressions are evaluated as `double'. */
typedef double float_t;		/* `float' expressions are evaluated as
				   `double'.  */
typedef double double_t;	/* `double' expressions are evaluated as
				   `double'.  */

#  endif
# else

/* Wild guess at types for float_t and double_t. */
typedef double float_t;
typedef double double_t;

# endif

/* The values returned by `ilogb' for 0 and NaN respectively.  */
# define FP_ILOGB0	(-2147483647)
# define FP_ILOGBNAN	(2147483647)

#endif	/* ISO C99 */

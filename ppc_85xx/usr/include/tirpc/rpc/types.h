/*	$NetBSD: types.h,v 1.13 2000/06/13 01:02:44 thorpej Exp $	*/

/*
 * Sun RPC is a product of Sun Microsystems, Inc. and is provided for
 * unrestricted use provided that this legend is included on all tape
 * media and as a part of the software program in whole or part.  Users
 * may copy or modify Sun RPC without charge, but are not authorized
 * to license or distribute it to anyone else except as part of a product or
 * program developed by the user.
 *
 * SUN RPC IS PROVIDED AS IS WITH NO WARRANTIES OF ANY KIND INCLUDING THE
 * WARRANTIES OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE, OR ARISING FROM A COURSE OF DEALING, USAGE OR TRADE PRACTICE.
 *
 * Sun RPC is provided with no support and without any obligation on the
 * part of Sun Microsystems, Inc. to assist in its use, correction,
 * modification or enhancement.
 *
 * SUN MICROSYSTEMS, INC. SHALL HAVE NO LIABILITY WITH RESPECT TO THE
 * INFRINGEMENT OF COPYRIGHTS, TRADE SECRETS OR ANY PATENTS BY SUN RPC
 * OR ANY PART THEREOF.
 *
 * In no event will Sun Microsystems, Inc. be liable for any lost revenue
 * or profits or other special, indirect and consequential damages, even if
 * Sun has been advised of the possibility of such damages.
 *
 * Sun Microsystems, Inc.
 * 2550 Garcia Avenue
 * Mountain View, California  94043
 *
 *	from: @(#)types.h 1.18 87/07/24 SMI
 *	from: @(#)types.h	2.3 88/08/15 4.0 RPCSRC
 * $FreeBSD: src/include/rpc/types.h,v 1.10.6.1 2003/12/18 00:59:50 peter Exp $
 */

/*
 * Rpc additions to <sys/types.h>
 */
#ifndef _TIRPC_TYPES_H
#define _TIRPC_TYPES_H

#include <sys/types.h>
//#include <sys/_null.h>

typedef int32_t bool_t;
typedef int32_t enum_t;

typedef u_int32_t rpcprog_t;
typedef u_int32_t rpcvers_t;
typedef u_int32_t rpcproc_t;
typedef u_int32_t rpcprot_t;
typedef u_int32_t rpcport_t;
typedef   int32_t rpc_inline_t;

#ifndef NULL
#	define NULL	0
#endif
#define __dontcare__	-1

#ifndef FALSE
#	define FALSE	(0)
#endif
#ifndef TRUE
#	define TRUE	(1)
#endif

#define mem_alloc(bsize)	calloc(1, bsize)
#define mem_free(ptr, bsize)	free(ptr)

#include <sys/time.h>
#include <sys/param.h>
#include <stdlib.h>
#include <netconfig.h>

/*
 * The netbuf structure is defined here, because FreeBSD / NetBSD only use
 * it inside the RPC code. It's in <xti.h> on SVR4, but it would be confusing
 * to have an xti.h, since FreeBSD / NetBSD does not support XTI/TLI.
 */

/*
 * The netbuf structure is used for transport-independent address storage.
 */
struct netbuf {
  unsigned int maxlen;
  unsigned int len;
  void *buf;
};

/*
 * The format of the addres and options arguments of the XTI t_bind call.
 * Only provided for compatibility, it should not be used.
 */

struct t_bind {
  struct netbuf   addr;
  unsigned int    qlen;
};

/*
 * Internal library and rpcbind use. This is not an exported interface, do
 * not use.
 */
struct __rpc_sockinfo {
	int si_af; 
	int si_proto;
	int si_socktype;
	int si_alen;
};

#endif /* _TIRPC_TYPES_H */

/*	$NetBSD: svc_auth.h,v 1.8 2000/06/02 22:57:57 fvdl Exp $	*/

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
 *	from: @(#)svc_auth.h 1.6 86/07/16 SMI
 *	@(#)svc_auth.h	2.1 88/07/29 4.0 RPCSRC
 * $FreeBSD: src/include/rpc/svc_auth.h,v 1.14 2002/03/23 17:24:55 imp Exp $
 */

/*
 * svc_auth.h, Service side of rpc authentication.
 *
 * Copyright (C) 1984, Sun Microsystems, Inc.
 */

#ifndef _RPC_SVC_AUTH_H
#define _RPC_SVC_AUTH_H

/*
 * Interface to server-side authentication flavors.
 */
typedef struct {
	struct svc_auth_ops {
		int   (*svc_ah_wrap)(void);
		int   (*svc_ah_unwrap)(void);
		int   (*svc_ah_destroy)(void);
		} *svc_ah_ops;
	caddr_t svc_ah_private;
} SVCAUTH;

#define SVCAUTH_DESTROY(cred)		((*(cred)->svc_ah_ops->svc_ah_destroy)())
#define svcauth_destroy(cred)		((*(cred)->svc_ah_ops->svc_ah_destroy)())

/*
 * Server side authenticator
 */
__BEGIN_DECLS
extern enum auth_stat _authenticate(struct svc_req *, struct rpc_msg *);
extern int svc_auth_reg(int, enum auth_stat (*)(struct svc_req *,
			  struct rpc_msg *));

__END_DECLS

#endif /* !_RPC_SVC_AUTH_H */

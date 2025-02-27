/* 
   SSL/TLS abstraction layer for neon
   Copyright (C) 2003-2004, Joe Orton <joe@manyfish.co.uk>

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.
   
   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with this library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place - Suite 330, Boston,
   MA 02111-1307, USA

*/

/* ne_ssl.h defines an interface for loading and accessing the
 * properties of SSL certificates. */

#ifndef NE_SSL_H
#define NE_SSL_H 1

#include "ne_defs.h"

BEGIN_NEON_DECLS

/* A "distinguished name"; a unique name for some entity. */
typedef struct ne_ssl_dname_s ne_ssl_dname;

/* Returns a single-line string representation of a distinguished
 * name, intended to be human-readable (e.g. "Acme Ltd., Norfolk,
 * GB").  Return value is a UTF-8-encoded malloc-allocated string and
 * must be free'd by the caller. */
char *ne_ssl_readable_dname(const ne_ssl_dname *dn);

/* Returns zero if 'dn1' and 'dn2' refer to same name, or non-zero if
 * they are different. */
int ne_ssl_dname_cmp(const ne_ssl_dname *dn1, const ne_ssl_dname *dn2);

/* An SSL certificate. */
typedef struct ne_ssl_certificate_s ne_ssl_certificate;

/* Read a certificate from a file in PEM format; returns NULL if the
 * certificate could not be parsed. */
ne_ssl_certificate *ne_ssl_cert_read(const char *filename);

/* Write a certificate to a file in PEM format; returns non-zero if
 * the certificate could not be written. */
int ne_ssl_cert_write(const ne_ssl_certificate *cert, const char *filename);

/* Export a certificate to a base64-encoded, NUL-terminated string.
 * The returned string is malloc-allocated and must be free()d by the
 * caller. */
char *ne_ssl_cert_export(const ne_ssl_certificate *cert);

/* Import a certificate from a base64-encoded string as returned by
 * ne_ssl_cert_export(). Returns a certificate object or NULL if
 * 'data' was not valid. */
ne_ssl_certificate *ne_ssl_cert_import(const char *data);

/* Returns the identity of the certificate, or NULL if none is given.
 * For a server certificate this will be the hostname of the server to
 * whom the cert was issued. */
const char *ne_ssl_cert_identity(const ne_ssl_certificate *cert);

/* Return the certificate of the entity which signed certificate
 * 'cert'.  Returns NULL if 'cert' is self-signed or the issuer
 * certificate is not available. */
const ne_ssl_certificate *ne_ssl_cert_signedby(const ne_ssl_certificate *cert);

/* Returns the distinguished name of the certificate issuer. */
const ne_ssl_dname *ne_ssl_cert_issuer(const ne_ssl_certificate *cert);

/* Returns the distinguished name of the certificate subject. */
const ne_ssl_dname *ne_ssl_cert_subject(const ne_ssl_certificate *cert);

#define NE_SSL_DIGESTLEN (60)

/* Calculate the certificate digest ("fingerprint") and format it as a
 * NUL-terminated hex string in 'digest', of the form "aa:bb:...:ff".
 * Returns zero on success or non-zero if there was an internal error
 * whilst calculating the digest.  'digest' must be at least 
 * NE_SSL_DIGESTLEN bytes in length. */
int ne_ssl_cert_digest(const ne_ssl_certificate *cert, char *digest);

#define NE_SSL_VDATELEN (30)

/* Copy the validity dates into buffers 'from' and 'until' as
 * NUL-terminated human-readable strings.  The buffers must be at
 * least NE_SSL_VDATELEN bytes in length. */
void ne_ssl_cert_validity(const ne_ssl_certificate *cert,
                          char *from, char *until);

/* Returns zero if 'c1' and 'c2' refer to the same certificate, or
 * non-zero otherwise. */
int ne_ssl_cert_cmp(const ne_ssl_certificate *c1,
                    const ne_ssl_certificate *c2);

/* Deallocate memory associated with certificate. */
void ne_ssl_cert_free(ne_ssl_certificate *cert);

/* A client certificate (and private key). */
typedef struct ne_ssl_client_cert_s ne_ssl_client_cert;

/* Read a client certificate and private key from a PKCS12 file;
 * returns NULL if the file could not be parsed.  If the client cert
 * is encrypted, it must be decrypted before use. */
ne_ssl_client_cert *ne_ssl_clicert_read(const char *filename);

/* Returns the "friendly name" given for the client cert, or NULL if
 * none given.  This can be called before or after the client cert has
 * been decrypted.  Returns a NUL-terminated string. */
const char *ne_ssl_clicert_name(ne_ssl_client_cert *ccert);

/* Returns non-zero if client cert is encrypted. */
int ne_ssl_clicert_encrypted(const ne_ssl_client_cert *ccert);

/* Decrypt the encrypted client cert using given password.  Returns
 * non-zero on failure, in which case, the function can be called
 * again with a different password.  For a ccert on which _encrypted()
 * returns 0, calling _decrypt results in undefined behaviour. */
int ne_ssl_clicert_decrypt(ne_ssl_client_cert *ccert, const char *password);

/* Return the actual certificate part of the client certificate (never
 * returns NULL). */
const ne_ssl_certificate *ne_ssl_clicert_owner(const ne_ssl_client_cert *ccert);

/* Deallocate memory associated with a client certificate. */
void ne_ssl_clicert_free(ne_ssl_client_cert *ccert);

/* An SSL context; only necessary when interfacing with ne_socket.h. */
typedef struct ne_ssl_context_s ne_ssl_context;

/* Create an SSL context. */
ne_ssl_context *ne_ssl_context_create(void);

/* Trust the given certificate 'cert' in context 'ctx'. */
void ne_ssl_ctx_trustcert(ne_ssl_context *ctx, const ne_ssl_certificate *cert);

/* Destroy an SSL context. */
void ne_ssl_context_destroy(ne_ssl_context *ctx);

END_NEON_DECLS

#endif

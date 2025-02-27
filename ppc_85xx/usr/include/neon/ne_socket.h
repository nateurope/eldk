/* 
   socket handling interface
   Copyright (C) 1999-2003, Joe Orton <joe@manyfish.co.uk>

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

#ifndef NE_SOCKET_H
#define NE_SOCKET_H

#include <sys/types.h>

#include "ne_defs.h"
#include "ne_ssl.h" /* for ne_ssl_context */

BEGIN_NEON_DECLS

#define NE_SOCK_ERROR (-1)
/* Read/Write timed out */
#define NE_SOCK_TIMEOUT (-2)
/* Socket was closed */
#define NE_SOCK_CLOSED (-3)
/* Connection was reset (e.g. server crashed) */
#define NE_SOCK_RESET (-4)
/* Secure connection was subject to possible truncation attack. */
#define NE_SOCK_TRUNC (-5)

/* ne_socket represents a TCP socket. */
typedef struct ne_socket_s ne_socket;

/* ne_sock_addr represents an address object. */
typedef struct ne_sock_addr_s ne_sock_addr;

#ifndef NE_INET_ADDR_DEFINED
typedef struct ne_inet_addr_s ne_inet_addr;
#endif

/* While neon itself doesn't require per-process global
 * initialization, some platforms do, and so does the OpenSSL
 * library. */
int ne_sock_init(void);

/* Shutdown any underlying libraries. */
void ne_sock_exit(void);

/* Resolve the given hostname.  'flags' are currently ignored.  Hex
 * string IPv6 addresses (e.g. `::1') may be enclosed in brackets
 * (e.g. `[::1]'). */
ne_sock_addr *ne_addr_resolve(const char *hostname, int flags);

/* Returns zero if name resolution was successful, non-zero on
 * error. */
int ne_addr_result(const ne_sock_addr *addr);

/* Returns the first network address associated with the 'addr'
 * object.  Undefined behaviour if ne_addr_result returns non-zero for
 * 'addr'; otherwise, never returns NULL.  */
const ne_inet_addr *ne_addr_first(ne_sock_addr *addr);

/* Returns the next network address associated with the 'addr' object,
 * or NULL if there are no more. */
const ne_inet_addr *ne_addr_next(ne_sock_addr *addr);

/* NB: the pointers returned by ne_addr_first and ne_addr_next are
 * valid until ne_addr_destroy is called for the corresponding
 * ne_sock_addr object.  They must not be passed to ne_iaddr_free. */

/* If name resolution fails, copies the error string into 'buffer',
 * which is of size 'bufsiz'.  'buffer' is returned. */
char *ne_addr_error(const ne_sock_addr *addr, char *buffer, size_t bufsiz);

/* Destroys an address object created by ne_addr_resolve. */
void ne_addr_destroy(ne_sock_addr *addr);

/* Network address type; IPv4 or IPv6 */
typedef enum {
    ne_iaddr_ipv4 = 0,
    ne_iaddr_ipv6
} ne_iaddr_type;

/* Create a network address from raw byte representation (in network
 * byte order) of given type.  'raw' must be four bytes for an IPv4
 * address, 16 bytes for an IPv6 address.  May return NULL if address
 * type is not supported. */
ne_inet_addr *ne_iaddr_make(ne_iaddr_type type, const unsigned char *raw);

/* Compare two network addresses i1 and i2; return non-zero if they
 * are not equal. */
int ne_iaddr_cmp(const ne_inet_addr *i1, const ne_inet_addr *i2);

/* Prints the string representation of network address 'ia' into the
 * 'buffer', which is of size 'bufsiz'.  Returns 'buffer'. */
char *ne_iaddr_print(const ne_inet_addr *ia, char *buffer, size_t bufsiz);

/* Free a network address created using ne_iaddr_make. */
void ne_iaddr_free(ne_inet_addr *addr);

/* Create a TCP socket; returns NULL on error. */
ne_socket *ne_sock_create(void);

/* Connect the socket to server at address 'addr' on port 'port'.
 * Returns non-zero if a connection could not be established. */
int ne_sock_connect(ne_socket *sock, const ne_inet_addr *addr, 
                    unsigned int port);

/* ne_sock_read reads up to 'count' bytes into 'buffer'.
 * Returns:
 *   NE_SOCK_* on error,
 *   >0 length of data read into buffer.
 */
ssize_t ne_sock_read(ne_socket *sock, char *buffer, size_t count);

/* ne_sock_peek reads up to 'count' bytes into 'buffer', but the data
 * will still be returned on a subsequent call to ne_sock_read or 
 * ne_sock_peek.
 * Returns:
 *   NE_SOCK_* on error,
 *   >0 length of data read into buffer.
 */
ssize_t ne_sock_peek(ne_socket *sock, char *buffer, size_t count);

/* Block for up to 'n' seconds until data becomes available for reading
 * on the socket. Returns:
 *  NE_SOCK_* on error,
 *  NE_SOCK_TIMEOUT if no data arrives in 'n' seconds.
 *  0 if data arrived on the socket.
 */
int ne_sock_block(ne_socket *sock, int n);

/* Writes 'count' bytes of 'data' to the socket.
 * Returns 0 on success, NE_SOCK_* on error. */
int ne_sock_fullwrite(ne_socket *sock, const char *data, size_t count); 

/* Reads an LF-terminated line into 'buffer', and NUL-terminate it.
 * At most 'len' bytes are read (including the NUL terminator).
 * Returns:
 * NE_SOCK_* on error,
 * >0 number of bytes read (including NUL terminator)
 */
ssize_t ne_sock_readline(ne_socket *sock, char *buffer, size_t len);

/* Read exactly 'len' bytes into buffer; returns 0 on success, SOCK_*
 * on error. */
ssize_t ne_sock_fullread(ne_socket *sock, char *buffer, size_t len);

/* Accept a connection on listening socket 'fd'. */
int ne_sock_accept(ne_socket *sock, int fd);

/* Returns the file descriptor used for socket 'sock'. */
int ne_sock_fd(const ne_socket *sock);

/* Close the socket, and destroy the socket object. Returns non-zero
 * on error. */
int ne_sock_close(ne_socket *sock);

/* Return current error string for socket. */
const char *ne_sock_error(const ne_socket *sock);

/* Set read timeout for socket. */
void ne_sock_read_timeout(ne_socket *sock, int timeout);

/* Returns the standard TCP port for the given service, or zero if
 * none is known. */
int ne_service_lookup(const char *name);

/* Enable SSL with an already-negotiated SSL socket. */
void ne_sock_switch_ssl(ne_socket *sock, void *ssl);

/* Perform an SSL negotiation on 'sock', using given context. */
int ne_sock_connect_ssl(ne_socket *sock, ne_ssl_context *ctx);

/* Return SSL socket object in use for 'sock'. */
typedef struct ne_ssl_socket_s ne_ssl_socket;
ne_ssl_socket *ne_sock_sslsock(ne_socket *sock);

END_NEON_DECLS

#endif /* NE_SOCKET_H */

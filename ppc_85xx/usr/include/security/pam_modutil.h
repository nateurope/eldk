/*
 * Copyright (c) 2001-2002 Andrew Morgan <morgan@kernel.org>
 *
 * <security/pam_modutil.h>
 *
 * This file is a list of handy libc wrappers that attempt to provide some
 * thread-safe and other convenient functionality to modules in a common form.
 *
 * A number of these functions reserve space in a pam_[sg]et_data item.
 * In all cases, the name of the item is prefixed with "pam_modutil_*".
 *
 * On systems that simply can't support thread safe programming, these
 * functions don't support it either - sorry.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, and the entire permission notice in its entirety,
 *    including the disclaimer of warranties.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. The name of the author may not be used to endorse or promote
 *    products derived from this software without specific prior
 *    written permission.
 *
 * ALTERNATIVELY, this product may be distributed under the terms of
 * the GNU Public License, in which case the provisions of the GPL are
 * required INSTEAD OF the above restrictions.  (This clause is
 * necessary due to a potential bad interaction between the GPL and
 * the restrictions contained in a BSD-style copyright.)
 *
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _SECURITY__PAM_MODUTIL_H
#define _SECURITY__PAM_MODUTIL_H

#ifdef __cplusplus
extern "C" {
#endif

#include <security/_pam_types.h>

extern struct passwd * PAM_NONNULL((1,2))
pam_modutil_getpwnam(pam_handle_t *pamh, const char *user);

extern struct passwd * PAM_NONNULL((1))
pam_modutil_getpwuid(pam_handle_t *pamh, uid_t uid);

extern struct group  * PAM_NONNULL((1,2))
pam_modutil_getgrnam(pam_handle_t *pamh, const char *group);

extern struct group  * PAM_NONNULL((1))
pam_modutil_getgrgid(pam_handle_t *pamh, gid_t gid);

extern struct spwd   * PAM_NONNULL((1,2))
pam_modutil_getspnam(pam_handle_t *pamh, const char *user);

extern int PAM_NONNULL((1,2,3))
pam_modutil_user_in_group_nam_nam(pam_handle_t *pamh,
                                  const char *user,
                                  const char *group);

extern int PAM_NONNULL((1,2))
pam_modutil_user_in_group_nam_gid(pam_handle_t *pamh,
                                  const char *user,
                                  gid_t group);

extern int PAM_NONNULL((1,3))
pam_modutil_user_in_group_uid_nam(pam_handle_t *pamh,
                                  uid_t user,
                                  const char *group);

extern int PAM_NONNULL((1))
pam_modutil_user_in_group_uid_gid(pam_handle_t *pamh,
                                  uid_t user,
                                  gid_t group);

extern const char * PAM_NONNULL((1))
pam_modutil_getlogin(pam_handle_t *pamh);

extern int
pam_modutil_read(int fd, char *buffer, int count);

extern int
pam_modutil_write(int fd, const char *buffer, int count);

#ifdef __cplusplus
}
#endif

#endif /* _SECURITY__PAM_MODUTIL_H */

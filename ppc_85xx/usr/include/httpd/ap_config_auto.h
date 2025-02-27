/* include/ap_config_auto.h.  Generated from ap_config_auto.h.in by configure.  */
/* include/ap_config_auto.h.in.  Generated from configure.in by autoheader.  */

/* Location of the source for the current MPM */
#define APACHE_MPM_DIR "server/mpm/prefork"

/* SuExec root directory */
#define AP_DOC_ROOT "/var/www"

/* Allow modules to run hook after a fatal exception */
/* #undef AP_ENABLE_EXCEPTION_HOOK */

/* Allow IPv4 connections on IPv6 listening sockets */
#define AP_ENABLE_V4_MAPPED 1

/* Minimum allowed GID */
#define AP_GID_MIN 500

/* User allowed to call SuExec */
#define AP_HTTPD_USER "apache"

/* SuExec log file */
#define AP_LOG_EXEC "/var/log/httpd/suexec.log"

/* Listening sockets are non-blocking when there are more than 1 */
#define AP_NONBLOCK_WHEN_MULTI_LISTEN 1

/* safe shell path for SuExec */
/* #undef AP_SAFE_PATH */

/* umask for suexec'd process */
/* #undef AP_SUEXEC_UMASK */

/* Location of the MIME types config file, relative to the Apache root
   directory */
#define AP_TYPES_CONFIG_FILE "conf/mime.types"

/* Minimum allowed UID */
#define AP_UID_MIN 500

/* User subdirectory */
/* #undef AP_USERDIR_SUFFIX */

/* Using autoconf to configure Apache */
#define AP_USING_AUTOCONF 1

/* Define to 1 if you have the `bindprocessor' function. */
/* #undef HAVE_BINDPROCESSOR */

/* Define to 1 if you have the <bstring.h> header file. */
/* #undef HAVE_BSTRING_H */

/* Define if distcache support is enabled */
/* #undef HAVE_DISTCACHE */

/* Define to 1 if you have the `ENGINE_init' function. */
#define HAVE_ENGINE_INIT 1

/* Define to 1 if you have the `ENGINE_load_builtin_engines' function. */
#define HAVE_ENGINE_LOAD_BUILTIN_ENGINES 1

/* Define to 1 if you have the `getgrnam' function. */
#define HAVE_GETGRNAM 1

/* Define to 1 if you have the `getpwnam' function. */
#define HAVE_GETPWNAM 1

/* Define if struct tm has a tm_gmtoff field */
#define HAVE_GMTOFF 1

/* Define to 1 if you have the <grp.h> header file. */
#define HAVE_GRP_H 1

/* Define to 1 if you have the `initgroups' function. */
#define HAVE_INITGROUPS 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `killpg' function. */
#define HAVE_KILLPG 1

/* Define to 1 if you have the `crypto' library (-lcrypto). */
#define HAVE_LIBCRYPTO 1

/* Define to 1 if you have the `ssl' library (-lssl). */
#define HAVE_LIBSSL 1

/* Define to 1 if you have the `sslc' library (-lsslc). */
/* #undef HAVE_LIBSSLC */

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define if SSL is supported using OpenSSL */
#define HAVE_OPENSSL 1

/* Define to 1 if you have the <openssl/engine.h> header file. */
#define HAVE_OPENSSL_ENGINE_H 1

/* Define to 1 if you have the <openssl/opensslv.h> header file. */
#define HAVE_OPENSSL_OPENSSLV_H 1

/* Define to 1 if you have the <openssl/ssl.h> header file. */
#define HAVE_OPENSSL_SSL_H 1

/* Define to 1 if you have the `prctl' function. */
#define HAVE_PRCTL 1

/* Define to 1 if you have the `pthread_kill' function. */
/* #undef HAVE_PTHREAD_KILL */

/* Define to 1 if you have the <pwd.h> header file. */
#define HAVE_PWD_H 1

/* Define to 1 if you have the `setsid' function. */
#define HAVE_SETSID 1

/* Define if SSL is supported using SSL-C */
/* #undef HAVE_SSLC */

/* Define to 1 if you have the <sslc.h> header file. */
/* #undef HAVE_SSLC_H */

/* Define to 1 if you have the `SSL_set_cert_store' function. */
/* #undef HAVE_SSL_SET_CERT_STORE */

/* Define to 1 if you have the `SSL_set_state' function. */
/* #undef HAVE_SSL_SET_STATE */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `syslog' function. */
#define HAVE_SYSLOG 1

/* Define to 1 if you have the <sys/ipc.h> header file. */
#define HAVE_SYS_IPC_H 1

/* Define to 1 if you have the <sys/prctl.h> header file. */
#define HAVE_SYS_PRCTL_H 1

/* Define to 1 if you have the <sys/processor.h> header file. */
/* #undef HAVE_SYS_PROCESSOR_H */

/* Define to 1 if you have the <sys/resource.h> header file. */
#define HAVE_SYS_RESOURCE_H 1

/* Define to 1 if you have the <sys/sem.h> header file. */
#define HAVE_SYS_SEM_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/times.h> header file. */
#define HAVE_SYS_TIMES_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have <sys/wait.h> that is POSIX.1 compatible. */
#define HAVE_SYS_WAIT_H 1

/* Define to 1 if you have the `timegm' function. */
#define HAVE_TIMEGM 1

/* Define to 1 if you have the `times' function. */
#define HAVE_TIMES 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Root directory of the Apache install area */
#define HTTPD_ROOT "/etc/httpd"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME ""

/* Define to the full name and version of this package. */
#define PACKAGE_STRING ""

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME ""

/* Define to the version of this package. */
#define PACKAGE_VERSION ""

/* Location of the config file, relative to the Apache root directory */
#define SERVER_CONFIG_FILE "conf/httpd.conf"

/* This platform doesn't suffer from the thundering herd problem */
#define SINGLE_LISTEN_UNSERIALIZED_ACCEPT 1

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Path to suexec binary */
#define SUEXEC_BIN "/usr/sbin/suexec"

/* Define to 1 if on AIX 3.
   System headers sometimes define this.
   We just want to avoid a redefinition error message.  */
#ifndef _ALL_SOURCE
/* # undef _ALL_SOURCE */
#endif

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to 'int' if <sys/resource.h> doesn't define it for us */
/* #undef rlim_t */

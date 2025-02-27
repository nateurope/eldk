/*
 * See the file LICENSE for redistribution information.
 *
 * Copyright (c) 1996-2004
 *	Sleepycat Software.  All rights reserved.
 *
 * $Id: db.in,v 11.463 2004/10/11 18:47:50 bostic Exp $
 *
 * db.h include file layout:
 *	General.
 *	Database Environment.
 *	Locking subsystem.
 *	Logging subsystem.
 *	Shared buffer cache (mpool) subsystem.
 *	Transaction subsystem.
 *	Access methods.
 *	Access method cursors.
 *	Dbm/Ndbm, Hsearch historic interfaces.
 */

#ifndef _DB_H_
#define	_DB_H_

#ifndef __NO_SYSTEM_INCLUDES
#include <sys/types.h>
#include <inttypes.h>
#include <stdint.h>
#include <stddef.h>
#include <stdio.h>
#endif

#if defined(__cplusplus)
extern "C" {
#endif


#undef __P
#define	__P(protos)	protos

/*
 * Berkeley DB version information.
 */
#define	DB_VERSION_MAJOR	4
#define	DB_VERSION_MINOR	3
#define	DB_VERSION_PATCH	27
#define	DB_VERSION_STRING	"Sleepycat Software: Berkeley DB 4.3.27: (December 22, 2004)"

/*
 * !!!
 * Berkeley DB uses specifically sized types.  If they're not provided by
 * the system, typedef them here.
 *
 * We protect them against multiple inclusion using __BIT_TYPES_DEFINED__,
 * as does BIND and Kerberos, since we don't know for sure what #include
 * files the user is using.
 *
 * !!!
 * We also provide the standard u_int, u_long etc., if they're not provided
 * by the system.
 */
#ifndef	__BIT_TYPES_DEFINED__
#define	__BIT_TYPES_DEFINED__







#endif







/*
 * uintmax_t --
 * Largest unsigned type, used to align structures in memory.  We don't store
 * floating point types in structures, so integral types should be sufficient
 * (and we don't have to worry about systems that store floats in other than
 * power-of-2 numbers of bytes).  Additionally this fixes compilers that rewrite
 * structure assignments and ANSI C memcpy calls to be in-line instructions
 * that happen to require alignment.  Note: this alignment isn't sufficient for
 * mutexes, which depend on things like cache line alignment.  Mutex alignment
 * is handled separately, in mutex.h.
 *
 * uintptr_t --
 * Unsigned type that's the same size as a pointer.  There are places where
 * DB modifies pointers by discarding the bottom bits to guarantee alignment.
 * We can't use uintmax_t, it may be larger than the pointer, and compilers
 * get upset about that.  So far we haven't run on any machine where there's
 * no unsigned type the same size as a pointer -- here's hoping.
 */



/*
 * Sequences are only available on machines with 64-bit integral types.
 */
typedef int64_t db_seq_t;

/* Basic types that are exported or quasi-exported. */
/*@-incondefs -fielduse -enummemuse -typeuse @*/
typedef	u_int32_t	db_pgno_t;	/* Page number type. */
typedef	u_int16_t	db_indx_t;	/* Page offset type. */
#define	DB_MAX_PAGES	0xffffffff	/* >= # of pages in a file */

typedef	u_int32_t	db_recno_t;	/* Record number type. */
#define	DB_MAX_RECORDS	0xffffffff	/* >= # of records in a tree */

typedef u_int32_t	db_timeout_t;	/* Type of a timeout. */

/*
 * Region offsets are the difference between a pointer in a region and the
 * region's base address.  With private environments, both addresses are the
 * result of calling malloc, and we can't assume anything about what malloc
 * will return, so region offsets have to be able to hold differences between
 * arbitrary pointers.
 */
typedef	uintptr_t	roff_t;

/*
 * Forward structure declarations, so we can declare pointers and
 * applications can get type checking.
 */
struct __db;		typedef struct __db DB;
struct __db_bt_stat;	typedef struct __db_bt_stat DB_BTREE_STAT;
struct __db_cipher;	typedef struct __db_cipher DB_CIPHER;
struct __db_dbt;	typedef struct __db_dbt DBT;
struct __db_env;	typedef struct __db_env DB_ENV;
struct __db_h_stat;	typedef struct __db_h_stat DB_HASH_STAT;
struct __db_ilock;	typedef struct __db_ilock DB_LOCK_ILOCK;
struct __db_lock_stat;	typedef struct __db_lock_stat DB_LOCK_STAT;
struct __db_lock_u;	typedef struct __db_lock_u DB_LOCK;
struct __db_lockreq;	typedef struct __db_lockreq DB_LOCKREQ;
struct __db_log_cursor;	typedef struct __db_log_cursor DB_LOGC;
struct __db_log_stat;	typedef struct __db_log_stat DB_LOG_STAT;
struct __db_lsn;	typedef struct __db_lsn DB_LSN;
struct __db_mpool;	typedef struct __db_mpool DB_MPOOL;
struct __db_mpool_fstat;typedef struct __db_mpool_fstat DB_MPOOL_FSTAT;
struct __db_mpool_stat;	typedef struct __db_mpool_stat DB_MPOOL_STAT;
struct __db_mpoolfile;	typedef struct __db_mpoolfile DB_MPOOLFILE;
struct __db_preplist;	typedef struct __db_preplist DB_PREPLIST;
struct __db_qam_stat;	typedef struct __db_qam_stat DB_QUEUE_STAT;
struct __db_rep;	typedef struct __db_rep DB_REP;
struct __db_rep_stat;	typedef struct __db_rep_stat DB_REP_STAT;
struct __db_sequence;	typedef struct __db_sequence DB_SEQUENCE;
struct __db_seq_record; typedef struct __db_seq_record DB_SEQ_RECORD;
struct __db_seq_stat;	typedef struct __db_seq_stat DB_SEQUENCE_STAT;
struct __db_txn;	typedef struct __db_txn DB_TXN;
struct __db_txn_active;	typedef struct __db_txn_active DB_TXN_ACTIVE;
struct __db_txn_stat;	typedef struct __db_txn_stat DB_TXN_STAT;
struct __db_txnmgr;	typedef struct __db_txnmgr DB_TXNMGR;
struct __dbc;		typedef struct __dbc DBC;
struct __dbc_internal;	typedef struct __dbc_internal DBC_INTERNAL;
struct __fh_t;		typedef struct __fh_t DB_FH;
struct __fname;		typedef struct __fname FNAME;
struct __key_range;	typedef struct __key_range DB_KEY_RANGE;
/*@=incondefs@*/
struct __mpoolfile;	typedef struct __mpoolfile MPOOLFILE;
struct __mutex_t;	typedef struct __mutex_t DB_MUTEX;

/* Key/data structure -- a Data-Base Thang. */
struct __db_dbt {
	/*
	 * data/size must be fields 1 and 2 for DB 1.85 compatibility.
	 */
	void	 *data;			/* Key/data */
	u_int32_t size;			/* key/data length */

	u_int32_t ulen;			/* RO: length of user buffer. */
	u_int32_t dlen;			/* RO: get/put record length. */
	u_int32_t doff;			/* RO: get/put record offset. */

#define	DB_DBT_APPMALLOC	0x001	/* Callback allocated memory. */
#define	DB_DBT_ISSET		0x002	/* Lower level calls set value. */
#define	DB_DBT_MALLOC		0x004	/* Return in malloc'd memory. */
#define	DB_DBT_PARTIAL		0x008	/* Partial put/get. */
#define	DB_DBT_REALLOC		0x010	/* Return in realloc'd memory. */
#define	DB_DBT_USERMEM		0x020	/* Return in user's memory. */
#define	DB_DBT_DUPOK		0x040	/* Insert if duplicate. */
	u_int32_t flags;
};

/*
 * Common flags --
 *	Interfaces which use any of these common flags should never have
 *	interface specific flags in this range.
 */
#define	DB_CREATE	      0x0000001	/* Create file as necessary. */
#define	DB_CXX_NO_EXCEPTIONS  0x0000002	/* C++: return error values. */
#define	DB_FORCE	      0x0000004	/* Force (anything). */
#define	DB_NOMMAP	      0x0000008	/* Don't mmap underlying file. */
#define	DB_RDONLY	      0x0000010	/* Read-only (O_RDONLY). */
#define	DB_RECOVER	      0x0000020	/* Run normal recovery. */
#define	DB_THREAD	      0x0000040	/* Applications are threaded. */
#define	DB_TRUNCATE	      0x0000080	/* Discard existing DB (O_TRUNC). */
#define	DB_TXN_NOSYNC	      0x0000100	/* Do not sync log on commit. */
#define	DB_TXN_NOT_DURABLE    0x0000200	/* Do not log changes. */
#define	DB_USE_ENVIRON	      0x0000400	/* Use the environment. */
#define	DB_USE_ENVIRON_ROOT   0x0000800	/* Use the environment if root. */

/*
 * Common flags --
 *	Interfaces which use any of these common flags should never have
 *	interface specific flags in this range.
 *
 * DB_AUTO_COMMIT:
 *	DB_ENV->set_flags, DB->associate, DB->del, DB->put, DB->open,
 *	DB->remove, DB->rename, DB->truncate
 * DB_DEGREE_2:
 *	DB->cursor, DB->get, DB->join, DBcursor->c_get, DB_ENV->txn_begin
 * DB_DIRTY_READ:
 *	DB->cursor, DB->get, DB->join, DB->open, DBcursor->c_get,
 *	DB_ENV->txn_begin
 * DB_NOAUTO_COMMIT
 *	DB->associate, DB->del, DB->put, DB->open,
 *	DB->remove, DB->rename, DB->truncate
 *
 * !!!
 * The DB_DIRTY_READ and DB_DEGREE_2 bit masks can't be changed without
 * also changing the masks for the flags that can be OR'd into DB
 * access method and cursor operation values.
 */
#define	DB_AUTO_COMMIT	      0x01000000/* Implied transaction. */
#define	DB_DEGREE_2	      0x02000000/* Degree 2. */
#define	DB_DIRTY_READ	      0x04000000/* Dirty Read. */
#define	DB_NO_AUTO_COMMIT     0x08000000/* Override env-wide AUTOCOMMIT. */

/*
 * Flags private to db_env_create.
 */
#define	DB_RPCCLIENT	      0x0000001	/* An RPC client environment. */

/*
 * Flags private to db_create.
 */
#define	DB_REP_CREATE	      0x0000001	/* Open of an internal rep database. */
#define	DB_XA_CREATE	      0x0000002	/* Open in an XA environment. */

/*
 * Flags private to DB_ENV->open.
 *	   Shared flags up to 0x0000800 */
#define	DB_INIT_CDB	      0x0001000	/* Concurrent Access Methods. */
#define	DB_INIT_LOCK	      0x0002000	/* Initialize locking. */
#define	DB_INIT_LOG	      0x0004000	/* Initialize logging. */
#define	DB_INIT_MPOOL	      0x0008000	/* Initialize mpool. */
#define	DB_INIT_REP	      0x0010000	/* Initialize replication. */
#define	DB_INIT_TXN	      0x0020000	/* Initialize transactions. */
#define	DB_JOINENV	      0x0040000	/* Initialize all subsystems present. */
#define	DB_LOCKDOWN	      0x0080000	/* Lock memory into physical core. */
#define	DB_PRIVATE	      0x0100000	/* DB_ENV is process local. */
#define	DB_RECOVER_FATAL      0x0200000	/* Run catastrophic recovery. */
#define	DB_SYSTEM_MEM	      0x0400000	/* Use system-backed memory. */

/*
 * Flags private to DB->open.
 *	   Shared flags up to 0x0000800 */
#define	DB_EXCL		      0x0001000	/* Exclusive open (O_EXCL). */
#define	DB_FCNTL_LOCKING      0x0002000	/* UNDOC: fcntl(2) locking. */
#define	DB_RDWRMASTER	      0x0004000	/* UNDOC: allow subdb master open R/W */
#define	DB_WRITEOPEN	      0x0008000	/* UNDOC: open with write lock. */

/*
 * Flags private to DB_ENV->txn_begin.
 *	   Shared flags up to 0x0000800 */
#define	DB_TXN_NOWAIT	      0x0001000	/* Do not wait for locks in this TXN. */
#define	DB_TXN_SYNC	      0x0002000	/* Always sync log on commit. */

/*
 * Flags private to DB_ENV->set_encrypt.
 */
#define	DB_ENCRYPT_AES	      0x0000001	/* AES, assumes SHA1 checksum */

/*
 * Flags private to DB_ENV->set_flags.
 *	   Shared flags up to 0x00000800 */
#define	DB_CDB_ALLDB	      0x00001000/* Set CDB locking per environment. */
#define	DB_DIRECT_DB	      0x00002000/* Don't buffer databases in the OS. */
#define	DB_DIRECT_LOG	      0x00004000/* Don't buffer log files in the OS. */
#define	DB_DSYNC_LOG	      0x00008000/* Set O_DSYNC on the log. */
#define	DB_LOG_AUTOREMOVE     0x00010000/* Automatically remove log files. */
#define	DB_LOG_INMEMORY       0x00020000/* Store logs in buffers in memory. */
#define	DB_NOLOCKING	      0x00040000/* Set locking/mutex behavior. */
#define	DB_NOPANIC	      0x00080000/* Set panic state per DB_ENV. */
#define	DB_OVERWRITE	      0x00100000/* Overwrite unlinked region files. */
#define	DB_PANIC_ENVIRONMENT  0x00200000/* Set panic state per environment. */
#define	DB_REGION_INIT	      0x00400000/* Page-fault regions on open. */
#define	DB_TIME_NOTGRANTED    0x00800000/* Return NOTGRANTED on timeout. */
/*	      Shared flags at 0x01000000 */
/*	      Shared flags at 0x02000000 */
/*	      Shared flags at 0x04000000 */
/*	      Shared flags at 0x08000000 */
#define	DB_TXN_WRITE_NOSYNC   0x10000000/* Write, don't sync, on txn commit. */
#define	DB_YIELDCPU	      0x20000000/* Yield the CPU (a lot). */

/*
 * Flags private to DB->set_feedback's callback.
 */
#define	DB_UPGRADE	      0x0000001	/* Upgrading. */
#define	DB_VERIFY	      0x0000002	/* Verifying. */

/*
 * Flags private to DB_MPOOLFILE->open.
 *	   Shared flags up to 0x0000800 */
#define	DB_DIRECT	      0x0001000	/* Don't buffer the file in the OS. */
#define	DB_DURABLE_UNKNOWN    0x0002000 /* internal: durability on open. */
#define	DB_EXTENT	      0x0004000	/* internal: dealing with an extent. */
#define	DB_ODDFILESIZE	      0x0008000	/* Truncate file to N * pgsize. */

/*
 * Flags private to DB->set_flags.
 */
#define	DB_CHKSUM	      0x0000001	/* Do checksumming */
#define	DB_DUP		      0x0000002	/* Btree, Hash: duplicate keys. */
#define	DB_DUPSORT	      0x0000004	/* Btree, Hash: duplicate keys. */
#define	DB_ENCRYPT	      0x0000008	/* Btree, Hash: duplicate keys. */
#define	DB_INORDER	      0x0000010	/* Queue: strict ordering on consume. */
#define	DB_RECNUM	      0x0000020	/* Btree: record numbers. */
#define	DB_RENUMBER	      0x0000040	/* Recno: renumber on insert/delete. */
#define	DB_REVSPLITOFF	      0x0000080	/* Btree: turn off reverse splits. */
#define	DB_SNAPSHOT	      0x0000100	/* Recno: snapshot the input. */

/*
 * Flags private to the DB_ENV->stat_print, DB->stat and DB->stat_print methods.
 */
#define	DB_STAT_ALL	      0x0000001	/* Print: Everything. */
#define	DB_STAT_CLEAR	      0x0000002	/* Clear stat after returning values. */
#define	DB_STAT_LOCK_CONF     0x0000004	/* Print: Lock conflict matrix. */
#define	DB_STAT_LOCK_LOCKERS  0x0000008	/* Print: Lockers. */
#define	DB_STAT_LOCK_OBJECTS  0x0000010	/* Print: Lock objects. */
#define	DB_STAT_LOCK_PARAMS   0x0000020	/* Print: Lock parameters. */
#define	DB_STAT_MEMP_HASH     0x0000040	/* Print: Mpool hash buckets. */
#define	DB_STAT_SUBSYSTEM     0x0000080	/* Print: Subsystems too. */

/*
 * Flags private to DB->join.
 */
#define	DB_JOIN_NOSORT	      0x0000001	/* Don't try to optimize join. */

/*
 * Flags private to DB->verify.
 */
#define	DB_AGGRESSIVE	      0x0000001	/* Salvage whatever could be data.*/
#define	DB_NOORDERCHK	      0x0000002	/* Skip sort order/hashing check. */
#define	DB_ORDERCHKONLY	      0x0000004	/* Only perform the order check. */
#define	DB_PR_PAGE	      0x0000008	/* Show page contents (-da). */
#define	DB_PR_RECOVERYTEST    0x0000010	/* Recovery test (-dr). */
#define	DB_PRINTABLE	      0x0000020	/* Use printable format for salvage. */
#define	DB_SALVAGE	      0x0000040	/* Salvage what looks like data. */
#define	DB_UNREF	      0x0000080	/* Report unreferenced pages. */
/*
 * !!!
 * These must not go over 0x8000, or they will collide with the flags
 * used by __bam_vrfy_subtree.
 */

/*
 * Flags private to DB->set_rep_transport's send callback.
 */
#define	DB_REP_NOBUFFER	      0x0000001	/* Do not buffer this message. */
#define	DB_REP_PERMANENT      0x0000002	/* Important--app. may want to flush. */

/*******************************************************
 * Locking.
 *******************************************************/
#define	DB_LOCKVERSION	1

#define	DB_FILE_ID_LEN		20	/* Unique file ID length. */

/*
 * Deadlock detector modes; used in the DB_ENV structure to configure the
 * locking subsystem.
 */
#define	DB_LOCK_NORUN		0
#define	DB_LOCK_DEFAULT		1	/* Default policy. */
#define	DB_LOCK_EXPIRE		2	/* Only expire locks, no detection. */
#define	DB_LOCK_MAXLOCKS	3	/* Select locker with max locks. */
#define	DB_LOCK_MAXWRITE	4	/* Select locker with max writelocks. */
#define	DB_LOCK_MINLOCKS	5	/* Select locker with min locks. */
#define	DB_LOCK_MINWRITE	6	/* Select locker with min writelocks. */
#define	DB_LOCK_OLDEST		7	/* Select oldest locker. */
#define	DB_LOCK_RANDOM		8	/* Select random locker. */
#define	DB_LOCK_YOUNGEST	9	/* Select youngest locker. */

/* Flag values for lock_vec(), lock_get(). */
#define	DB_LOCK_ABORT		0x001	/* Internal: Lock during abort. */
#define	DB_LOCK_NOWAIT		0x002	/* Don't wait on unavailable lock. */
#define	DB_LOCK_RECORD		0x004	/* Internal: record lock. */
#define	DB_LOCK_REMOVE		0x008	/* Internal: flag object removed. */
#define	DB_LOCK_SET_TIMEOUT	0x010	/* Internal: set lock timeout. */
#define	DB_LOCK_SWITCH		0x020	/* Internal: switch existing lock. */
#define	DB_LOCK_UPGRADE		0x040	/* Internal: upgrade existing lock. */

/*
 * Simple R/W lock modes and for multi-granularity intention locking.
 *
 * !!!
 * These values are NOT random, as they are used as an index into the lock
 * conflicts arrays, i.e., DB_LOCK_IWRITE must be == 3, and DB_LOCK_IREAD
 * must be == 4.
 */
typedef enum {
	DB_LOCK_NG=0,			/* Not granted. */
	DB_LOCK_READ=1,			/* Shared/read. */
	DB_LOCK_WRITE=2,		/* Exclusive/write. */
	DB_LOCK_WAIT=3,			/* Wait for event */
	DB_LOCK_IWRITE=4,		/* Intent exclusive/write. */
	DB_LOCK_IREAD=5,		/* Intent to share/read. */
	DB_LOCK_IWR=6,			/* Intent to read and write. */
	DB_LOCK_DIRTY=7,		/* Dirty Read. */
	DB_LOCK_WWRITE=8		/* Was Written. */
} db_lockmode_t;

/*
 * Request types.
 */
typedef enum {
	DB_LOCK_DUMP=0,			/* Display held locks. */
	DB_LOCK_GET=1,			/* Get the lock. */
	DB_LOCK_GET_TIMEOUT=2,		/* Get lock with a timeout. */
	DB_LOCK_INHERIT=3,		/* Pass locks to parent. */
	DB_LOCK_PUT=4,			/* Release the lock. */
	DB_LOCK_PUT_ALL=5,		/* Release locker's locks. */
	DB_LOCK_PUT_OBJ=6,		/* Release locker's locks on obj. */
	DB_LOCK_PUT_READ=7,		/* Release locker's read locks. */
	DB_LOCK_TIMEOUT=8,		/* Force a txn to timeout. */
	DB_LOCK_TRADE=9,		/* Trade locker ids on a lock. */
	DB_LOCK_UPGRADE_WRITE=10	/* Upgrade writes for dirty reads. */
} db_lockop_t;

/*
 * Status of a lock.
 */
typedef enum  {
	DB_LSTAT_ABORTED=1,		/* Lock belongs to an aborted txn. */
	DB_LSTAT_EXPIRED=2,		/* Lock has expired. */
	DB_LSTAT_FREE=3,		/* Lock is unallocated. */
	DB_LSTAT_HELD=4,		/* Lock is currently held. */
	DB_LSTAT_NOTEXIST=5,		/* Object on which lock was waiting
					 * was removed */
	DB_LSTAT_PENDING=6,		/* Lock was waiting and has been
					 * promoted; waiting for the owner
					 * to run and upgrade it to held. */
	DB_LSTAT_WAITING=7		/* Lock is on the wait queue. */
}db_status_t;

/* Lock statistics structure. */
struct __db_lock_stat {
	u_int32_t st_id;		/* Last allocated locker ID. */
	u_int32_t st_cur_maxid;		/* Current maximum unused ID. */
	u_int32_t st_maxlocks;		/* Maximum number of locks in table. */
	u_int32_t st_maxlockers;	/* Maximum num of lockers in table. */
	u_int32_t st_maxobjects;	/* Maximum num of objects in table. */
	int	  st_nmodes;		/* Number of lock modes. */
	u_int32_t st_nlocks;		/* Current number of locks. */
	u_int32_t st_maxnlocks;		/* Maximum number of locks so far. */
	u_int32_t st_nlockers;		/* Current number of lockers. */
	u_int32_t st_maxnlockers;	/* Maximum number of lockers so far. */
	u_int32_t st_nobjects;		/* Current number of objects. */
	u_int32_t st_maxnobjects;	/* Maximum number of objects so far. */
	u_int32_t st_nconflicts;	/* Number of lock conflicts. */
	u_int32_t st_nrequests;		/* Number of lock gets. */
	u_int32_t st_nreleases;		/* Number of lock puts. */
	u_int32_t st_nnowaits;		/* Number of requests that would have
					   waited, but NOWAIT was set. */
	u_int32_t st_ndeadlocks;	/* Number of lock deadlocks. */
	db_timeout_t st_locktimeout;	/* Lock timeout. */
	u_int32_t st_nlocktimeouts;	/* Number of lock timeouts. */
	db_timeout_t st_txntimeout;	/* Transaction timeout. */
	u_int32_t st_ntxntimeouts;	/* Number of transaction timeouts. */
	u_int32_t st_region_wait;	/* Region lock granted after wait. */
	u_int32_t st_region_nowait;	/* Region lock granted without wait. */
	roff_t	  st_regsize;		/* Region size. */
};

/*
 * DB_LOCK_ILOCK --
 *	Internal DB access method lock.
 */
struct __db_ilock {
	db_pgno_t pgno;			/* Page being locked. */
	u_int8_t fileid[DB_FILE_ID_LEN];/* File id. */
#define	DB_HANDLE_LOCK	1
#define	DB_RECORD_LOCK	2
#define	DB_PAGE_LOCK	3
	u_int32_t type;			/* Type of lock. */
};

/*
 * DB_LOCK --
 *	The structure is allocated by the caller and filled in during a
 *	lock_get request (or a lock_vec/DB_LOCK_GET).
 */
struct __db_lock_u {
	roff_t		off;		/* Offset of the lock in the region */
	u_int32_t	ndx;		/* Index of the object referenced by
					 * this lock; used for locking. */
	u_int32_t	gen;		/* Generation number of this lock. */
	db_lockmode_t	mode;		/* mode of this lock. */
};

/* Lock request structure. */
struct __db_lockreq {
	db_lockop_t	 op;		/* Operation. */
	db_lockmode_t	 mode;		/* Requested mode. */
	db_timeout_t	 timeout;	/* Time to expire lock. */
	DBT		*obj;		/* Object being locked. */
	DB_LOCK		 lock;		/* Lock returned. */
};

/*******************************************************
 * Logging.
 *******************************************************/
#define	DB_LOGVERSION	10		/* Current log version. */
#define	DB_LOGOLDVER	10		/* Oldest log version supported. */
#define	DB_LOGMAGIC	0x040988

/* Flag values for DB_ENV->log_archive(). */
#define	DB_ARCH_ABS	0x001		/* Absolute pathnames. */
#define	DB_ARCH_DATA	0x002		/* Data files. */
#define	DB_ARCH_LOG	0x004		/* Log files. */
#define	DB_ARCH_REMOVE	0x008	/* Remove log files. */

/* Flag values for DB_ENV->log_put(). */
#define	DB_FLUSH		0x001	/* Flush data to disk (public). */
#define	DB_LOG_CHKPNT		0x002	/* Flush supports a checkpoint */
#define	DB_LOG_COMMIT		0x004	/* Flush supports a commit */
#define	DB_LOG_NOCOPY		0x008	/* Don't copy data */
#define	DB_LOG_NOT_DURABLE	0x010	/* Do not log; keep in memory */
#define	DB_LOG_PERM		0x020	/* Flag record with REP_PERMANENT */
#define	DB_LOG_RESEND		0x040	/* Resent log record */
#define	DB_LOG_WRNOSYNC		0x080	/* Write, don't sync log_put */

/*
 * A DB_LSN has two parts, a fileid which identifies a specific file, and an
 * offset within that file.  The fileid is an unsigned 4-byte quantity that
 * uniquely identifies a file within the log directory -- currently a simple
 * counter inside the log.  The offset is also an unsigned 4-byte value.  The
 * log manager guarantees the offset is never more than 4 bytes by switching
 * to a new log file before the maximum length imposed by an unsigned 4-byte
 * offset is reached.
 */
struct __db_lsn {
	u_int32_t	file;		/* File ID. */
	u_int32_t	offset;		/* File offset. */
};

/*
 * Application-specified log record types start at DB_user_BEGIN, and must not
 * equal or exceed DB_debug_FLAG.
 *
 * DB_debug_FLAG is the high-bit of the u_int32_t that specifies a log record
 * type.  If the flag is set, it's a log record that was logged for debugging
 * purposes only, even if it reflects a database change -- the change was part
 * of a non-durable transaction.
 */
#define	DB_user_BEGIN		10000
#define	DB_debug_FLAG		0x80000000

/*
 * DB_LOGC --
 *	Log cursor.
 */
struct __db_log_cursor {
	DB_ENV	 *dbenv;		/* Enclosing dbenv. */

	DB_FH	 *c_fhp;		/* File handle. */
	DB_LSN	  c_lsn;		/* Cursor: LSN */
	u_int32_t c_len;		/* Cursor: record length */
	u_int32_t c_prev;		/* Cursor: previous record's offset */

	DBT	  c_dbt;		/* Return DBT. */

#define	DB_LOGC_BUF_SIZE	(32 * 1024)
	u_int8_t *bp;			/* Allocated read buffer. */
	u_int32_t bp_size;		/* Read buffer length in bytes. */
	u_int32_t bp_rlen;		/* Read buffer valid data length. */
	DB_LSN	  bp_lsn;		/* Read buffer first byte LSN. */

	u_int32_t bp_maxrec;		/* Max record length in the log file. */

					/* Methods. */
	int (*close) __P((DB_LOGC *, u_int32_t));
	int (*get) __P((DB_LOGC *, DB_LSN *, DBT *, u_int32_t));

#define	DB_LOG_DISK		0x01	/* Log record came from disk. */
#define	DB_LOG_LOCKED		0x02	/* Log region already locked */
#define	DB_LOG_SILENT_ERR	0x04	/* Turn-off error messages. */
	u_int32_t flags;
};

/* Log statistics structure. */
struct __db_log_stat {
	u_int32_t st_magic;		/* Log file magic number. */
	u_int32_t st_version;		/* Log file version number. */
	int	  st_mode;			/* Log file mode. */
	u_int32_t st_lg_bsize;		/* Log buffer size. */
	u_int32_t st_lg_size;		/* Log file size. */
	u_int32_t st_w_bytes;		/* Bytes to log. */
	u_int32_t st_w_mbytes;		/* Megabytes to log. */
	u_int32_t st_wc_bytes;		/* Bytes to log since checkpoint. */
	u_int32_t st_wc_mbytes;		/* Megabytes to log since checkpoint. */
	u_int32_t st_wcount;		/* Total writes to the log. */
	u_int32_t st_wcount_fill;	/* Overflow writes to the log. */
	u_int32_t st_scount;		/* Total syncs to the log. */
	u_int32_t st_region_wait;	/* Region lock granted after wait. */
	u_int32_t st_region_nowait;	/* Region lock granted without wait. */
	u_int32_t st_cur_file;		/* Current log file number. */
	u_int32_t st_cur_offset;	/* Current log file offset. */
	u_int32_t st_disk_file;		/* Known on disk log file number. */
	u_int32_t st_disk_offset;	/* Known on disk log file offset. */
	roff_t	  st_regsize;		/* Region size. */
	u_int32_t st_maxcommitperflush;	/* Max number of commits in a flush. */
	u_int32_t st_mincommitperflush;	/* Min number of commits in a flush. */
};

/*
 * We need to record the first log record of a transaction.
 * For user defined logging this macro returns the place to
 * put that information, if it is need in rlsnp, otherwise it
 * leaves it unchanged.
 */
#define	DB_SET_BEGIN_LSNP(txn, rlsnp)	((txn)->set_begin_lsnp(txn, rlsnp))

/*******************************************************
 * Shared buffer cache (mpool).
 *******************************************************/
/* Flag values for DB_MPOOLFILE->get. */
#define	DB_MPOOL_CREATE		0x001	/* Create a page. */
#define	DB_MPOOL_LAST		0x002	/* Return the last page. */
#define	DB_MPOOL_NEW		0x004	/* Create a new page. */

/* Flag values for DB_MPOOLFILE->put, DB_MPOOLFILE->set. */
#define	DB_MPOOL_CLEAN		0x001	/* Page is not modified. */
#define	DB_MPOOL_DIRTY		0x002	/* Page is modified. */
#define	DB_MPOOL_DISCARD	0x004	/* Don't cache the page. */
#define	DB_MPOOL_FREE		0x008	/* Free page if present. */

/* Flags values for DB_MPOOLFILE->set_flags. */
#define	DB_MPOOL_NOFILE		0x001	/* Never open a backing file. */
#define	DB_MPOOL_UNLINK		0x002	/* Unlink the file on last close. */

/* Priority values for DB_MPOOLFILE->set_priority. */
typedef enum {
	DB_PRIORITY_VERY_LOW=1,
	DB_PRIORITY_LOW=2,
	DB_PRIORITY_DEFAULT=3,
	DB_PRIORITY_HIGH=4,
	DB_PRIORITY_VERY_HIGH=5
} DB_CACHE_PRIORITY;

/* Per-process DB_MPOOLFILE information. */
struct __db_mpoolfile {
	DB_FH	  *fhp;			/* Underlying file handle. */

	/*
	 * !!!
	 * The ref, pinref and q fields are protected by the region lock.
	 */
	u_int32_t  ref;			/* Reference count. */

	u_int32_t pinref;		/* Pinned block reference count. */

	/*
	 * !!!
	 * Explicit representations of structures from queue.h.
	 * TAILQ_ENTRY(__db_mpoolfile) q;
	 */
	struct {
		struct __db_mpoolfile *tqe_next;
		struct __db_mpoolfile **tqe_prev;
	} q;				/* Linked list of DB_MPOOLFILE's. */

	/*
	 * !!!
	 * The rest of the fields (with the exception of the MP_FLUSH flag)
	 * are not thread-protected, even when they may be modified at any
	 * time by the application.  The reason is the DB_MPOOLFILE handle
	 * is single-threaded from the viewpoint of the application, and so
	 * the only fields needing to be thread-protected are those accessed
	 * by checkpoint or sync threads when using DB_MPOOLFILE structures
	 * to flush buffers from the cache.
	 */
	DB_ENV	       *dbenv;		/* Overlying DB_ENV. */
	MPOOLFILE      *mfp;		/* Underlying MPOOLFILE. */

	u_int32_t	clear_len;	/* Cleared length on created pages. */
	u_int8_t			/* Unique file ID. */
			fileid[DB_FILE_ID_LEN];
	int		ftype;		/* File type. */
	int32_t		lsn_offset;	/* LSN offset in page. */
	u_int32_t	gbytes, bytes;	/* Maximum file size. */
	DBT	       *pgcookie;	/* Byte-string passed to pgin/pgout. */
	DB_CACHE_PRIORITY		/* Cache priority. */
			priority;

	void	       *addr;		/* Address of mmap'd region. */
	size_t		len;		/* Length of mmap'd region. */

	u_int32_t	config_flags;	/* Flags to DB_MPOOLFILE->set_flags. */

					/* Methods. */
	int (*close) __P((DB_MPOOLFILE *, u_int32_t));
	int (*get) __P((DB_MPOOLFILE *, db_pgno_t *, u_int32_t, void *));
	int (*open) __P((DB_MPOOLFILE *, const char *, u_int32_t, int, size_t));
	int (*put) __P((DB_MPOOLFILE *, void *, u_int32_t));
	int (*set) __P((DB_MPOOLFILE *, void *, u_int32_t));
	int (*get_clear_len) __P((DB_MPOOLFILE *, u_int32_t *));
	int (*set_clear_len) __P((DB_MPOOLFILE *, u_int32_t));
	int (*get_fileid) __P((DB_MPOOLFILE *, u_int8_t *));
	int (*set_fileid) __P((DB_MPOOLFILE *, u_int8_t *));
	int (*get_flags) __P((DB_MPOOLFILE *, u_int32_t *));
	int (*set_flags) __P((DB_MPOOLFILE *, u_int32_t, int));
	int (*get_ftype) __P((DB_MPOOLFILE *, int *));
	int (*set_ftype) __P((DB_MPOOLFILE *, int));
	int (*get_lsn_offset) __P((DB_MPOOLFILE *, int32_t *));
	int (*set_lsn_offset) __P((DB_MPOOLFILE *, int32_t));
	int (*get_maxsize) __P((DB_MPOOLFILE *, u_int32_t *, u_int32_t *));
	int (*set_maxsize) __P((DB_MPOOLFILE *, u_int32_t, u_int32_t));
	int (*get_pgcookie) __P((DB_MPOOLFILE *, DBT *));
	int (*set_pgcookie) __P((DB_MPOOLFILE *, DBT *));
	int (*get_priority) __P((DB_MPOOLFILE *, DB_CACHE_PRIORITY *));
	int (*set_priority) __P((DB_MPOOLFILE *, DB_CACHE_PRIORITY));
	int (*sync) __P((DB_MPOOLFILE *));

	/*
	 * MP_FILEID_SET, MP_OPEN_CALLED and MP_READONLY do not need to be
	 * thread protected because they are initialized before the file is
	 * linked onto the per-process lists, and never modified.
	 *
	 * MP_FLUSH is thread protected because it is potentially read/set by
	 * multiple threads of control.
	 */
#define	MP_FILEID_SET	0x001		/* Application supplied a file ID. */
#define	MP_FLUSH	0x002		/* Was opened to flush a buffer. */
#define	MP_OPEN_CALLED	0x004		/* File opened. */
#define	MP_READONLY	0x008		/* File is readonly. */
	u_int32_t  flags;
};

/* Mpool statistics structure. */
struct __db_mpool_stat {
	u_int32_t st_gbytes;		/* Total cache size: GB. */
	u_int32_t st_bytes;		/* Total cache size: B. */
	u_int32_t st_ncache;		/* Number of caches. */
	roff_t	  st_regsize;		/* Region size. */
	size_t	  st_mmapsize;		/* Maximum file size for mmap. */
	int	  st_maxopenfd;		/* Maximum number of open fd's. */
	int	  st_maxwrite;		/* Maximum buffers to write. */
	int	  st_maxwrite_sleep;	/* Sleep after writing max buffers. */
	u_int32_t st_map;		/* Pages from mapped files. */
	u_int32_t st_cache_hit;		/* Pages found in the cache. */
	u_int32_t st_cache_miss;	/* Pages not found in the cache. */
	u_int32_t st_page_create;	/* Pages created in the cache. */
	u_int32_t st_page_in;		/* Pages read in. */
	u_int32_t st_page_out;		/* Pages written out. */
	u_int32_t st_ro_evict;		/* Clean pages forced from the cache. */
	u_int32_t st_rw_evict;		/* Dirty pages forced from the cache. */
	u_int32_t st_page_trickle;	/* Pages written by memp_trickle. */
	u_int32_t st_pages;		/* Total number of pages. */
	u_int32_t st_page_clean;	/* Clean pages. */
	u_int32_t st_page_dirty;	/* Dirty pages. */
	u_int32_t st_hash_buckets;	/* Number of hash buckets. */
	u_int32_t st_hash_searches;	/* Total hash chain searches. */
	u_int32_t st_hash_longest;	/* Longest hash chain searched. */
	u_int32_t st_hash_examined;	/* Total hash entries searched. */
	u_int32_t st_hash_nowait;	/* Hash lock granted with nowait. */
	u_int32_t st_hash_wait;		/* Hash lock granted after wait. */
	u_int32_t st_hash_max_wait;	/* Max hash lock granted after wait. */
	u_int32_t st_region_nowait;	/* Region lock granted with nowait. */
	u_int32_t st_region_wait;	/* Region lock granted after wait. */
	u_int32_t st_alloc;		/* Number of page allocations. */
	u_int32_t st_alloc_buckets;	/* Buckets checked during allocation. */
	u_int32_t st_alloc_max_buckets;	/* Max checked during allocation. */
	u_int32_t st_alloc_pages;	/* Pages checked during allocation. */
	u_int32_t st_alloc_max_pages;	/* Max checked during allocation. */
};

/* Mpool file statistics structure. */
struct __db_mpool_fstat {
	char *file_name;		/* File name. */
	u_int32_t st_pagesize;		/* Page size. */
	u_int32_t st_map;		/* Pages from mapped files. */
	u_int32_t st_cache_hit;		/* Pages found in the cache. */
	u_int32_t st_cache_miss;	/* Pages not found in the cache. */
	u_int32_t st_page_create;	/* Pages created in the cache. */
	u_int32_t st_page_in;		/* Pages read in. */
	u_int32_t st_page_out;		/* Pages written out. */
};

/*******************************************************
 * Transactions and recovery.
 *******************************************************/
#define	DB_TXNVERSION	1

typedef enum {
	DB_TXN_ABORT=0,			/* Public. */
	DB_TXN_APPLY=1,			/* Public. */
	DB_TXN_BACKWARD_ALLOC=2,	/* Internal. */
	DB_TXN_BACKWARD_ROLL=3,		/* Public. */
	DB_TXN_FORWARD_ROLL=4,		/* Public. */
	DB_TXN_OPENFILES=5,		/* Internal. */
	DB_TXN_POPENFILES=6,		/* Internal. */
	DB_TXN_PRINT=7			/* Public. */
} db_recops;

/*
 * BACKWARD_ALLOC is used during the forward pass to pick up any aborted
 * allocations for files that were created during the forward pass.
 * The main difference between _ALLOC and _ROLL is that the entry for
 * the file not exist during the rollforward pass.
 */
#define	DB_UNDO(op)	((op) == DB_TXN_ABORT ||			\
		(op) == DB_TXN_BACKWARD_ROLL || (op) == DB_TXN_BACKWARD_ALLOC)
#define	DB_REDO(op)	((op) == DB_TXN_FORWARD_ROLL || (op) == DB_TXN_APPLY)

struct __db_txn {
	DB_TXNMGR	*mgrp;		/* Pointer to transaction manager. */
	DB_TXN		*parent;	/* Pointer to transaction's parent. */
	DB_LSN		last_lsn;	/* Lsn of last log write. */
	u_int32_t	txnid;		/* Unique transaction id. */
	u_int32_t	tid;		/* Thread id for use in MT XA. */
	roff_t		off;		/* Detail structure within region. */
	db_timeout_t	lock_timeout;	/* Timeout for locks for this txn. */
	db_timeout_t	expire;		/* Time this txn expires. */
	void		*txn_list;	/* Undo information for parent. */

	/*
	 * !!!
	 * Explicit representations of structures from queue.h.
	 * TAILQ_ENTRY(__db_txn) links;
	 * TAILQ_ENTRY(__db_txn) xalinks;
	 */
	struct {
		struct __db_txn *tqe_next;
		struct __db_txn **tqe_prev;
	} links;			/* Links transactions off manager. */
	struct {
		struct __db_txn *tqe_next;
		struct __db_txn **tqe_prev;
	} xalinks;			/* Links active XA transactions. */

	/*
	 * !!!
	 * Explicit representations of structures from queue.h.
	 * TAILQ_HEAD(__events, __txn_event) events;
	 */
	struct {
		struct __txn_event *tqh_first;
		struct __txn_event **tqh_last;
	} events;

	/*
	 * !!!
	 * Explicit representations of structures from queue.h.
	 * STAILQ_HEAD(__logrec, __txn_logrec) logs;
	 */
	struct {
		struct __txn_logrec *stqh_first;
		struct __txn_logrec **stqh_last;
	} logs;				/* Links deferred events. */

	/*
	 * !!!
	 * Explicit representations of structures from queue.h.
	 * TAILQ_HEAD(__kids, __db_txn) kids;
	 */
	struct __kids {
		struct __db_txn *tqh_first;
		struct __db_txn **tqh_last;
	} kids;

	/*
	 * !!!
	 * Explicit representations of structures from queue.h.
	 * TAILQ_ENTRY(__db_txn) klinks;
	 */
	struct {
		struct __db_txn *tqe_next;
		struct __db_txn **tqe_prev;
	} klinks;

	void	*api_internal;		/* C++ API private. */
	void	*xml_internal;		/* XML API private. */

	u_int32_t	cursors;	/* Number of cursors open for txn */

					/* Methods. */
	int	  (*abort) __P((DB_TXN *));
	int	  (*commit) __P((DB_TXN *, u_int32_t));
	int	  (*discard) __P((DB_TXN *, u_int32_t));
	u_int32_t (*id) __P((DB_TXN *));
	int	  (*prepare) __P((DB_TXN *, u_int8_t *));
	void	  (*set_begin_lsnp) __P((DB_TXN *txn, DB_LSN **));
	int	  (*set_timeout) __P((DB_TXN *, db_timeout_t, u_int32_t));

#define	TXN_CHILDCOMMIT	0x001		/* Transaction that has committed. */
#define	TXN_COMPENSATE	0x002		/* Compensating transaction. */
#define	TXN_DEADLOCK	0x004		/* Transaction has deadlocked. */
#define	TXN_DEGREE_2	0x008		/* Has degree 2 isolation. */
#define	TXN_DIRTY_READ	0x010		/* Transaction does dirty reads. */
#define	TXN_LOCKTIMEOUT	0x020		/* Transaction has a lock timeout. */
#define	TXN_MALLOC	0x040		/* Structure allocated by TXN system. */
#define	TXN_NOSYNC	0x080		/* Do not sync on prepare and commit. */
#define	TXN_NOWAIT	0x100		/* Do not wait on locks. */
#define	TXN_RESTORED	0x200		/* Transaction has been restored. */
#define	TXN_SYNC	0x400		/* Sync on prepare and commit. */
	u_int32_t	flags;
};

/*
 * Structure used for two phase commit interface.  Berkeley DB support for two
 * phase commit is compatible with the X/open XA interface.
 *
 * The XA #define XIDDATASIZE defines the size of a global transaction ID.  We
 * have our own version here (for name space reasons) which must have the same
 * value.
 */
#define	DB_XIDDATASIZE	128
struct __db_preplist {
	DB_TXN	*txn;
	u_int8_t gid[DB_XIDDATASIZE];
};

/* Transaction statistics structure. */
struct __db_txn_active {
	u_int32_t txnid;		/* Transaction ID */
	u_int32_t parentid;		/* Transaction ID of parent */
	DB_LSN	  lsn;			/* LSN when transaction began */
	u_int32_t xa_status;		/* XA status */
	u_int8_t  xid[DB_XIDDATASIZE];	/* XA global transaction ID */
};

struct __db_txn_stat {
	DB_LSN	  st_last_ckp;		/* lsn of the last checkpoint */
	time_t	  st_time_ckp;		/* time of last checkpoint */
	u_int32_t st_last_txnid;	/* last transaction id given out */
	u_int32_t st_maxtxns;		/* maximum txns possible */
	u_int32_t st_naborts;		/* number of aborted transactions */
	u_int32_t st_nbegins;		/* number of begun transactions */
	u_int32_t st_ncommits;		/* number of committed transactions */
	u_int32_t st_nactive;		/* number of active transactions */
	u_int32_t st_nrestores;		/* number of restored transactions
					   after recovery. */
	u_int32_t st_maxnactive;	/* maximum active transactions */
	DB_TXN_ACTIVE *st_txnarray;	/* array of active transactions */
	u_int32_t st_region_wait;	/* Region lock granted after wait. */
	u_int32_t st_region_nowait;	/* Region lock granted without wait. */
	roff_t	  st_regsize;		/* Region size. */
};

/*******************************************************
 * Replication.
 *******************************************************/
/* Special, out-of-band environment IDs. */
#define	DB_EID_BROADCAST	-1
#define	DB_EID_INVALID		-2

/* rep_start flags values */
#define	DB_REP_CLIENT		0x001
#define	DB_REP_MASTER		0x002

/* Replication statistics. */
struct __db_rep_stat {
	/* !!!
	 * Many replication statistics fields cannot be protected by a mutex
	 * without an unacceptable performance penalty, since most message
	 * processing is done without the need to hold a region-wide lock.
	 * Fields whose comments end with a '+' may be updated without holding
	 * the replication or log mutexes (as appropriate), and thus may be
	 * off somewhat (or, on unreasonable architectures under unlucky
	 * circumstances, garbaged).
	 */
	u_int32_t st_status;		/* Current replication status. */
	DB_LSN st_next_lsn;		/* Next LSN to use or expect. */
	DB_LSN st_waiting_lsn;		/* LSN we're awaiting, if any. */
	db_pgno_t st_next_pg;		/* Next pg we expect. */
	db_pgno_t st_waiting_pg;	/* pg we're awaiting, if any. */

	u_int32_t st_dupmasters;	/* # of times a duplicate master
					   condition was detected.+ */
	int st_env_id;			/* Current environment ID. */
	int st_env_priority;		/* Current environment priority. */
	u_int32_t st_gen;		/* Current generation number. */
	u_int32_t st_egen;		/* Current election gen number. */
	u_int32_t st_log_duplicated;	/* Log records received multiply.+ */
	u_int32_t st_log_queued;	/* Log records currently queued.+ */
	u_int32_t st_log_queued_max;	/* Max. log records queued at once.+ */
	u_int32_t st_log_queued_total;	/* Total # of log recs. ever queued.+ */
	u_int32_t st_log_records;	/* Log records received and put.+ */
	u_int32_t st_log_requested;	/* Log recs. missed and requested.+ */
	int st_master;			/* Env. ID of the current master. */
	u_int32_t st_master_changes;	/* # of times we've switched masters. */
	u_int32_t st_msgs_badgen;	/* Messages with a bad generation #.+ */
	u_int32_t st_msgs_processed;	/* Messages received and processed.+ */
	u_int32_t st_msgs_recover;	/* Messages ignored because this site
					   was a client in recovery.+ */
	u_int32_t st_msgs_send_failures;/* # of failed message sends.+ */
	u_int32_t st_msgs_sent;		/* # of successful message sends.+ */
	u_int32_t st_newsites;		/* # of NEWSITE msgs. received.+ */
	int st_nsites;			/* Current number of sites we will
					   assume during elections. */
	u_int32_t st_nthrottles;	/* # of times we were throttled. */
	u_int32_t st_outdated;		/* # of times we detected and returned
					   an OUTDATED condition.+ */
	u_int32_t st_pg_duplicated;	/* Pages received multiply.+ */
	u_int32_t st_pg_records;	/* Pages received and stored.+ */
	u_int32_t st_pg_requested;	/* Pages missed and requested.+ */
	u_int32_t st_startup_complete;	/* Site completed client sync-up. */
	u_int32_t st_txns_applied;	/* # of transactions applied.+ */

	/* Elections generally. */
	u_int32_t st_elections;		/* # of elections held.+ */
	u_int32_t st_elections_won;	/* # of elections won by this site.+ */

	/* Statistics about an in-progress election. */
	int st_election_cur_winner;	/* Current front-runner. */
	u_int32_t st_election_gen;	/* Election generation number. */
	DB_LSN st_election_lsn;		/* Max. LSN of current winner. */
	int st_election_nsites;		/* # of "registered voters". */
	int st_election_nvotes;		/* # of "registered voters" needed. */
	int st_election_priority;	/* Current election priority. */
	int st_election_status;		/* Current election status. */
	u_int32_t st_election_tiebreaker;/* Election tiebreaker value. */
	int st_election_votes;		/* Votes received in this round. */
};
/*
 * The storage record for a sequence.
 */
struct __db_seq_record {
	u_int32_t	seq_version;	/* Version size/number. */
#define	DB_SEQ_DEC		0x00000001	/* Decrement sequence. */
#define	DB_SEQ_INC		0x00000002	/* Increment sequence. */
#define	DB_SEQ_RANGE_SET	0x00000004	/* Range set (internal). */
#define	DB_SEQ_WRAP		0x00000008	/* Wrap sequence at min/max. */
	u_int32_t	flags;		/* Flags. */
	db_seq_t	seq_value;	/* Current value. */
	db_seq_t	seq_max;	/* Max permitted. */
	db_seq_t	seq_min;	/* Min permitted. */
};

/*
 * Handle for a sequence object.
 */
struct __db_sequence {
	DB		*seq_dbp;	/* DB handle for this sequence. */
	DB_MUTEX	*seq_mutexp;	/* Mutex if sequence is threaded. */
	DB_SEQ_RECORD	*seq_rp;	/* Pointer to current data. */
	DB_SEQ_RECORD	seq_record;	/* Data from DB_SEQUENCE. */
	int32_t		seq_cache_size; /* Number of values cached. */
	db_seq_t	seq_last_value;	/* Last value cached. */
	DBT		seq_key;	/* DBT pointing to sequence key. */
	DBT		seq_data;	/* DBT pointing to seq_record. */

	/* API-private structure: used by C++ and Java. */
	void		*api_internal;

	int		(*close) __P((DB_SEQUENCE *, u_int32_t));
	int		(*get) __P((DB_SEQUENCE *,
			      DB_TXN *, int32_t, db_seq_t *, u_int32_t));
	int		(*get_cachesize) __P((DB_SEQUENCE *, int32_t *));
	int		(*get_db) __P((DB_SEQUENCE *, DB **));
	int		(*get_flags) __P((DB_SEQUENCE *, u_int32_t *));
	int		(*get_key) __P((DB_SEQUENCE *, DBT *));
	int		(*get_range) __P((DB_SEQUENCE *,
			     db_seq_t *, db_seq_t *));
	int		(*initial_value) __P((DB_SEQUENCE *, db_seq_t));
	int		(*open) __P((DB_SEQUENCE *,
			    DB_TXN *, DBT *, u_int32_t));
	int		(*remove) __P((DB_SEQUENCE *, DB_TXN *, u_int32_t));
	int		(*set_cachesize) __P((DB_SEQUENCE *, int32_t));
	int		(*set_flags) __P((DB_SEQUENCE *, u_int32_t));
	int		(*set_range) __P((DB_SEQUENCE *, db_seq_t, db_seq_t));
	int		(*stat) __P((DB_SEQUENCE *,
			    DB_SEQUENCE_STAT **, u_int32_t));
	int		(*stat_print) __P((DB_SEQUENCE *, u_int32_t));
};

struct __db_seq_stat {
	u_int32_t st_wait;	  /* Sequence lock granted without wait. */
	u_int32_t st_nowait;	  /* Sequence lock granted after wait. */
	db_seq_t  st_current;	  /* Current value in db. */
	db_seq_t  st_value;	  /* Current cached value. */
	db_seq_t  st_last_value;  /* Last cached value. */
	db_seq_t  st_min;	  /* Minimum value. */
	db_seq_t  st_max;	  /* Maximum value. */
	int32_t   st_cache_size;  /* Cache size. */
	u_int32_t st_flags;	  /* Flag value. */
};

/*******************************************************
 * Access methods.
 *******************************************************/
typedef enum {
	DB_BTREE=1,
	DB_HASH=2,
	DB_RECNO=3,
	DB_QUEUE=4,
	DB_UNKNOWN=5			/* Figure it out on open. */
} DBTYPE;

#define	DB_RENAMEMAGIC	0x030800	/* File has been renamed. */

#define	DB_BTREEVERSION	9		/* Current btree version. */
#define	DB_BTREEOLDVER	8		/* Oldest btree version supported. */
#define	DB_BTREEMAGIC	0x053162

#define	DB_HASHVERSION	8		/* Current hash version. */
#define	DB_HASHOLDVER	7		/* Oldest hash version supported. */
#define	DB_HASHMAGIC	0x061561

#define	DB_QAMVERSION	4		/* Current queue version. */
#define	DB_QAMOLDVER	3		/* Oldest queue version supported. */
#define	DB_QAMMAGIC	0x042253

#define	DB_SEQUENCE_VERSION 1		/* Current sequence version. */

/*
 * DB access method and cursor operation values.  Each value is an operation
 * code to which additional bit flags are added.
 */
#define	DB_AFTER		 1	/* c_put() */
#define	DB_APPEND		 2	/* put() */
#define	DB_BEFORE		 3	/* c_put() */
#define	DB_CACHED_COUNTS	 4	/* stat() */
#define	DB_CONSUME		 5	/* get() */
#define	DB_CONSUME_WAIT		 6	/* get() */
#define	DB_CURRENT		 7	/* c_get(), c_put(), DB_LOGC->get() */
#define	DB_FAST_STAT		 8	/* stat() */
#define	DB_FIRST		 9	/* c_get(), DB_LOGC->get() */
#define	DB_GET_BOTH		10	/* get(), c_get() */
#define	DB_GET_BOTHC		11	/* c_get() (internal) */
#define	DB_GET_BOTH_RANGE	12	/* get(), c_get() */
#define	DB_GET_RECNO		13	/* c_get() */
#define	DB_JOIN_ITEM		14	/* c_get(); do not do primary lookup */
#define	DB_KEYFIRST		15	/* c_put() */
#define	DB_KEYLAST		16	/* c_put() */
#define	DB_LAST			17	/* c_get(), DB_LOGC->get() */
#define	DB_NEXT			18	/* c_get(), DB_LOGC->get() */
#define	DB_NEXT_DUP		19	/* c_get() */
#define	DB_NEXT_NODUP		20	/* c_get() */
#define	DB_NODUPDATA		21	/* put(), c_put() */
#define	DB_NOOVERWRITE		22	/* put() */
#define	DB_NOSYNC		23	/* close() */
#define	DB_POSITION		24	/* c_dup() */
#define	DB_PREV			25	/* c_get(), DB_LOGC->get() */
#define	DB_PREV_NODUP		26	/* c_get(), DB_LOGC->get() */
#define	DB_RECORDCOUNT		27	/* stat() */
#define	DB_SET			28	/* c_get(), DB_LOGC->get() */
#define	DB_SET_LOCK_TIMEOUT	29	/* set_timout() */
#define	DB_SET_RANGE		30	/* c_get() */
#define	DB_SET_RECNO		31	/* get(), c_get() */
#define	DB_SET_TXN_NOW		32	/* set_timout() (internal) */
#define	DB_SET_TXN_TIMEOUT	33	/* set_timout() */
#define	DB_UPDATE_SECONDARY	34	/* c_get(), c_del() (internal) */
#define	DB_WRITECURSOR		35	/* cursor() */
#define	DB_WRITELOCK		36	/* cursor() (internal) */

/* This has to change when the max opcode hits 255. */
#define	DB_OPFLAGS_MASK	0x000000ff	/* Mask for operations flags. */

/*
 * Masks for flags that can be OR'd into DB access method and cursor
 * operation values.
 *
 *	DB_DIRTY_READ	0x04000000	   Dirty Read. */
#define	DB_MULTIPLE	0x08000000	/* Return multiple data values. */
#define	DB_MULTIPLE_KEY	0x10000000	/* Return multiple data/key pairs. */
#define	DB_RMW		0x20000000	/* Acquire write flag immediately. */

/*
 * DB (user visible) error return codes.
 *
 * !!!
 * For source compatibility with DB 2.X deadlock return (EAGAIN), use the
 * following:
 *	#include <errno.h>
 *	#define DB_LOCK_DEADLOCK EAGAIN
 *
 * !!!
 * We don't want our error returns to conflict with other packages where
 * possible, so pick a base error value that's hopefully not common.  We
 * document that we own the error name space from -30,800 to -30,999.
 */
/* DB (public) error return codes. */
#define	DB_BUFFER_SMALL		(-30999)/* User memory too small for return. */
#define	DB_DONOTINDEX		(-30998)/* "Null" return from 2ndary callbk. */
#define	DB_KEYEMPTY		(-30997)/* Key/data deleted or never created. */
#define	DB_KEYEXIST		(-30996)/* The key/data pair already exists. */
#define	DB_LOCK_DEADLOCK	(-30995)/* Deadlock. */
#define	DB_LOCK_NOTGRANTED	(-30994)/* Lock unavailable. */
#define	DB_LOG_BUFFER_FULL	(-30993)/* In-memory log buffer full. */
#define	DB_NOSERVER		(-30992)/* Server panic return. */
#define	DB_NOSERVER_HOME	(-30991)/* Bad home sent to server. */
#define	DB_NOSERVER_ID		(-30990)/* Bad ID sent to server. */
#define	DB_NOTFOUND		(-30989)/* Key/data pair not found (EOF). */
#define	DB_OLD_VERSION		(-30988)/* Out-of-date version. */
#define	DB_PAGE_NOTFOUND	(-30987)/* Requested page not found. */
#define	DB_REP_DUPMASTER	(-30986)/* There are two masters. */
#define	DB_REP_HANDLE_DEAD	(-30985)/* Rolled back a commit. */
#define	DB_REP_HOLDELECTION	(-30984)/* Time to hold an election. */
#define	DB_REP_ISPERM		(-30983)/* Cached not written perm written.*/
#define	DB_REP_NEWMASTER	(-30982)/* We have learned of a new master. */
#define	DB_REP_NEWSITE		(-30981)/* New site entered system. */
#define	DB_REP_NOTPERM		(-30980)/* Permanent log record not written. */
#define	DB_REP_STARTUPDONE	(-30979)/* Client startup complete. */
#define	DB_REP_UNAVAIL		(-30978)/* Site cannot currently be reached. */
#define	DB_RUNRECOVERY		(-30977)/* Panic return. */
#define	DB_SECONDARY_BAD	(-30976)/* Secondary index corrupt. */
#define	DB_VERIFY_BAD		(-30975)/* Verify failed; bad format. */
#define	DB_VERSION_MISMATCH	(-30974)/* Environment version mismatch. */

/* DB (private) error return codes. */
#define	DB_ALREADY_ABORTED	(-30899)
#define	DB_DELETED		(-30898)/* Recovery file marked deleted. */
#define	DB_LOCK_NOTEXIST	(-30897)/* Object to lock is gone. */
#define	DB_NEEDSPLIT		(-30896)/* Page needs to be split. */
#define	DB_REP_EGENCHG		(-30895)/* Egen changed while in election. */
#define	DB_REP_LOGREADY		(-30894)/* Rep log ready for recovery. */
#define	DB_REP_PAGEDONE		(-30893)/* This page was already done. */
#define	DB_SURPRISE_KID		(-30892)/* Child commit where parent
					   didn't know it was a parent. */
#define	DB_SWAPBYTES		(-30891)/* Database needs byte swapping. */
#define	DB_TIMEOUT		(-30890)/* Timed out waiting for election. */
#define	DB_TXN_CKP		(-30889)/* Encountered ckp record in log. */
#define	DB_VERIFY_FATAL		(-30888)/* DB->verify cannot proceed. */

/* Database handle. */
struct __db {
	/*******************************************************
	 * Public: owned by the application.
	 *******************************************************/
	u_int32_t pgsize;		/* Database logical page size. */

					/* Callbacks. */
	int (*db_append_recno) __P((DB *, DBT *, db_recno_t));
	void (*db_feedback) __P((DB *, int, int));
	int (*dup_compare) __P((DB *, const DBT *, const DBT *));

	void	*app_private;		/* Application-private handle. */

	/*******************************************************
	 * Private: owned by DB.
	 *******************************************************/
	DB_ENV	*dbenv;			/* Backing environment. */

	DBTYPE	 type;			/* DB access method type. */

	DB_MPOOLFILE *mpf;		/* Backing buffer pool. */

	DB_MUTEX *mutexp;		/* Synchronization for free threading */

	char *fname, *dname;		/* File/database passed to DB->open. */
	u_int32_t open_flags;		/* Flags passed to DB->open. */

	u_int8_t fileid[DB_FILE_ID_LEN];/* File's unique ID for locking. */

	u_int32_t adj_fileid;		/* File's unique ID for curs. adj. */

#define	DB_LOGFILEID_INVALID	-1
	FNAME *log_filename;		/* File's naming info for logging. */

	db_pgno_t meta_pgno;		/* Meta page number */
	u_int32_t lid;			/* Locker id for handle locking. */
	u_int32_t cur_lid;		/* Current handle lock holder. */
	u_int32_t associate_lid;	/* Locker id for DB->associate call. */
	DB_LOCK	handle_lock;		/* Lock held on this handle. */

	u_int	 cl_id;			/* RPC: remote client id. */

	time_t	 timestamp;		/* Handle timestamp for replication. */

	/*
	 * Returned data memory for DB->get() and friends.
	 */
	DBT	 my_rskey;		/* Secondary key. */
	DBT	 my_rkey;		/* [Primary] key. */
	DBT	 my_rdata;		/* Data. */

	/*
	 * !!!
	 * Some applications use DB but implement their own locking outside of
	 * DB.  If they're using fcntl(2) locking on the underlying database
	 * file, and we open and close a file descriptor for that file, we will
	 * discard their locks.  The DB_FCNTL_LOCKING flag to DB->open is an
	 * undocumented interface to support this usage which leaves any file
	 * descriptors we open until DB->close.  This will only work with the
	 * DB->open interface and simple caches, e.g., creating a transaction
	 * thread may open/close file descriptors this flag doesn't protect.
	 * Locking with fcntl(2) on a file that you don't own is a very, very
	 * unsafe thing to do.  'Nuff said.
	 */
	DB_FH	*saved_open_fhp;	/* Saved file handle. */

	/*
	 * Linked list of DBP's, linked from the DB_ENV, used to keep track
	 * of all open db handles for cursor adjustment.
	 *
	 * !!!
	 * Explicit representations of structures from queue.h.
	 * LIST_ENTRY(__db) dblistlinks;
	 */
	struct {
		struct __db *le_next;
		struct __db **le_prev;
	} dblistlinks;

	/*
	 * Cursor queues.
	 *
	 * !!!
	 * Explicit representations of structures from queue.h.
	 * TAILQ_HEAD(__cq_fq, __dbc) free_queue;
	 * TAILQ_HEAD(__cq_aq, __dbc) active_queue;
	 * TAILQ_HEAD(__cq_jq, __dbc) join_queue;
	 */
	struct __cq_fq {
		struct __dbc *tqh_first;
		struct __dbc **tqh_last;
	} free_queue;
	struct __cq_aq {
		struct __dbc *tqh_first;
		struct __dbc **tqh_last;
	} active_queue;
	struct __cq_jq {
		struct __dbc *tqh_first;
		struct __dbc **tqh_last;
	} join_queue;

	/*
	 * Secondary index support.
	 *
	 * Linked list of secondary indices -- set in the primary.
	 *
	 * !!!
	 * Explicit representations of structures from queue.h.
	 * LIST_HEAD(s_secondaries, __db);
	 */
	struct {
		struct __db *lh_first;
	} s_secondaries;

	/*
	 * List entries for secondaries, and reference count of how
	 * many threads are updating this secondary (see __db_c_put).
	 *
	 * !!!
	 * Note that these are synchronized by the primary's mutex, but
	 * filled in in the secondaries.
	 *
	 * !!!
	 * Explicit representations of structures from queue.h.
	 * LIST_ENTRY(__db) s_links;
	 */
	struct {
		struct __db *le_next;
		struct __db **le_prev;
	} s_links;
	u_int32_t s_refcnt;

	/* Secondary callback and free functions -- set in the secondary. */
	int	(*s_callback) __P((DB *, const DBT *, const DBT *, DBT *));

	/* Reference to primary -- set in the secondary. */
	DB	*s_primary;

	/* API-private structure: used by DB 1.85, C++, Java, Perl and Tcl */
	void	*api_internal;

	/* Subsystem-private structure. */
	void	*bt_internal;		/* Btree/Recno access method. */
	void	*h_internal;		/* Hash access method. */
	void	*q_internal;		/* Queue access method. */
	void	*xa_internal;		/* XA. */

					/* Methods. */
	int  (*associate) __P((DB *, DB_TXN *, DB *, int (*)(DB *, const DBT *,
		const DBT *, DBT *), u_int32_t));
	int  (*close) __P((DB *, u_int32_t));
	int  (*cursor) __P((DB *, DB_TXN *, DBC **, u_int32_t));
	int  (*del) __P((DB *, DB_TXN *, DBT *, u_int32_t));
	int  (*dump) __P((DB *,
		const char *, int (*)(void *, const void *), void *, int, int));
	void (*err) __P((DB *, int, const char *, ...));
	void (*errx) __P((DB *, const char *, ...));
	int  (*fd) __P((DB *, int *));
	int  (*get) __P((DB *, DB_TXN *, DBT *, DBT *, u_int32_t));
	int  (*pget) __P((DB *, DB_TXN *, DBT *, DBT *, DBT *, u_int32_t));
	int  (*get_byteswapped) __P((DB *, int *));
	int  (*get_cachesize) __P((DB *, u_int32_t *, u_int32_t *, int *));
	int  (*get_dbname) __P((DB *, const char **, const char **));
	int  (*get_encrypt_flags) __P((DB *, u_int32_t *));
	DB_ENV *(*get_env) __P((DB *));
	void (*get_errfile) __P((DB *, FILE **));
	void (*get_errpfx) __P((DB *, const char **));
	int  (*get_flags) __P((DB *, u_int32_t *));
	int  (*get_lorder) __P((DB *, int *));
	int  (*get_open_flags) __P((DB *, u_int32_t *));
	int  (*get_pagesize) __P((DB *, u_int32_t *));
	int  (*get_transactional) __P((DB *));
	int  (*get_type) __P((DB *, DBTYPE *));
	int  (*join) __P((DB *, DBC **, DBC **, u_int32_t));
	int  (*key_range) __P((DB *,
		DB_TXN *, DBT *, DB_KEY_RANGE *, u_int32_t));
	int  (*open) __P((DB *, DB_TXN *,
		const char *, const char *, DBTYPE, u_int32_t, int));
	int  (*put) __P((DB *, DB_TXN *, DBT *, DBT *, u_int32_t));
	int  (*remove) __P((DB *, const char *, const char *, u_int32_t));
	int  (*rename) __P((DB *,
	    const char *, const char *, const char *, u_int32_t));
	int  (*truncate) __P((DB *, DB_TXN *, u_int32_t *, u_int32_t));
	int  (*set_append_recno) __P((DB *, int (*)(DB *, DBT *, db_recno_t)));
	int  (*set_alloc) __P((DB *, void *(*)(size_t),
		void *(*)(void *, size_t), void (*)(void *)));
	int  (*set_cachesize) __P((DB *, u_int32_t, u_int32_t, int));
	int  (*set_dup_compare) __P((DB *,
	    int (*)(DB *, const DBT *, const DBT *)));
	int  (*set_encrypt) __P((DB *, const char *, u_int32_t));
	void (*set_errcall) __P((DB *,
	    void (*)(const DB_ENV *, const char *, const char *)));
	void (*set_errfile) __P((DB *, FILE *));
	void (*set_errpfx) __P((DB *, const char *));
	int  (*set_feedback) __P((DB *, void (*)(DB *, int, int)));
	int  (*set_flags) __P((DB *, u_int32_t));
	int  (*set_lorder) __P((DB *, int));
	void (*set_msgcall) __P((DB *, void (*)(const DB_ENV *, const char *)));
	void (*get_msgfile) __P((DB *, FILE **));
	void (*set_msgfile) __P((DB *, FILE *));
	int  (*set_pagesize) __P((DB *, u_int32_t));
	int  (*set_paniccall) __P((DB *, void (*)(DB_ENV *, int)));
	int  (*stat) __P((DB *, DB_TXN *, void *, u_int32_t));
	int  (*stat_print) __P((DB *, u_int32_t));
	int  (*sync) __P((DB *, u_int32_t));
	int  (*upgrade) __P((DB *, const char *, u_int32_t));
	int  (*verify) __P((DB *,
	    const char *, const char *, FILE *, u_int32_t));

	int  (*get_bt_minkey) __P((DB *, u_int32_t *));
	int  (*set_bt_compare) __P((DB *,
	    int (*)(DB *, const DBT *, const DBT *)));
	int  (*set_bt_maxkey) __P((DB *, u_int32_t));
	int  (*set_bt_minkey) __P((DB *, u_int32_t));
	int  (*set_bt_prefix) __P((DB *,
	    size_t (*)(DB *, const DBT *, const DBT *)));

	int  (*get_h_ffactor) __P((DB *, u_int32_t *));
	int  (*get_h_nelem) __P((DB *, u_int32_t *));
	int  (*set_h_ffactor) __P((DB *, u_int32_t));
	int  (*set_h_hash) __P((DB *,
	    u_int32_t (*)(DB *, const void *, u_int32_t)));
	int  (*set_h_nelem) __P((DB *, u_int32_t));

	int  (*get_re_delim) __P((DB *, int *));
	int  (*get_re_len) __P((DB *, u_int32_t *));
	int  (*get_re_pad) __P((DB *, int *));
	int  (*get_re_source) __P((DB *, const char **));
	int  (*set_re_delim) __P((DB *, int));
	int  (*set_re_len) __P((DB *, u_int32_t));
	int  (*set_re_pad) __P((DB *, int));
	int  (*set_re_source) __P((DB *, const char *));

	int  (*get_q_extentsize) __P((DB *, u_int32_t *));
	int  (*set_q_extentsize) __P((DB *, u_int32_t));

	int  (*db_am_remove) __P((DB *, DB_TXN *, const char *, const char *));
	int  (*db_am_rename) __P((DB *, DB_TXN *,
	    const char *, const char *, const char *));

	/*
	 * Never called; these are a place to save function pointers
	 * so that we can undo an associate.
	 */
	int  (*stored_get) __P((DB *, DB_TXN *, DBT *, DBT *, u_int32_t));
	int  (*stored_close) __P((DB *, u_int32_t));

#define	DB_OK_BTREE	0x01
#define	DB_OK_HASH	0x02
#define	DB_OK_QUEUE	0x04
#define	DB_OK_RECNO	0x08
	u_int32_t	am_ok;		/* Legal AM choices. */

#define	DB_AM_CHKSUM		0x00000001 /* Checksumming. */
#define	DB_AM_CL_WRITER		0x00000002 /* Allow writes in client replica. */
#define	DB_AM_COMPENSATE	0x00000004 /* Created by compensating txn. */
#define	DB_AM_CREATED		0x00000008 /* Database was created upon open. */
#define	DB_AM_CREATED_MSTR	0x00000010 /* Encompassing file was created. */
#define	DB_AM_DBM_ERROR		0x00000020 /* Error in DBM/NDBM database. */
#define	DB_AM_DELIMITER		0x00000040 /* Variable length delimiter set. */
#define	DB_AM_DIRTY		0x00000080 /* Support Dirty Reads. */
#define	DB_AM_DISCARD		0x00000100 /* Discard any cached pages. */
#define	DB_AM_DUP		0x00000200 /* DB_DUP. */
#define	DB_AM_DUPSORT		0x00000400 /* DB_DUPSORT. */
#define	DB_AM_ENCRYPT		0x00000800 /* Encryption. */
#define	DB_AM_FIXEDLEN		0x00001000 /* Fixed-length records. */
#define	DB_AM_INMEM		0x00002000 /* In-memory; no sync on close. */
#define	DB_AM_INORDER		0x00004000 /* DB_INORDER. */
#define	DB_AM_IN_RENAME		0x00008000 /* File is being renamed. */
#define	DB_AM_NOT_DURABLE	0x00010000 /* Do not log changes. */
#define	DB_AM_OPEN_CALLED	0x00020000 /* DB->open called. */
#define	DB_AM_PAD		0x00040000 /* Fixed-length record pad. */
#define	DB_AM_PGDEF		0x00080000 /* Page size was defaulted. */
#define	DB_AM_RDONLY		0x00100000 /* Database is readonly. */
#define	DB_AM_RECNUM		0x00200000 /* DB_RECNUM. */
#define	DB_AM_RECOVER		0x00400000 /* DB opened by recovery routine. */
#define	DB_AM_RENUMBER		0x00800000 /* DB_RENUMBER. */
#define	DB_AM_REPLICATION	0x01000000 /* An internal replication file. */
#define	DB_AM_REVSPLITOFF	0x02000000 /* DB_REVSPLITOFF. */
#define	DB_AM_SECONDARY		0x04000000 /* Database is a secondary index. */
#define	DB_AM_SNAPSHOT		0x08000000 /* DB_SNAPSHOT. */
#define	DB_AM_SUBDB		0x10000000 /* Subdatabases supported. */
#define	DB_AM_SWAP		0x20000000 /* Pages need to be byte-swapped. */
#define	DB_AM_TXN		0x40000000 /* Opened in a transaction. */
#define	DB_AM_VERIFYING		0x80000000 /* DB handle is in the verifier. */
	u_int32_t orig_flags;		   /* Flags at  open, for refresh. */
	u_int32_t flags;
};

/*
 * Macros for bulk get.  These are only intended for the C API.
 * For C++, use DbMultiple*Iterator.
 */
#define	DB_MULTIPLE_INIT(pointer, dbt)					\
	(pointer = (u_int8_t *)(dbt)->data +				\
	    (dbt)->ulen - sizeof(u_int32_t))
#define	DB_MULTIPLE_NEXT(pointer, dbt, retdata, retdlen)		\
	do {								\
		if (*((u_int32_t *)(pointer)) == (u_int32_t)-1) {	\
			retdata = NULL;					\
			pointer = NULL;					\
			break;						\
		}							\
		retdata = (u_int8_t *)					\
		    (dbt)->data + *(u_int32_t *)(pointer);		\
		(pointer) = (u_int32_t *)(pointer) - 1;			\
		retdlen = *(u_int32_t *)(pointer);			\
		(pointer) = (u_int32_t *)(pointer) - 1;			\
		if (retdlen == 0 &&					\
		    retdata == (u_int8_t *)(dbt)->data)			\
			retdata = NULL;					\
	} while (0)
#define	DB_MULTIPLE_KEY_NEXT(pointer, dbt, retkey, retklen, retdata, retdlen) \
	do {								\
		if (*((u_int32_t *)(pointer)) == (u_int32_t)-1) {	\
			retdata = NULL;					\
			retkey = NULL;					\
			pointer = NULL;					\
			break;						\
		}							\
		retkey = (u_int8_t *)					\
		    (dbt)->data + *(u_int32_t *)(pointer);		\
		(pointer) = (u_int32_t *)(pointer) - 1;			\
		retklen = *(u_int32_t *)(pointer);			\
		(pointer) = (u_int32_t *)(pointer) - 1;			\
		retdata = (u_int8_t *)					\
		    (dbt)->data + *(u_int32_t *)(pointer);		\
		(pointer) = (u_int32_t *)(pointer) - 1;			\
		retdlen = *(u_int32_t *)(pointer);			\
		(pointer) = (u_int32_t *)(pointer) - 1;			\
	} while (0)

#define	DB_MULTIPLE_RECNO_NEXT(pointer, dbt, recno, retdata, retdlen)   \
	do {								\
		if (*((u_int32_t *)(pointer)) == (u_int32_t)0) {	\
			recno = 0;					\
			retdata = NULL;					\
			pointer = NULL;					\
			break;						\
		}							\
		recno = *(u_int32_t *)(pointer);			\
		(pointer) = (u_int32_t *)(pointer) - 1;			\
		retdata = (u_int8_t *)					\
		    (dbt)->data + *(u_int32_t *)(pointer);		\
		(pointer) = (u_int32_t *)(pointer) - 1;			\
		retdlen = *(u_int32_t *)(pointer);			\
		(pointer) = (u_int32_t *)(pointer) - 1;			\
	} while (0)

/*******************************************************
 * Access method cursors.
 *******************************************************/
struct __dbc {
	DB *dbp;			/* Related DB access method. */
	DB_TXN	 *txn;			/* Associated transaction. */

	/*
	 * Active/free cursor queues.
	 *
	 * !!!
	 * Explicit representations of structures from queue.h.
	 * TAILQ_ENTRY(__dbc) links;
	 */
	struct {
		DBC *tqe_next;
		DBC **tqe_prev;
	} links;

	/*
	 * The DBT *'s below are used by the cursor routines to return
	 * data to the user when DBT flags indicate that DB should manage
	 * the returned memory.  They point at a DBT containing the buffer
	 * and length that will be used, and "belonging" to the handle that
	 * should "own" this memory.  This may be a "my_*" field of this
	 * cursor--the default--or it may be the corresponding field of
	 * another cursor, a DB handle, a join cursor, etc.  In general, it
	 * will be whatever handle the user originally used for the current
	 * DB interface call.
	 */
	DBT	 *rskey;		/* Returned secondary key. */
	DBT	 *rkey;			/* Returned [primary] key. */
	DBT	 *rdata;		/* Returned data. */

	DBT	  my_rskey;		/* Space for returned secondary key. */
	DBT	  my_rkey;		/* Space for returned [primary] key. */
	DBT	  my_rdata;		/* Space for returned data. */

	u_int32_t lid;			/* Default process' locker id. */
	u_int32_t locker;		/* Locker for this operation. */
	DBT	  lock_dbt;		/* DBT referencing lock. */
	DB_LOCK_ILOCK lock;		/* Object to be locked. */
	DB_LOCK	  mylock;		/* CDB lock held on this cursor. */

	u_int	  cl_id;		/* Remote client id. */

	DBTYPE	  dbtype;		/* Cursor type. */

	DBC_INTERNAL *internal;		/* Access method private. */

	int (*c_close) __P((DBC *));	/* Methods: public. */
	int (*c_count) __P((DBC *, db_recno_t *, u_int32_t));
	int (*c_del) __P((DBC *, u_int32_t));
	int (*c_dup) __P((DBC *, DBC **, u_int32_t));
	int (*c_get) __P((DBC *, DBT *, DBT *, u_int32_t));
	int (*c_pget) __P((DBC *, DBT *, DBT *, DBT *, u_int32_t));
	int (*c_put) __P((DBC *, DBT *, DBT *, u_int32_t));

					/* Methods: private. */
	int (*c_am_bulk) __P((DBC *, DBT *, u_int32_t));
	int (*c_am_close) __P((DBC *, db_pgno_t, int *));
	int (*c_am_del) __P((DBC *));
	int (*c_am_destroy) __P((DBC *));
	int (*c_am_get) __P((DBC *, DBT *, DBT *, u_int32_t, db_pgno_t *));
	int (*c_am_put) __P((DBC *, DBT *, DBT *, u_int32_t, db_pgno_t *));
	int (*c_am_writelock) __P((DBC *));

#define	DBC_ACTIVE	 0x0001		/* Cursor in use. */
#define	DBC_COMPENSATE	 0x0002		/* Cursor compensating, don't lock. */
#define	DBC_DEGREE_2	 0x0004		/* Cursor has degree 2 isolation. */
#define	DBC_DIRTY_READ	 0x0008		/* Cursor supports dirty reads. */
#define	DBC_OPD		 0x0010		/* Cursor references off-page dups. */
#define	DBC_RECOVER	 0x0020		/* Recovery cursor; don't log/lock. */
#define	DBC_RMW		 0x0040		/* Acquire write flag in read op. */
#define	DBC_TRANSIENT	 0x0080		/* Cursor is transient. */
#define	DBC_WRITECURSOR	 0x0100		/* Cursor may be used to write (CDB). */
#define	DBC_WRITER	 0x0200		/* Cursor immediately writing (CDB). */
#define	DBC_MULTIPLE	 0x0400		/* Return Multiple data. */
#define	DBC_MULTIPLE_KEY 0x0800		/* Return Multiple keys and data. */
#define	DBC_OWN_LID	 0x1000		/* Free lock id on destroy. */
	u_int32_t flags;
};

/* Key range statistics structure */
struct __key_range {
	double less;
	double equal;
	double greater;
};

/* Btree/Recno statistics structure. */
struct __db_bt_stat {
	u_int32_t bt_magic;		/* Magic number. */
	u_int32_t bt_version;		/* Version number. */
	u_int32_t bt_metaflags;		/* Metadata flags. */
	u_int32_t bt_nkeys;		/* Number of unique keys. */
	u_int32_t bt_ndata;		/* Number of data items. */
	u_int32_t bt_pagesize;		/* Page size. */
	u_int32_t bt_maxkey;		/* Maxkey value. */
	u_int32_t bt_minkey;		/* Minkey value. */
	u_int32_t bt_re_len;		/* Fixed-length record length. */
	u_int32_t bt_re_pad;		/* Fixed-length record pad. */
	u_int32_t bt_levels;		/* Tree levels. */
	u_int32_t bt_int_pg;		/* Internal pages. */
	u_int32_t bt_leaf_pg;		/* Leaf pages. */
	u_int32_t bt_dup_pg;		/* Duplicate pages. */
	u_int32_t bt_over_pg;		/* Overflow pages. */
	u_int32_t bt_empty_pg;		/* Empty pages. */
	u_int32_t bt_free;		/* Pages on the free list. */
	u_int32_t bt_int_pgfree;	/* Bytes free in internal pages. */
	u_int32_t bt_leaf_pgfree;	/* Bytes free in leaf pages. */
	u_int32_t bt_dup_pgfree;	/* Bytes free in duplicate pages. */
	u_int32_t bt_over_pgfree;	/* Bytes free in overflow pages. */
};

/* Hash statistics structure. */
struct __db_h_stat {
	u_int32_t hash_magic;		/* Magic number. */
	u_int32_t hash_version;		/* Version number. */
	u_int32_t hash_metaflags;	/* Metadata flags. */
	u_int32_t hash_nkeys;		/* Number of unique keys. */
	u_int32_t hash_ndata;		/* Number of data items. */
	u_int32_t hash_pagesize;	/* Page size. */
	u_int32_t hash_ffactor;		/* Fill factor specified at create. */
	u_int32_t hash_buckets;		/* Number of hash buckets. */
	u_int32_t hash_free;		/* Pages on the free list. */
	u_int32_t hash_bfree;		/* Bytes free on bucket pages. */
	u_int32_t hash_bigpages;	/* Number of big key/data pages. */
	u_int32_t hash_big_bfree;	/* Bytes free on big item pages. */
	u_int32_t hash_overflows;	/* Number of overflow pages. */
	u_int32_t hash_ovfl_free;	/* Bytes free on ovfl pages. */
	u_int32_t hash_dup;		/* Number of dup pages. */
	u_int32_t hash_dup_free;	/* Bytes free on duplicate pages. */
};

/* Queue statistics structure. */
struct __db_qam_stat {
	u_int32_t qs_magic;		/* Magic number. */
	u_int32_t qs_version;		/* Version number. */
	u_int32_t qs_metaflags;		/* Metadata flags. */
	u_int32_t qs_nkeys;		/* Number of unique keys. */
	u_int32_t qs_ndata;		/* Number of data items. */
	u_int32_t qs_pagesize;		/* Page size. */
	u_int32_t qs_extentsize;	/* Pages per extent. */
	u_int32_t qs_pages;		/* Data pages. */
	u_int32_t qs_re_len;		/* Fixed-length record length. */
	u_int32_t qs_re_pad;		/* Fixed-length record pad. */
	u_int32_t qs_pgfree;		/* Bytes free in data pages. */
	u_int32_t qs_first_recno;	/* First not deleted record. */
	u_int32_t qs_cur_recno;		/* Next available record number. */
};

/*******************************************************
 * Environment.
 *******************************************************/
#define	DB_REGION_MAGIC	0x120897	/* Environment magic number. */

/* Database Environment handle. */
struct __db_env {
	/*******************************************************
	 * Public: owned by the application.
	 *******************************************************/
					/* Error message callback. */
	void (*db_errcall) __P((const DB_ENV *, const char *, const char *));
	FILE		*db_errfile;	/* Error message file stream. */
	const char	*db_errpfx;	/* Error message prefix. */

	FILE		*db_msgfile;	/* Statistics message file stream. */
					/* Statistics message callback. */
	void (*db_msgcall) __P((const DB_ENV *, const char *));

					/* Other Callbacks. */
	void (*db_feedback) __P((DB_ENV *, int, int));
	void (*db_paniccall) __P((DB_ENV *, int));

					/* App-specified alloc functions. */
	void *(*db_malloc) __P((size_t));
	void *(*db_realloc) __P((void *, size_t));
	void (*db_free) __P((void *));

	/*
	 * Currently, the verbose list is a bit field with room for 32
	 * entries.  There's no reason that it needs to be limited, if
	 * there are ever more than 32 entries, convert to a bit array.
	 */
#define	DB_VERB_DEADLOCK	0x0001	/* Deadlock detection information. */
#define	DB_VERB_RECOVERY	0x0002	/* Recovery information. */
#define	DB_VERB_REPLICATION	0x0004	/* Replication information. */
#define	DB_VERB_WAITSFOR	0x0008	/* Dump waits-for table. */
	u_int32_t	 verbose;	/* Verbose output. */

	void		*app_private;	/* Application-private handle. */

	int (*app_dispatch)		/* User-specified recovery dispatch. */
	    __P((DB_ENV *, DBT *, DB_LSN *, db_recops));

	/* Locking. */
	u_int8_t	*lk_conflicts;	/* Two dimensional conflict matrix. */
	int		 lk_modes;	/* Number of lock modes in table. */
	u_int32_t	 lk_max;	/* Maximum number of locks. */
	u_int32_t	 lk_max_lockers;/* Maximum number of lockers. */
	u_int32_t	 lk_max_objects;/* Maximum number of locked objects. */
	u_int32_t	 lk_detect;	/* Deadlock detect on all conflicts. */
	db_timeout_t	 lk_timeout;	/* Lock timeout period. */

	/* Logging. */
	u_int32_t	 lg_bsize;	/* Buffer size. */
	u_int32_t	 lg_size;	/* Log file size. */
	u_int32_t	 lg_regionmax;	/* Region size. */

	/* Memory pool. */
	u_int32_t	 mp_gbytes;	/* Cachesize: GB. */
	u_int32_t	 mp_bytes;	/* Cachesize: Bytes. */
	u_int		 mp_ncache;	/* Number of cache regions. */
	size_t		 mp_mmapsize;	/* Maximum file size for mmap. */
	int		 mp_maxopenfd;	/* Maximum open file descriptors. */
	int		 mp_maxwrite;	/* Maximum buffers to write. */
	int				/* Sleep after writing max buffers. */
			 mp_maxwrite_sleep;

	/* Replication */
	int		 rep_eid;	/* environment id. */
	int		(*rep_send)	/* Send function. */
			    __P((DB_ENV *, const DBT *, const DBT *,
			    const DB_LSN *, int, u_int32_t));

	/* Transactions. */
	u_int32_t	 tx_max;	/* Maximum number of transactions. */
	time_t		 tx_timestamp;	/* Recover to specific timestamp. */
	db_timeout_t	 tx_timeout;	/* Timeout for transactions. */

	/*******************************************************
	 * Private: owned by DB.
	 *******************************************************/
					/* User files, paths. */
	char		*db_home;	/* Database home. */
	char		*db_log_dir;	/* Database log file directory. */
	char		*db_tmp_dir;	/* Database tmp file directory. */

	char	       **db_data_dir;	/* Database data file directories. */
	int		 data_cnt;	/* Database data file slots. */
	int		 data_next;	/* Next Database data file slot. */

	int		 db_mode;	/* Default open permissions. */
	int		 dir_mode;	/* Intermediate directory perms. */
	u_int32_t	 env_lid;	/* Locker ID in non-threaded handles. */
	u_int32_t	 open_flags;	/* Flags passed to DB_ENV->open. */

	void		*reginfo;	/* REGINFO structure reference. */
	DB_FH		*lockfhp;	/* fcntl(2) locking file handle. */

	int	      (**recover_dtab)	/* Dispatch table for recover funcs. */
			    __P((DB_ENV *, DBT *, DB_LSN *, db_recops, void *));
	size_t		 recover_dtab_size;
					/* Slots in the dispatch table. */

	void		*cl_handle;	/* RPC: remote client handle. */
	u_int		 cl_id;		/* RPC: remote client env id. */

	int		 db_ref;	/* DB reference count. */

	long		 shm_key;	/* shmget(2) key. */
	u_int32_t	 tas_spins;	/* test-and-set spins. */

	/*
	 * List of open DB handles for this DB_ENV, used for cursor
	 * adjustment.  Must be protected for multi-threaded support.
	 *
	 * !!!
	 * As this structure is allocated in per-process memory, the
	 * mutex may need to be stored elsewhere on architectures unable
	 * to support mutexes in heap memory, e.g. HP/UX 9.
	 *
	 * !!!
	 * Explicit representation of structure in queue.h.
	 * LIST_HEAD(dblist, __db);
	 */
	DB_MUTEX	*dblist_mutexp;	/* Mutex. */
	struct {
		struct __db *lh_first;
	} dblist;

	/*
	 * XA support.
	 *
	 * !!!
	 * Explicit representations of structures from queue.h.
	 * TAILQ_ENTRY(__db_env) links;
	 * TAILQ_HEAD(xa_txn, __db_txn);
	 */
	struct {
		struct __db_env *tqe_next;
		struct __db_env **tqe_prev;
	} links;
	struct __xa_txn {	/* XA Active Transactions. */
		struct __db_txn *tqh_first;
		struct __db_txn **tqh_last;
	} xa_txn;
	int		 xa_rmid;	/* XA Resource Manager ID. */

	/* API-private structure. */
	void		*api1_internal;	/* C++, Perl API private */
	void		*api2_internal;	/* Java API private */

	char		*passwd;	/* Cryptography support. */
	size_t		 passwd_len;
	void		*crypto_handle;	/* Primary handle. */
	DB_MUTEX	*mt_mutexp;	/* Mersenne Twister mutex. */
	int		 mti;		/* Mersenne Twister index. */
	u_long		*mt;		/* Mersenne Twister state vector. */

					/* DB_ENV Methods. */
	int  (*close) __P((DB_ENV *, u_int32_t));
	int  (*dbremove) __P((DB_ENV *,
		DB_TXN *, const char *, const char *, u_int32_t));
	int  (*dbrename) __P((DB_ENV *, DB_TXN *,
		const char *, const char *, const char *, u_int32_t));
	void (*err) __P((const DB_ENV *, int, const char *, ...));
	void (*errx) __P((const DB_ENV *, const char *, ...));
	int  (*open) __P((DB_ENV *, const char *, u_int32_t, int));
	int  (*remove) __P((DB_ENV *, const char *, u_int32_t));
	int  (*stat_print) __P((DB_ENV *, u_int32_t));

					/* House-keeping. */
	int  (*fileid_reset) __P((DB_ENV *, char *, int));
	int  (*is_bigendian) __P((void));
	int  (*lsn_reset) __P((DB_ENV *, char *, int));
	int  (*prdbt) __P((DBT *,
		int, const char *, void *, int (*)(void *, const void *), int));

					/* Setters/getters. */
	int  (*set_alloc) __P((DB_ENV *, void *(*)(size_t),
		void *(*)(void *, size_t), void (*)(void *)));
	int  (*set_app_dispatch) __P((DB_ENV *,
		int (*)(DB_ENV *, DBT *, DB_LSN *, db_recops)));
	int  (*get_data_dirs) __P((DB_ENV *, const char ***));
	int  (*set_data_dir) __P((DB_ENV *, const char *));
	int  (*get_encrypt_flags) __P((DB_ENV *, u_int32_t *));
	int  (*set_encrypt) __P((DB_ENV *, const char *, u_int32_t));
	void (*set_errcall) __P((DB_ENV *,
	    void (*)(const DB_ENV *, const char *, const char *)));
	void (*get_errfile) __P((DB_ENV *, FILE **));
	void (*set_errfile) __P((DB_ENV *, FILE *));
	void (*get_errpfx) __P((DB_ENV *, const char **));
	void (*set_errpfx) __P((DB_ENV *, const char *));
	int  (*set_feedback) __P((DB_ENV *, void (*)(DB_ENV *, int, int)));
	int  (*get_flags) __P((DB_ENV *, u_int32_t *));
	int  (*set_flags) __P((DB_ENV *, u_int32_t, int));
	int  (*get_home) __P((DB_ENV *, const char **));
	int  (*set_intermediate_dir) __P((DB_ENV *, int, u_int32_t));
	int  (*get_open_flags) __P((DB_ENV *, u_int32_t *));
	int  (*set_paniccall) __P((DB_ENV *, void (*)(DB_ENV *, int)));
	int  (*set_rpc_server) __P((DB_ENV *,
		void *, const char *, long, long, u_int32_t));
	int  (*get_shm_key) __P((DB_ENV *, long *));
	int  (*set_shm_key) __P((DB_ENV *, long));
	void (*set_msgcall) __P((DB_ENV *,
		void (*)(const DB_ENV *, const char *)));
	void (*get_msgfile) __P((DB_ENV *, FILE **));
	void (*set_msgfile) __P((DB_ENV *, FILE *));
	int  (*get_tas_spins) __P((DB_ENV *, u_int32_t *));
	int  (*set_tas_spins) __P((DB_ENV *, u_int32_t));
	int  (*get_tmp_dir) __P((DB_ENV *, const char **));
	int  (*set_tmp_dir) __P((DB_ENV *, const char *));
	int  (*get_verbose) __P((DB_ENV *, u_int32_t, int *));
	int  (*set_verbose) __P((DB_ENV *, u_int32_t, int));

	void *lg_handle;		/* Log handle and methods. */
	int  (*get_lg_bsize) __P((DB_ENV *, u_int32_t *));
	int  (*set_lg_bsize) __P((DB_ENV *, u_int32_t));
	int  (*get_lg_dir) __P((DB_ENV *, const char **));
	int  (*set_lg_dir) __P((DB_ENV *, const char *));
	int  (*get_lg_max) __P((DB_ENV *, u_int32_t *));
	int  (*set_lg_max) __P((DB_ENV *, u_int32_t));
	int  (*get_lg_regionmax) __P((DB_ENV *, u_int32_t *));
	int  (*set_lg_regionmax) __P((DB_ENV *, u_int32_t));
	int  (*log_archive) __P((DB_ENV *, char **[], u_int32_t));
	int  (*log_cursor) __P((DB_ENV *, DB_LOGC **, u_int32_t));
	int  (*log_file) __P((DB_ENV *, const DB_LSN *, char *, size_t));
	int  (*log_flush) __P((DB_ENV *, const DB_LSN *));
	int  (*log_put) __P((DB_ENV *, DB_LSN *, const DBT *, u_int32_t));
	int  (*log_stat) __P((DB_ENV *, DB_LOG_STAT **, u_int32_t));
	int  (*log_stat_print) __P((DB_ENV *, u_int32_t));

	void *lk_handle;		/* Lock handle and methods. */
	int  (*get_lk_conflicts) __P((DB_ENV *, const u_int8_t **, int *));
	int  (*set_lk_conflicts) __P((DB_ENV *, u_int8_t *, int));
	int  (*get_lk_detect) __P((DB_ENV *, u_int32_t *));
	int  (*set_lk_detect) __P((DB_ENV *, u_int32_t));
	int  (*set_lk_max) __P((DB_ENV *, u_int32_t));
	int  (*get_lk_max_locks) __P((DB_ENV *, u_int32_t *));
	int  (*set_lk_max_locks) __P((DB_ENV *, u_int32_t));
	int  (*get_lk_max_lockers) __P((DB_ENV *, u_int32_t *));
	int  (*set_lk_max_lockers) __P((DB_ENV *, u_int32_t));
	int  (*get_lk_max_objects) __P((DB_ENV *, u_int32_t *));
	int  (*set_lk_max_objects) __P((DB_ENV *, u_int32_t));
	int  (*lock_detect) __P((DB_ENV *, u_int32_t, u_int32_t, int *));
	int  (*lock_get) __P((DB_ENV *,
		u_int32_t, u_int32_t, const DBT *, db_lockmode_t, DB_LOCK *));
	int  (*lock_put) __P((DB_ENV *, DB_LOCK *));
	int  (*lock_id) __P((DB_ENV *, u_int32_t *));
	int  (*lock_id_free) __P((DB_ENV *, u_int32_t));
	int  (*lock_stat) __P((DB_ENV *, DB_LOCK_STAT **, u_int32_t));
	int  (*lock_stat_print) __P((DB_ENV *, u_int32_t));
	int  (*lock_vec) __P((DB_ENV *,
		u_int32_t, u_int32_t, DB_LOCKREQ *, int, DB_LOCKREQ **));

	void *mp_handle;		/* Mpool handle and methods. */
	int  (*get_cachesize) __P((DB_ENV *, u_int32_t *, u_int32_t *, int *));
	int  (*set_cachesize) __P((DB_ENV *, u_int32_t, u_int32_t, int));
	int  (*get_mp_mmapsize) __P((DB_ENV *, size_t *));
	int  (*set_mp_mmapsize) __P((DB_ENV *, size_t));
	int  (*get_mp_max_openfd) __P((DB_ENV *, int *));
	int  (*set_mp_max_openfd) __P((DB_ENV *, int));
	int  (*get_mp_max_write) __P((DB_ENV *, int *, int *));
	int  (*set_mp_max_write) __P((DB_ENV *, int, int));
	int  (*memp_fcreate) __P((DB_ENV *, DB_MPOOLFILE **, u_int32_t));
	int  (*memp_register) __P((DB_ENV *, int,
		int (*)(DB_ENV *, db_pgno_t, void *, DBT *),
		int (*)(DB_ENV *, db_pgno_t, void *, DBT *)));
	int  (*memp_stat) __P((DB_ENV *,
		DB_MPOOL_STAT **, DB_MPOOL_FSTAT ***, u_int32_t));
	int  (*memp_stat_print) __P((DB_ENV *, u_int32_t));
	int  (*memp_sync) __P((DB_ENV *, DB_LSN *));
	int  (*memp_trickle) __P((DB_ENV *, int, int *));

	void *rep_handle;		/* Replication handle and methods. */
	int  (*rep_elect) __P((DB_ENV *, int, int, int,
		u_int32_t, int *, u_int32_t));
	int  (*rep_flush) __P((DB_ENV *));
	int  (*rep_process_message) __P((DB_ENV *, DBT *, DBT *,
	    int *, DB_LSN *));
	int  (*rep_start) __P((DB_ENV *, DBT *, u_int32_t));
	int  (*rep_stat) __P((DB_ENV *, DB_REP_STAT **, u_int32_t));
	int  (*rep_stat_print) __P((DB_ENV *, u_int32_t));
	int  (*get_rep_limit) __P((DB_ENV *, u_int32_t *, u_int32_t *));
	int  (*set_rep_limit) __P((DB_ENV *, u_int32_t, u_int32_t));
	int  (*set_rep_request) __P((DB_ENV *, u_int32_t, u_int32_t));
	int  (*set_rep_transport) __P((DB_ENV *, int,
		int (*) (DB_ENV *, const DBT *, const DBT *, const DB_LSN *,
		int, u_int32_t)));

	void *tx_handle;		/* Txn handle and methods. */
	int  (*get_tx_max) __P((DB_ENV *, u_int32_t *));
	int  (*set_tx_max) __P((DB_ENV *, u_int32_t));
	int  (*get_tx_timestamp) __P((DB_ENV *, time_t *));
	int  (*set_tx_timestamp) __P((DB_ENV *, time_t *));
	int  (*txn_begin) __P((DB_ENV *, DB_TXN *, DB_TXN **, u_int32_t));
	int  (*txn_checkpoint) __P((DB_ENV *, u_int32_t, u_int32_t, u_int32_t));
	int  (*txn_recover) __P((DB_ENV *,
		DB_PREPLIST *, long, long *, u_int32_t));
	int  (*txn_stat) __P((DB_ENV *, DB_TXN_STAT **, u_int32_t));
	int  (*txn_stat_print) __P((DB_ENV *, u_int32_t));
	int  (*get_timeout) __P((DB_ENV *, db_timeout_t *, u_int32_t));
	int  (*set_timeout) __P((DB_ENV *, db_timeout_t, u_int32_t));

#define	DB_TEST_ELECTINIT	 1	/* after __rep_elect_init */
#define	DB_TEST_ELECTVOTE1	 2	/* after sending VOTE1 */
#define	DB_TEST_POSTDESTROY	 3	/* after destroy op */
#define	DB_TEST_POSTLOG		 4	/* after logging all pages */
#define	DB_TEST_POSTLOGMETA	 5	/* after logging meta in btree */
#define	DB_TEST_POSTOPEN	 6	/* after __os_open */
#define	DB_TEST_POSTSYNC	 7	/* after syncing the log */
#define	DB_TEST_PREDESTROY	 8	/* before destroy op */
#define	DB_TEST_PREOPEN		 9	/* before __os_open */
#define	DB_TEST_SUBDB_LOCKS	 10	/* subdb locking tests */
	int		 test_abort;	/* Abort value for testing. */
	int		 test_check;	/* Checkpoint value for testing. */
	int		 test_copy;	/* Copy value for testing. */

#define	DB_ENV_AUTO_COMMIT	0x0000001 /* DB_AUTO_COMMIT. */
#define	DB_ENV_CDB		0x0000002 /* DB_INIT_CDB. */
#define	DB_ENV_CDB_ALLDB	0x0000004 /* CDB environment wide locking. */
#define	DB_ENV_CREATE		0x0000008 /* DB_CREATE set. */
#define	DB_ENV_DBLOCAL		0x0000010 /* DB_ENV allocated for private DB. */
#define	DB_ENV_DIRECT_DB	0x0000020 /* DB_DIRECT_DB set. */
#define	DB_ENV_DIRECT_LOG	0x0000040 /* DB_DIRECT_LOG set. */
#define	DB_ENV_DSYNC_LOG	0x0000080 /* DB_DSYNC_LOG set. */
#define	DB_ENV_FATAL		0x0000100 /* Doing fatal recovery in env. */
#define	DB_ENV_LOCKDOWN		0x0000200 /* DB_LOCKDOWN set. */
#define	DB_ENV_LOG_AUTOREMOVE   0x0000400 /* DB_LOG_AUTOREMOVE set. */
#define	DB_ENV_LOG_INMEMORY     0x0000800 /* DB_LOG_INMEMORY set. */
#define	DB_ENV_NOLOCKING	0x0001000 /* DB_NOLOCKING set. */
#define	DB_ENV_NOMMAP		0x0002000 /* DB_NOMMAP set. */
#define	DB_ENV_NOPANIC		0x0004000 /* Okay if panic set. */
#define	DB_ENV_OPEN_CALLED	0x0008000 /* DB_ENV->open called. */
#define	DB_ENV_OVERWRITE	0x0010000 /* DB_OVERWRITE set. */
#define	DB_ENV_PRIVATE		0x0020000 /* DB_PRIVATE set. */
#define	DB_ENV_REGION_INIT	0x0040000 /* DB_REGION_INIT set. */
#define	DB_ENV_RPCCLIENT	0x0080000 /* DB_RPCCLIENT set. */
#define	DB_ENV_RPCCLIENT_GIVEN	0x0100000 /* User-supplied RPC client struct */
#define	DB_ENV_SYSTEM_MEM	0x0200000 /* DB_SYSTEM_MEM set. */
#define	DB_ENV_THREAD		0x0400000 /* DB_THREAD set. */
#define	DB_ENV_TIME_NOTGRANTED	0x0800000 /* DB_TIME_NOTGRANTED set. */
#define	DB_ENV_TXN_NOSYNC	0x1000000 /* DB_TXN_NOSYNC set. */
#define	DB_ENV_TXN_WRITE_NOSYNC	0x2000000 /* DB_TXN_WRITE_NOSYNC set. */
#define	DB_ENV_YIELDCPU		0x4000000 /* DB_YIELDCPU set. */
	u_int32_t flags;
};

#ifndef DB_DBM_HSEARCH
#define	DB_DBM_HSEARCH	0		/* No historic interfaces by default. */
#endif
#if DB_DBM_HSEARCH != 0
/*******************************************************
 * Dbm/Ndbm historic interfaces.
 *******************************************************/
typedef struct __db DBM;

#define	DBM_INSERT	0		/* Flags to dbm_store(). */
#define	DBM_REPLACE	1

/*
 * The DB support for ndbm(3) always appends this suffix to the
 * file name to avoid overwriting the user's original database.
 */
#define	DBM_SUFFIX	".db"

#if defined(_XPG4_2)
typedef struct {
	char *dptr;
	size_t dsize;
} datum;
#else
typedef struct {
	char *dptr;
	int dsize;
} datum;
#endif

/*
 * Translate NDBM calls into DB calls so that DB doesn't step on the
 * application's name space.
 */
#define	dbm_clearerr(a)		__db_ndbm_clearerr_rpmdb(a)
#define	dbm_close(a)		__db_ndbm_close_rpmdb(a)
#define	dbm_delete(a, b)	__db_ndbm_delete_rpmdb(a, b)
#define	dbm_dirfno(a)		__db_ndbm_dirfno_rpmdb(a)
#define	dbm_error(a)		__db_ndbm_error_rpmdb(a)
#define	dbm_fetch(a, b)		__db_ndbm_fetch_rpmdb(a, b)
#define	dbm_firstkey(a)		__db_ndbm_firstkey_rpmdb(a)
#define	dbm_nextkey(a)		__db_ndbm_nextkey_rpmdb(a)
#define	dbm_open(a, b, c)	__db_ndbm_open_rpmdb(a, b, c)
#define	dbm_pagfno(a)		__db_ndbm_pagfno_rpmdb(a)
#define	dbm_rdonly(a)		__db_ndbm_rdonly_rpmdb(a)
#define	dbm_store(a, b, c, d) \
	__db_ndbm_store_rpmdb(a, b, c, d)

/*
 * Translate DBM calls into DB calls so that DB doesn't step on the
 * application's name space.
 *
 * The global variables dbrdonly, dirf and pagf were not retained when 4BSD
 * replaced the dbm interface with ndbm, and are not supported here.
 */
#define	dbminit(a)	__db_dbm_init_rpmdb(a)
#define	dbmclose	__db_dbm_close_rpmdb
#if !defined(__cplusplus)
#define	delete(a)	__db_dbm_delete_rpmdb(a)
#endif
#define	fetch(a)	__db_dbm_fetch_rpmdb(a)
#define	firstkey	__db_dbm_firstkey_rpmdb
#define	nextkey(a)	__db_dbm_nextkey_rpmdb(a)
#define	store(a, b)	__db_dbm_store_rpmdb(a, b)

/*******************************************************
 * Hsearch historic interface.
 *******************************************************/
typedef enum {
	FIND, ENTER
} ACTION;

typedef struct entry {
	char *key;
	char *data;
} ENTRY;

#define	hcreate(a)	__db_hcreate_rpmdb(a)
#define	hdestroy	__db_hdestroy_rpmdb
#define	hsearch(a, b)	__db_hsearch_rpmdb(a, b)

#endif /* DB_DBM_HSEARCH */

#if defined(__cplusplus)
}
#endif
#endif /* !_DB_H_ */

/* DO NOT EDIT: automatically built by dist/s_include. */
#ifndef	_DB_EXT_DEF_IN_
#define	_DB_EXT_DEF_IN_

/*@-declundef -noparams -fcnuse@*/
#define	db_create db_create_rpmdb
#define	db_strerror db_strerror_rpmdb
#define	db_env_create db_env_create_rpmdb
#define	db_version db_version_rpmdb
#define	log_compare log_compare_rpmdb
#define	db_env_set_func_close db_env_set_func_close_rpmdb
#define	db_env_set_func_dirfree db_env_set_func_dirfree_rpmdb
#define	db_env_set_func_dirlist db_env_set_func_dirlist_rpmdb
#define	db_env_set_func_exists db_env_set_func_exists_rpmdb
#define	db_env_set_func_free db_env_set_func_free_rpmdb
#define	db_env_set_func_fsync db_env_set_func_fsync_rpmdb
#define	db_env_set_func_ftruncate db_env_set_func_ftruncate_rpmdb
#define	db_env_set_func_ioinfo db_env_set_func_ioinfo_rpmdb
#define	db_env_set_func_malloc db_env_set_func_malloc_rpmdb
#define	db_env_set_func_map db_env_set_func_map_rpmdb
#define	db_env_set_func_pread db_env_set_func_pread_rpmdb
#define	db_env_set_func_pwrite db_env_set_func_pwrite_rpmdb
#define	db_env_set_func_open db_env_set_func_open_rpmdb
#define	db_env_set_func_read db_env_set_func_read_rpmdb
#define	db_env_set_func_realloc db_env_set_func_realloc_rpmdb
#define	db_env_set_func_rename db_env_set_func_rename_rpmdb
#define	db_env_set_func_seek db_env_set_func_seek_rpmdb
#define	db_env_set_func_sleep db_env_set_func_sleep_rpmdb
#define	db_env_set_func_unlink db_env_set_func_unlink_rpmdb
#define	db_env_set_func_unmap db_env_set_func_unmap_rpmdb
#define	db_env_set_func_write db_env_set_func_write_rpmdb
#define	db_env_set_func_yield db_env_set_func_yield_rpmdb
#define	db_sequence_create db_sequence_create_rpmdb
#if DB_DBM_HSEARCH != 0
#define	__db_ndbm_clearerr __db_ndbm_clearerr_rpmdb
#define	__db_ndbm_close __db_ndbm_close_rpmdb
#define	__db_ndbm_delete __db_ndbm_delete_rpmdb
#define	__db_ndbm_dirfno __db_ndbm_dirfno_rpmdb
#define	__db_ndbm_error __db_ndbm_error_rpmdb
#define	__db_ndbm_fetch __db_ndbm_fetch_rpmdb
#define	__db_ndbm_firstkey __db_ndbm_firstkey_rpmdb
#define	__db_ndbm_nextkey __db_ndbm_nextkey_rpmdb
#define	__db_ndbm_open __db_ndbm_open_rpmdb
#define	__db_ndbm_pagfno __db_ndbm_pagfno_rpmdb
#define	__db_ndbm_rdonly __db_ndbm_rdonly_rpmdb
#define	__db_ndbm_store __db_ndbm_store_rpmdb
#define	__db_dbm_close __db_dbm_close_rpmdb
#define	__db_dbm_delete __db_dbm_delete_rpmdb
#define	__db_dbm_fetch __db_dbm_fetch_rpmdb
#define	__db_dbm_firstkey __db_dbm_firstkey_rpmdb
#define	__db_dbm_init __db_dbm_init_rpmdb
#define	__db_dbm_nextkey __db_dbm_nextkey_rpmdb
#define	__db_dbm_store __db_dbm_store_rpmdb
#endif
#if DB_DBM_HSEARCH != 0
#define	__db_hcreate __db_hcreate_rpmdb
#define	__db_hsearch __db_hsearch_rpmdb
#define	__db_hdestroy __db_hdestroy_rpmdb
#endif
#define db_xa_switch db_xa_switch_rpmdb

#endif /* !_DB_EXT_DEF_IN_ */

/* DO NOT EDIT: automatically built by dist/s_include. */
#ifndef	_DB_EXT_PROT_IN_
#define	_DB_EXT_PROT_IN_

#if defined(__cplusplus)
extern "C" {
#endif

int db_create __P((DB **, DB_ENV *, u_int32_t));
char *db_strerror __P((int));
int db_env_create __P((DB_ENV **, u_int32_t));
char *db_version __P((int *, int *, int *));
int log_compare __P((const DB_LSN *, const DB_LSN *));
int db_env_set_func_close __P((int (*)(int)));
int db_env_set_func_dirfree __P((void (*)(char **, int)));
int db_env_set_func_dirlist __P((int (*)(const char *, char ***, int *)));
int db_env_set_func_exists __P((int (*)(const char *, int *)));
int db_env_set_func_free __P((void (*)(void *)));
int db_env_set_func_fsync __P((int (*)(int)));
int db_env_set_func_ftruncate __P((int (*)(int, off_t)));
int db_env_set_func_ioinfo __P((int (*)(const char *, int, u_int32_t *, u_int32_t *, u_int32_t *)));
int db_env_set_func_malloc __P((void *(*)(size_t)));
int db_env_set_func_map __P((int (*)(char *, size_t, int, int, void **)));
int db_env_set_func_pread __P((ssize_t (*)(int, void *, size_t, off_t)));
int db_env_set_func_pwrite __P((ssize_t (*)(int, const void *, size_t, off_t)));
int db_env_set_func_open __P((int (*)(const char *, int, ...)));
int db_env_set_func_read __P((ssize_t (*)(int, void *, size_t)));
int db_env_set_func_realloc __P((void *(*)(void *, size_t)));
int db_env_set_func_rename __P((int (*)(const char *, const char *)));
int db_env_set_func_seek __P((int (*)(int, off_t, int)));
int db_env_set_func_sleep __P((int (*)(u_long, u_long)));
int db_env_set_func_unlink __P((int (*)(const char *)));
int db_env_set_func_unmap __P((int (*)(void *, size_t)));
int db_env_set_func_write __P((ssize_t (*)(int, const void *, size_t)));
int db_env_set_func_yield __P((int (*)(void)));
int db_sequence_create __P((DB_SEQUENCE **, DB *, u_int32_t));
#if DB_DBM_HSEARCH != 0
int	 __db_ndbm_clearerr __P((DBM *));
void	 __db_ndbm_close __P((DBM *));
int	 __db_ndbm_delete __P((DBM *, datum));
int	 __db_ndbm_dirfno __P((DBM *));
int	 __db_ndbm_error __P((DBM *));
datum __db_ndbm_fetch __P((DBM *, datum));
datum __db_ndbm_firstkey __P((DBM *));
datum __db_ndbm_nextkey __P((DBM *));
DBM	*__db_ndbm_open __P((const char *, int, int));
int	 __db_ndbm_pagfno __P((DBM *));
int	 __db_ndbm_rdonly __P((DBM *));
int	 __db_ndbm_store __P((DBM *, datum, datum, int));
int	 __db_dbm_close __P((void));
int	 __db_dbm_delete __P((datum));
datum __db_dbm_fetch __P((datum));
datum __db_dbm_firstkey __P((void));
int	 __db_dbm_init __P((char *));
datum __db_dbm_nextkey __P((datum));
int	 __db_dbm_store __P((datum, datum));
#endif
#if DB_DBM_HSEARCH != 0
int __db_hcreate __P((size_t));
ENTRY *__db_hsearch __P((ENTRY, ACTION));
void __db_hdestroy __P((void));
#endif

#if defined(__cplusplus)
}
#endif
#endif /* !_DB_EXT_PROT_IN_ */

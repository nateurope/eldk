/*
 * MUSCLE SmartCard Development ( http://www.linuxnet.com )
 *
 * Copyright (C) 1999-2004
 *  David Corcoran <corcoran@linuxnet.com>
 *  Ludovic Rousseau <ludovic.rousseau@free.fr>
 *
 * $Id: pcsclite.h.in 2228 2006-11-21 10:44:04Z rousseau $
 */

/**
 * @file
 * @brief This keeps a list of defines for pcsc-lite.
 */

#ifndef __pcsclite_h__
#define __pcsclite_h__

#include <wintypes.h>

#ifdef __cplusplus
extern "C"
{
#endif

#ifdef WIN32
#include <winscard.h>
#else
typedef long SCARDCONTEXT;
typedef SCARDCONTEXT *PSCARDCONTEXT;
typedef SCARDCONTEXT *LPSCARDCONTEXT;
typedef long SCARDHANDLE;
typedef SCARDHANDLE *PSCARDHANDLE;
typedef SCARDHANDLE *LPSCARDHANDLE;

#define MAX_ATR_SIZE			33	/**< Maximum ATR size */

typedef struct
{
	const char *szReader;
	void *pvUserData;
	unsigned long dwCurrentState;
	unsigned long dwEventState;
	unsigned long cbAtr;
	unsigned char rgbAtr[MAX_ATR_SIZE];
}
SCARD_READERSTATE_A;

typedef SCARD_READERSTATE_A SCARD_READERSTATE, *PSCARD_READERSTATE_A,
	*LPSCARD_READERSTATE_A;

typedef struct _SCARD_IO_REQUEST
{
	unsigned long dwProtocol;	/* Protocol identifier */
	unsigned long cbPciLength;	/* Protocol Control Inf Length */
}
SCARD_IO_REQUEST, *PSCARD_IO_REQUEST, *LPSCARD_IO_REQUEST;

typedef const SCARD_IO_REQUEST *LPCSCARD_IO_REQUEST;

extern SCARD_IO_REQUEST g_rgSCardT0Pci, g_rgSCardT1Pci,
	g_rgSCardRawPci;

#define SCARD_PCI_T0	(&g_rgSCardT0Pci)
#define SCARD_PCI_T1	(&g_rgSCardT1Pci)
#define SCARD_PCI_RAW	(&g_rgSCardRawPci)

#define SCARD_S_SUCCESS			0x00000000
#define SCARD_F_INTERNAL_ERROR		0x80100001 /**< An internal consistency check failed. */
#define SCARD_E_CANCELLED		0x80100002 /**< The action was cancelled by an SCardCancel request. */
#define SCARD_E_INVALID_HANDLE		0x80100003 /**< The supplied handle was invalid. */
#define SCARD_E_INVALID_PARAMETER	0x80100004 /**< One or more of the supplied parameters could not be properly interpreted. */
#define SCARD_E_INVALID_TARGET		0x80100005 /**< Registry startup information is missing or invalid. */
#define SCARD_E_NO_MEMORY		0x80100006 /**< Not enough memory available to complete this command. */
#define SCARD_F_WAITED_TOO_LONG		0x80100007 /**< An internal consistency timer has expired. */
#define SCARD_E_INSUFFICIENT_BUFFER	0x80100008 /**< The data buffer to receive returned data is too small for the returned data. */
#define SCARD_E_UNKNOWN_READER		0x80100009 /**< The specified reader name is not recognized. */
#define SCARD_E_TIMEOUT			0x8010000A /**< The user-specified timeout value has expired. */
#define SCARD_E_SHARING_VIOLATION	0x8010000B /**< The smart card cannot be accessed because of other connections outstanding. */
#define SCARD_E_NO_SMARTCARD		0x8010000C /**< The operation requires a Smart Card, but no Smart Card is currently in the device. */
#define SCARD_E_UNKNOWN_CARD		0x8010000D /**< The specified smart card name is not recognized. */
#define SCARD_E_CANT_DISPOSE		0x8010000E /**< The system could not dispose of the media in the requested manner. */
#define SCARD_E_PROTO_MISMATCH		0x8010000F /**< The requested protocols are incompatible with the protocol currently in use with the smart card. */
#define SCARD_E_NOT_READY		0x80100010 /**< The reader or smart card is not ready to accept commands. */
#define SCARD_E_INVALID_VALUE		0x80100011 /**< One or more of the supplied parameters values could not be properly interpreted. */
#define SCARD_E_SYSTEM_CANCELLED	0x80100012 /**< The action was cancelled by the system, presumably to log off or shut down. */
#define SCARD_F_COMM_ERROR		0x80100013 /**< An internal communications error has been detected. */
#define SCARD_F_UNKNOWN_ERROR		0x80100014 /**< An internal error has been detected, but the source is unknown. */
#define SCARD_E_INVALID_ATR		0x80100015 /**< An ATR obtained from the registry is not a valid ATR string. */
#define SCARD_E_NOT_TRANSACTED		0x80100016 /**< An attempt was made to end a non-existent transaction. */
#define SCARD_E_READER_UNAVAILABLE	0x80100017 /**< The specified reader is not currently available for use. */

#define SCARD_W_UNSUPPORTED_CARD	0x80100065 /**< The reader cannot communicate with the card, due to ATR string configuration conflicts. */
#define SCARD_W_UNRESPONSIVE_CARD	0x80100066 /**< The smart card is not responding to a reset. */
#define SCARD_W_UNPOWERED_CARD		0x80100067 /**< Power has been removed from the smart card, so that further communication is not possible. */
#define SCARD_W_RESET_CARD		0x80100068 /**< The smart card has been reset, so any shared state information is invalid. */
#define SCARD_W_REMOVED_CARD		0x80100069 /**< The smart card has been removed, so further communication is not possible. */

#define SCARD_E_PCI_TOO_SMALL		0x80100019 /**< The PCI Receive buffer was too small. */
#define SCARD_E_READER_UNSUPPORTED	0x8010001A /**< The reader driver does not meet minimal requirements for support. */
#define SCARD_E_DUPLICATE_READER	0x8010001B /**< The reader driver did not produce a unique reader name. */
#define SCARD_E_CARD_UNSUPPORTED	0x8010001C /**< The smart card does not meet minimal requirements for support. */
#define SCARD_E_NO_SERVICE		0x8010001D /**< The Smart card resource manager is not running. */
#define SCARD_E_SERVICE_STOPPED		0x8010001E /**< The Smart card resource manager has shut down. */
#define SCARD_E_NO_READERS_AVAILABLE    0x8010002E /**< Cannot find a smart card reader. */

#define SCARD_SCOPE_USER		0x0000	/**< Scope in user space */
#define SCARD_SCOPE_TERMINAL		0x0001	/**< Scope in terminal */
#define SCARD_SCOPE_SYSTEM		0x0002	/**< Scope in system */

#define SCARD_PROTOCOL_UNSET		0x0000	/**< protocol not set */
#define SCARD_PROTOCOL_T0		0x0001	/**< T=0 active protocol. */
#define SCARD_PROTOCOL_T1		0x0002	/**< T=1 active protocol. */
#define SCARD_PROTOCOL_RAW		0x0004	/**< Raw active protocol. */
#define SCARD_PROTOCOL_T15		0x0008	/**< T=15 protocol. */

#define SCARD_PROTOCOL_ANY		(SCARD_PROTOCOL_T0|SCARD_PROTOCOL_T1)	/**< IFD determines prot. */

#define SCARD_SHARE_EXCLUSIVE		0x0001	/**< Exclusive mode only */
#define SCARD_SHARE_SHARED		0x0002	/**< Shared mode only */
#define SCARD_SHARE_DIRECT		0x0003	/**< Raw mode only */

#define SCARD_LEAVE_CARD		0x0000	/**< Do nothing on close */
#define SCARD_RESET_CARD		0x0001	/**< Reset on close */
#define SCARD_UNPOWER_CARD		0x0002	/**< Power down on close */
#define SCARD_EJECT_CARD		0x0003	/**< Eject on close */

#define SCARD_UNKNOWN			0x0001	/**< Unknown state */
#define SCARD_ABSENT			0x0002	/**< Card is absent */
#define SCARD_PRESENT			0x0004	/**< Card is present */
#define SCARD_SWALLOWED			0x0008	/**< Card not powered */
#define SCARD_POWERED			0x0010	/**< Card is powered */
#define SCARD_NEGOTIABLE		0x0020	/**< Ready for PTS */
#define SCARD_SPECIFIC			0x0040	/**< PTS has been set */

#define SCARD_STATE_UNAWARE		0x0000	/**< App wants status */
#define SCARD_STATE_IGNORE		0x0001	/**< Ignore this reader */
#define SCARD_STATE_CHANGED		0x0002	/**< State has changed */
#define SCARD_STATE_UNKNOWN		0x0004	/**< Reader unknown */
#define SCARD_STATE_UNAVAILABLE		0x0008	/**< Status unavailable */
#define SCARD_STATE_EMPTY		0x0010	/**< Card removed */
#define SCARD_STATE_PRESENT		0x0020	/**< Card inserted */
#define SCARD_STATE_ATRMATCH		0x0040	/**< ATR matches card */
#define SCARD_STATE_EXCLUSIVE		0x0080	/**< Exclusive Mode */
#define SCARD_STATE_INUSE		0x0100	/**< Shared Mode */
#define SCARD_STATE_MUTE		0x0200	/**< Unresponsive card */
#define SCARD_STATE_UNPOWERED		0x0400	/**< Unpowered card */

#endif

/** PC/SC Lite specific extensions */
#define SCARD_W_INSERTED_CARD		0x8010006A
#define SCARD_E_UNSUPPORTED_FEATURE	0x8010001F

#define SCARD_SCOPE_GLOBAL		0x0003	/**< Scope is global */

#define SCARD_RESET			0x0001	/**< Card was reset */
#define SCARD_INSERTED			0x0002	/**< Card was inserted */
#define SCARD_REMOVED			0x0004	/**< Card was removed */

#define BLOCK_STATUS_RESUME		0x00FF	/**< Normal resume */
#define BLOCK_STATUS_BLOCKING		0x00FA	/**< Function is blocking */

#define PCSCLITE_CONFIG_DIR		"/etc"

#ifndef USE_IPCDIR
#define PCSCLITE_IPC_DIR		"/var/run"
#else
#define PCSCLITE_IPC_DIR		USE_IPCDIR
#endif

#define PCSCLITE_READER_CONFIG		PCSCLITE_CONFIG_DIR "/reader.conf"
#define PCSCLITE_PUBSHM_FILE		PCSCLITE_IPC_DIR "/pcscd.pub"
#define PCSCLITE_CSOCK_NAME		PCSCLITE_IPC_DIR "/pcscd.comm"

#define PCSCLITE_SVC_IDENTITY		0x01030000	/**< Service ID */

#ifndef INFINITE
#define INFINITE			0xFFFFFFFF	/**< Infinite timeout */
#endif
#define PCSCLITE_INFINITE_TIMEOUT	4320000		/**< 50 day infinite t/o */

#define PCSCLITE_VERSION_NUMBER		"1.3.3"	/**< Current version */
#define PCSCLITE_CLIENT_ATTEMPTS	120		/**< Attempts to reach sv */
#define PCSCLITE_MCLIENT_ATTEMPTS	20		/**< Attempts to reach sv */
#define PCSCLITE_STATUS_POLL_RATE	400000		/**< Status polling rate */
#define PCSCLITE_MSG_KEY_LEN		16		/**< App ID key length */
#define PCSCLITE_RW_ATTEMPTS		100		/**< Attempts to rd/wrt */

/** Maximum applications */
#define PCSCLITE_MAX_APPLICATIONS			16
/** Maximum contexts by application */
#define PCSCLITE_MAX_APPLICATION_CONTEXTS		16
/** Maximum of applications contexts that pcscd can accept */
#define PCSCLITE_MAX_APPLICATIONS_CONTEXTS \
	PCSCLITE_MAX_APPLICATIONS * PCSCLITE_MAX_APPLICATION_CONTEXTS
/** Maximum channels on a reader context */
#define PCSCLITE_MAX_READER_CONTEXT_CHANNELS		16
/** Maximum channels on an application context */
#define PCSCLITE_MAX_APPLICATION_CONTEXT_CHANNELS	16
/** Maximum readers context (a slot is count as a reader) */
#define PCSCLITE_MAX_READERS_CONTEXTS			16

/* PCSCLITE_MAX_READERS is deprecated
 * use PCSCLITE_MAX_READERS_CONTEXTS instead */
/* extern int PCSCLITE_MAX_READERS __attribute__ ((deprecated)); */

#define PCSCLITE_MAX_THREADS		16	/**< Stat change threads */
#define PCSCLITE_STATUS_WAIT		200000	/**< Status Change Sleep */
#define PCSCLITE_TRANSACTION_TIMEOUT	40	/**< Transaction timeout */
#define MAX_READERNAME			52
#define MAX_LIBNAME			100
#define MAX_DEVICENAME		255

#ifndef SCARD_ATR_LENGTH
#define SCARD_ATR_LENGTH		MAX_ATR_SIZE	/**< Maximum ATR size */
#endif

/*
 * The message and buffer sizes must be multiples of 16.
 * The max message size must be at least large enough
 * to accomodate the transmit_struct
 */
#define PCSCLITE_MAX_MESSAGE_SIZE	2048	/**< Transport msg len */
#define MAX_BUFFER_SIZE			264	/**< Maximum Tx/Rx Buffer for short APDU */
#define MAX_BUFFER_SIZE_EXTENDED	(4 + 3 + (1<<16) + 3)	/**< enhanced (64K + APDU + Lc + Le) Tx/Rx Buffer */
#define PCSCLITE_SERVER_ATTEMPTS	5	/**< Attempts to reach cl */

/*
 * Gets a stringified error response
 */
char *pcsc_stringify_error(long);

#ifdef __cplusplus
}
#endif

#endif

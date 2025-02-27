// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_net_protocol_ftp_FTPConnection__
#define __gnu_java_net_protocol_ftp_FTPConnection__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace net
    {
      namespace ssl
      {
        class TrustManager;
      }
    }
  }
  namespace gnu
  {
    namespace java
    {
      namespace net
      {
        namespace protocol
        {
          namespace ftp
          {
            class FTPConnection;
            class FTPResponse;
            class DTP;
          }
        }
        class CRLFOutputStream;
        class LineInputStream;
      }
    }
  }
  namespace java
  {
    namespace net
    {
      class Socket;
    }
  }
}

class gnu::java::net::protocol::ftp::FTPConnection : public ::java::lang::Object
{
public:
  FTPConnection (::java::lang::String *);
  FTPConnection (::java::lang::String *, jint);
  FTPConnection (::java::lang::String *, jint, jint, jint, jboolean);
  virtual jboolean authenticate (::java::lang::String *, ::java::lang::String *);
  virtual jboolean starttls (jboolean);
  virtual jboolean starttls (jboolean, ::javax::net::ssl::TrustManager *);
  virtual jboolean changeWorkingDirectory (::java::lang::String *);
  virtual jboolean changeToParentDirectory ();
  virtual void reinitialize ();
  virtual void logout ();
public:  // actually protected
  virtual void initialiseDTP ();
public:
  virtual void setPassive (jboolean);
  virtual jint getRepresentationType () { return representationType; }
  virtual void setRepresentationType (jint);
  virtual jint getFileStructure () { return fileStructure; }
  virtual void setFileStructure (jint);
  virtual jint getTransferMode () { return transferMode; }
  virtual void setTransferMode (jint);
  virtual ::java::io::InputStream *retrieve (::java::lang::String *);
  virtual ::java::io::OutputStream *store (::java::lang::String *);
  virtual ::java::io::OutputStream *append (::java::lang::String *);
  virtual void allocate (jlong);
  virtual jboolean rename (::java::lang::String *, ::java::lang::String *);
  virtual jboolean abort ();
  virtual jboolean delete$ (::java::lang::String *);
  virtual jboolean removeDirectory (::java::lang::String *);
  virtual jboolean makeDirectory (::java::lang::String *);
  virtual ::java::lang::String *getWorkingDirectory ();
  virtual ::java::io::InputStream *list (::java::lang::String *);
  virtual ::java::util::List *nameList (::java::lang::String *);
  virtual ::java::lang::String *system ();
  virtual void noop ();
public:  // actually protected
  virtual void send (::java::lang::String *);
  virtual ::gnu::java::net::protocol::ftp::FTPResponse *getResponse ();
  virtual ::gnu::java::net::protocol::ftp::FTPResponse *readResponse ();
public: // actually package-private
  static jint parseCode (::java::lang::String *);
public:
  static const jint FTP_PORT = 21L;
  static const jint FTP_DATA_PORT = 20L;
public:  // actually protected
  static ::java::lang::String *USER;
  static ::java::lang::String *PASS;
  static ::java::lang::String *ACCT;
  static ::java::lang::String *CWD;
  static ::java::lang::String *CDUP;
  static ::java::lang::String *SMNT;
  static ::java::lang::String *REIN;
  static ::java::lang::String *QUIT;
  static ::java::lang::String *PORT;
  static ::java::lang::String *PASV;
  static ::java::lang::String *TYPE;
  static ::java::lang::String *STRU;
  static ::java::lang::String *MODE;
  static ::java::lang::String *RETR;
  static ::java::lang::String *STOR;
  static ::java::lang::String *STOU;
  static ::java::lang::String *APPE;
  static ::java::lang::String *ALLO;
  static ::java::lang::String *REST;
  static ::java::lang::String *RNFR;
  static ::java::lang::String *RNTO;
  static ::java::lang::String *ABOR;
  static ::java::lang::String *DELE;
  static ::java::lang::String *RMD;
  static ::java::lang::String *MKD;
  static ::java::lang::String *PWD;
  static ::java::lang::String *LIST;
  static ::java::lang::String *NLST;
  static ::java::lang::String *SITE;
  static ::java::lang::String *SYST;
  static ::java::lang::String *STAT;
  static ::java::lang::String *HELP;
  static ::java::lang::String *NOOP;
  static ::java::lang::String *AUTH;
  static ::java::lang::String *PBSZ;
  static ::java::lang::String *PROT;
  static ::java::lang::String *CCC;
  static ::java::lang::String *TLS;
public:
  static const jint TYPE_ASCII = 1L;
  static const jint TYPE_EBCDIC = 2L;
  static const jint TYPE_BINARY = 3L;
  static const jint STRUCTURE_FILE = 1L;
  static const jint STRUCTURE_RECORD = 2L;
  static const jint STRUCTURE_PAGE = 3L;
  static const jint MODE_STREAM = 1L;
  static const jint MODE_BLOCK = 2L;
  static const jint MODE_COMPRESSED = 3L;
private:
  static ::java::lang::String *US_ASCII;
public:  // actually protected
  ::java::net::Socket * __attribute__((aligned(__alignof__( ::java::lang::Object )))) socket;
  ::gnu::java::net::LineInputStream *in;
  ::gnu::java::net::CRLFOutputStream *out;
  jint connectionTimeout;
  jint timeout;
  jboolean debug;
  ::gnu::java::net::protocol::ftp::DTP *dtp;
  jint representationType;
  jint fileStructure;
  jint transferMode;
  jboolean passive;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_net_protocol_ftp_FTPConnection__ */

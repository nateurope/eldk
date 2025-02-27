// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_net_protocol_ftp_DTP__
#define __gnu_java_net_protocol_ftp_DTP__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
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
            class DTP;
          }
        }
      }
    }
  }
}

class gnu::java::net::protocol::ftp::DTP : public ::java::lang::Object
{
public:
  virtual ::java::io::InputStream *getInputStream () = 0;
  virtual ::java::io::OutputStream *getOutputStream () = 0;
  virtual void setTransferMode (jint) = 0;
  virtual void complete () = 0;
  virtual jboolean abort () = 0;
  virtual void transferComplete () = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __gnu_java_net_protocol_ftp_DTP__ */

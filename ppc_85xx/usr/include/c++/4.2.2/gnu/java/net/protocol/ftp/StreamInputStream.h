// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_net_protocol_ftp_StreamInputStream__
#define __gnu_java_net_protocol_ftp_StreamInputStream__

#pragma interface

#include <gnu/java/net/protocol/ftp/DTPInputStream.h>
#include <gcj/array.h>

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
            class StreamInputStream;
            class DTP;
          }
        }
      }
    }
  }
}

class gnu::java::net::protocol::ftp::StreamInputStream : public ::gnu::java::net::protocol::ftp::DTPInputStream
{
public: // actually package-private
  StreamInputStream (::gnu::java::net::protocol::ftp::DTP *, ::java::io::InputStream *);
public:
  virtual jint read ();
  virtual jint read (jbyteArray);
  virtual jint read (jbyteArray, jint, jint);

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_net_protocol_ftp_StreamInputStream__ */

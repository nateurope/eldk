// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_net_ssl_HandshakeCompletedListener__
#define __javax_net_ssl_HandshakeCompletedListener__

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
        class HandshakeCompletedListener;
        class HandshakeCompletedEvent;
      }
    }
  }
}

class javax::net::ssl::HandshakeCompletedListener : public ::java::lang::Object
{
public:
  virtual void handshakeCompleted (::javax::net::ssl::HandshakeCompletedEvent *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __javax_net_ssl_HandshakeCompletedListener__ */

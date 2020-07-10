// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_net_ssl_SSLServerSocketFactory__
#define __javax_net_ssl_SSLServerSocketFactory__

#pragma interface

#include <javax/net/ServerSocketFactory.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace net
    {
      class ServerSocketFactory;
      namespace ssl
      {
        class SSLServerSocketFactory;
        class SSLContext;
      }
    }
  }
}

class javax::net::ssl::SSLServerSocketFactory : public ::javax::net::ServerSocketFactory
{
public:  // actually protected
  SSLServerSocketFactory ();
public:
  static ::javax::net::ServerSocketFactory *getDefault ();
  virtual JArray< ::java::lang::String *> *getDefaultCipherSuites () = 0;
  virtual JArray< ::java::lang::String *> *getSupportedCipherSuites () = 0;
private:
  static ::javax::net::ssl::SSLContext *context;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_net_ssl_SSLServerSocketFactory__ */

// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_net_ssl_SSLSessionContext__
#define __javax_net_ssl_SSLSessionContext__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace net
    {
      namespace ssl
      {
        class SSLSessionContext;
        class SSLSession;
      }
    }
  }
}

class javax::net::ssl::SSLSessionContext : public ::java::lang::Object
{
public:
  virtual ::java::util::Enumeration *getIds () = 0;
  virtual ::javax::net::ssl::SSLSession *getSession (jbyteArray) = 0;
  virtual jint getSessionCacheSize () = 0;
  virtual jint getSessionTimeout () = 0;
  virtual void setSessionCacheSize (jint) = 0;
  virtual void setSessionTimeout (jint) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __javax_net_ssl_SSLSessionContext__ */

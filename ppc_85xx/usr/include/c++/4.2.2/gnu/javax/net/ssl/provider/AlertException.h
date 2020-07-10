// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_net_ssl_provider_AlertException__
#define __gnu_javax_net_ssl_provider_AlertException__

#pragma interface

#include <javax/net/ssl/SSLException.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace net
      {
        namespace ssl
        {
          namespace provider
          {
            class AlertException;
            class Alert;
          }
        }
      }
    }
  }
}

class gnu::javax::net::ssl::provider::AlertException : public ::javax::net::ssl::SSLException
{
public: // actually package-private
  AlertException (::gnu::javax::net::ssl::provider::Alert *, jboolean);
public:
  virtual ::java::lang::String *getMessage ();
  virtual ::gnu::javax::net::ssl::provider::Alert *getAlert () { return alert; }
private:
  ::gnu::javax::net::ssl::provider::Alert * __attribute__((aligned(__alignof__( ::javax::net::ssl::SSLException )))) alert;
  jboolean isLocal;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_net_ssl_provider_AlertException__ */

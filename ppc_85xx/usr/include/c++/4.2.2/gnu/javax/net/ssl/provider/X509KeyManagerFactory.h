// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_net_ssl_provider_X509KeyManagerFactory__
#define __gnu_javax_net_ssl_provider_X509KeyManagerFactory__

#pragma interface

#include <javax/net/ssl/KeyManagerFactorySpi.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace security
    {
      namespace cert
      {
        class X509Certificate;
        class Certificate;
      }
      class KeyStore;
    }
  }
  namespace javax
  {
    namespace net
    {
      namespace ssl
      {
        class ManagerFactoryParameters;
        class KeyManager;
      }
    }
  }
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
            class X509KeyManagerFactory;
            class X509KeyManagerFactory$Manager;
          }
        }
      }
    }
  }
}

class gnu::javax::net::ssl::provider::X509KeyManagerFactory : public ::javax::net::ssl::KeyManagerFactorySpi
{
public:
  X509KeyManagerFactory ();
public:  // actually protected
  virtual JArray< ::javax::net::ssl::KeyManager *> *engineGetKeyManagers ();
  virtual void engineInit (::javax::net::ssl::ManagerFactoryParameters *);
  virtual void engineInit (::java::security::KeyStore *, jcharArray);
private:
  static JArray< ::java::security::cert::X509Certificate *> *toX509Chain (JArray< ::java::security::cert::Certificate *> *);
  ::gnu::javax::net::ssl::provider::X509KeyManagerFactory$Manager * __attribute__((aligned(__alignof__( ::javax::net::ssl::KeyManagerFactorySpi )))) current;

  friend class gnu_javax_net_ssl_provider_X509KeyManagerFactory$Manager;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_net_ssl_provider_X509KeyManagerFactory__ */
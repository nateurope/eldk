// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_net_ssl_TrustManagerFactory__
#define __javax_net_ssl_TrustManagerFactory__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace security
    {
      class KeyStore;
      class Provider;
    }
  }
  namespace javax
  {
    namespace net
    {
      namespace ssl
      {
        class ManagerFactoryParameters;
        class TrustManager;
        class TrustManagerFactory;
        class TrustManagerFactorySpi;
      }
    }
  }
}

class javax::net::ssl::TrustManagerFactory : public ::java::lang::Object
{
public:  // actually protected
  TrustManagerFactory (::javax::net::ssl::TrustManagerFactorySpi *, ::java::security::Provider *, ::java::lang::String *);
public:
  static ::javax::net::ssl::TrustManagerFactory *getInstance (::java::lang::String *);
  static ::javax::net::ssl::TrustManagerFactory *getInstance (::java::lang::String *, ::java::lang::String *);
  static ::javax::net::ssl::TrustManagerFactory *getInstance (::java::lang::String *, ::java::security::Provider *);
  static ::java::lang::String *getDefaultAlgorithm ();
  virtual ::java::lang::String *getAlgorithm () { return algorithm; }
  virtual ::java::security::Provider *getProvider () { return provider; }
  virtual JArray< ::javax::net::ssl::TrustManager *> *getTrustManagers ();
  virtual void init (::javax::net::ssl::ManagerFactoryParameters *);
  virtual void init (::java::security::KeyStore *);
private:
  static ::java::lang::String *TRUST_MANAGER_FACTORY;
  static ::java::lang::String *DEFAULT_ALGORITHM;
  ::javax::net::ssl::TrustManagerFactorySpi * __attribute__((aligned(__alignof__( ::java::lang::Object )))) tmfSpi;
  ::java::security::Provider *provider;
  ::java::lang::String *algorithm;

  friend class javax_net_ssl_TrustManagerFactory$1;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_net_ssl_TrustManagerFactory__ */

// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_net_ssl_TrustManagerFactorySpi__
#define __javax_net_ssl_TrustManagerFactorySpi__

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
    }
  }
  namespace javax
  {
    namespace net
    {
      namespace ssl
      {
        class TrustManagerFactorySpi;
        class ManagerFactoryParameters;
        class TrustManager;
      }
    }
  }
}

class javax::net::ssl::TrustManagerFactorySpi : public ::java::lang::Object
{
public:
  TrustManagerFactorySpi ();
public:  // actually protected
  virtual JArray< ::javax::net::ssl::TrustManager *> *engineGetTrustManagers () = 0;
  virtual void engineInit (::javax::net::ssl::ManagerFactoryParameters *) = 0;
  virtual void engineInit (::java::security::KeyStore *) = 0;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_net_ssl_TrustManagerFactorySpi__ */
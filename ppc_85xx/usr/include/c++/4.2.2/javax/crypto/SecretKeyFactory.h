// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_crypto_SecretKeyFactory__
#define __javax_crypto_SecretKeyFactory__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace security
    {
      namespace spec
      {
        class KeySpec;
      }
      class Provider;
    }
  }
  namespace javax
  {
    namespace crypto
    {
      class SecretKey;
      class SecretKeyFactory;
      class SecretKeyFactorySpi;
    }
  }
}

class javax::crypto::SecretKeyFactory : public ::java::lang::Object
{
public:  // actually protected
  SecretKeyFactory (::javax::crypto::SecretKeyFactorySpi *, ::java::security::Provider *, ::java::lang::String *);
public:
  static ::javax::crypto::SecretKeyFactory *getInstance (::java::lang::String *);
  static ::javax::crypto::SecretKeyFactory *getInstance (::java::lang::String *, ::java::lang::String *);
  static ::javax::crypto::SecretKeyFactory *getInstance (::java::lang::String *, ::java::security::Provider *);
  virtual ::javax::crypto::SecretKey *generateSecret (::java::security::spec::KeySpec *);
  virtual ::java::lang::String *getAlgorithm () { return algorithm; }
  virtual ::java::security::spec::KeySpec *getKeySpec (::javax::crypto::SecretKey *, ::java::lang::Class *);
  virtual ::java::security::Provider *getProvider () { return provider; }
  virtual ::javax::crypto::SecretKey *translateKey (::javax::crypto::SecretKey *);
private:
  static ::java::lang::String *SERVICE;
  ::javax::crypto::SecretKeyFactorySpi * __attribute__((aligned(__alignof__( ::java::lang::Object )))) skfSpi;
  ::java::security::Provider *provider;
  ::java::lang::String *algorithm;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_crypto_SecretKeyFactory__ */

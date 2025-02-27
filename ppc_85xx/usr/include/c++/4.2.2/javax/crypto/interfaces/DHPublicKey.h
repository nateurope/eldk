// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_crypto_interfaces_DHPublicKey__
#define __javax_crypto_interfaces_DHPublicKey__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace crypto
    {
      namespace interfaces
      {
        class DHPublicKey;
      }
    }
  }
  namespace java
  {
    namespace math
    {
      class BigInteger;
    }
  }
}

class javax::crypto::interfaces::DHPublicKey : public ::java::lang::Object
{
public:
  virtual ::java::math::BigInteger *getY () = 0;
  static const jlong serialVersionUID = -6628103563352519193LL;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __javax_crypto_interfaces_DHPublicKey__ */

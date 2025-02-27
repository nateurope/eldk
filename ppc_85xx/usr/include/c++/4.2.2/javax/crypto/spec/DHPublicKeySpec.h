// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_crypto_spec_DHPublicKeySpec__
#define __javax_crypto_spec_DHPublicKeySpec__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace crypto
    {
      namespace spec
      {
        class DHPublicKeySpec;
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

class javax::crypto::spec::DHPublicKeySpec : public ::java::lang::Object
{
public:
  DHPublicKeySpec (::java::math::BigInteger *, ::java::math::BigInteger *, ::java::math::BigInteger *);
  virtual ::java::math::BigInteger *getG () { return g; }
  virtual ::java::math::BigInteger *getP () { return p; }
  virtual ::java::math::BigInteger *getY () { return y; }
private:
  ::java::math::BigInteger * __attribute__((aligned(__alignof__( ::java::lang::Object )))) g;
  ::java::math::BigInteger *p;
  ::java::math::BigInteger *y;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_crypto_spec_DHPublicKeySpec__ */

// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_security_interfaces_RSAMultiPrimePrivateCrtKey__
#define __java_security_interfaces_RSAMultiPrimePrivateCrtKey__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace security
    {
      namespace interfaces
      {
        class RSAMultiPrimePrivateCrtKey;
      }
      namespace spec
      {
        class RSAOtherPrimeInfo;
      }
    }
    namespace math
    {
      class BigInteger;
    }
  }
}

class java::security::interfaces::RSAMultiPrimePrivateCrtKey : public ::java::lang::Object
{
public:
  virtual ::java::math::BigInteger *getPublicExponent () = 0;
  virtual ::java::math::BigInteger *getPrimeP () = 0;
  virtual ::java::math::BigInteger *getPrimeQ () = 0;
  virtual ::java::math::BigInteger *getPrimeExponentP () = 0;
  virtual ::java::math::BigInteger *getPrimeExponentQ () = 0;
  virtual ::java::math::BigInteger *getCrtCoefficient () = 0;
  virtual JArray< ::java::security::spec::RSAOtherPrimeInfo *> *getOtherPrimeInfo () = 0;
  static const jlong serialVersionUID = 618058533534628008LL;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_security_interfaces_RSAMultiPrimePrivateCrtKey__ */

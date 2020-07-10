// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_security_key_rsa_GnuRSAPrivateKey__
#define __gnu_java_security_key_rsa_GnuRSAPrivateKey__

#pragma interface

#include <gnu/java/security/key/rsa/GnuRSAKey.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace security
      {
        namespace key
        {
          namespace rsa
          {
            class GnuRSAPrivateKey;
          }
        }
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

class gnu::java::security::key::rsa::GnuRSAPrivateKey : public ::gnu::java::security::key::rsa::GnuRSAKey
{
public:
  GnuRSAPrivateKey (::java::math::BigInteger *, ::java::math::BigInteger *, ::java::math::BigInteger *, ::java::math::BigInteger *);
  GnuRSAPrivateKey (jint, ::java::math::BigInteger *, ::java::math::BigInteger *, ::java::math::BigInteger *, ::java::math::BigInteger *);
  GnuRSAPrivateKey (jint, ::java::math::BigInteger *, ::java::math::BigInteger *, ::java::math::BigInteger *, ::java::math::BigInteger *, ::java::math::BigInteger *, ::java::math::BigInteger *, ::java::math::BigInteger *, ::java::math::BigInteger *);
  static ::gnu::java::security::key::rsa::GnuRSAPrivateKey *valueOf (jbyteArray);
  virtual ::java::math::BigInteger *getPrimeP () { return p; }
  virtual ::java::math::BigInteger *getPrimeQ () { return q; }
  virtual ::java::math::BigInteger *getPrimeExponentP () { return dP; }
  virtual ::java::math::BigInteger *getPrimeExponentQ () { return dQ; }
  virtual ::java::math::BigInteger *getCrtCoefficient () { return qInv; }
  virtual ::java::math::BigInteger *getPrivateExponent () { return d; }
  virtual jbyteArray getEncoded (jint);
  virtual jboolean equals (::java::lang::Object *);
  virtual ::java::lang::String *toString ();
private:
  ::java::math::BigInteger * __attribute__((aligned(__alignof__( ::gnu::java::security::key::rsa::GnuRSAKey )))) p;
  ::java::math::BigInteger *q;
  ::java::math::BigInteger *d;
  ::java::math::BigInteger *dP;
  ::java::math::BigInteger *dQ;
  ::java::math::BigInteger *qInv;
  ::java::lang::String *str;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_security_key_rsa_GnuRSAPrivateKey__ */

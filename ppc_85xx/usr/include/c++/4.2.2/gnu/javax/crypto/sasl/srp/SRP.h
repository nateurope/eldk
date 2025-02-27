// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_sasl_srp_SRP__
#define __gnu_javax_crypto_sasl_srp_SRP__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace math
    {
      class BigInteger;
    }
  }
  namespace gnu
  {
    namespace javax
    {
      namespace crypto
      {
        namespace sasl
        {
          namespace srp
          {
            class SRP;
          }
        }
      }
    }
    namespace java
    {
      namespace security
      {
        namespace hash
        {
          class IMessageDigest;
        }
      }
    }
  }
}

class gnu::javax::crypto::sasl::srp::SRP : public ::java::lang::Object
{
private:
  SRP (::gnu::java::security::hash::IMessageDigest *);
public:
  static ::gnu::javax::crypto::sasl::srp::SRP *instance (::java::lang::String *);
private:
  static jbyteArray xor$ (jbyteArray, jbyteArray, jint);
public:
  virtual ::java::lang::String *getAlgorithm ();
  virtual ::gnu::java::security::hash::IMessageDigest *newDigest ();
  virtual jbyteArray digest (jbyteArray);
  virtual jbyteArray digest (::java::lang::String *);
  virtual jbyteArray xor$ (jbyteArray, jbyteArray);
  virtual jbyteArray generateM1 (::java::math::BigInteger *, ::java::math::BigInteger *, ::java::lang::String *, jbyteArray, ::java::math::BigInteger *, ::java::math::BigInteger *, jbyteArray, ::java::lang::String *, ::java::lang::String *, jbyteArray, jbyteArray);
  virtual jbyteArray generateM2 (::java::math::BigInteger *, jbyteArray, jbyteArray, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *, jbyteArray, jint, jbyteArray, jbyteArray, jbyteArray);
  virtual jbyteArray generateKn (jbyteArray, jbyteArray, jbyteArray);
  virtual jbyteArray computeX (jbyteArray, ::java::lang::String *, ::java::lang::String *);
  virtual jbyteArray computeX (jbyteArray, ::java::lang::String *, jbyteArray);
private:
  jbyteArray computeX (jbyteArray, jbyteArray, jbyteArray);
  static ::java::util::HashMap *algorithms;
  static const jint COLON = 58L;
  ::gnu::java::security::hash::IMessageDigest * __attribute__((aligned(__alignof__( ::java::lang::Object )))) mda;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_crypto_sasl_srp_SRP__ */

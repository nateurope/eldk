// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_key_dh_GnuDHKeyPairGenerator__
#define __gnu_javax_crypto_key_dh_GnuDHKeyPairGenerator__

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
    namespace security
    {
      class KeyPair;
      class SecureRandom;
    }
  }
  namespace gnu
  {
    namespace javax
    {
      namespace crypto
      {
        namespace key
        {
          namespace dh
          {
            class GnuDHKeyPairGenerator;
          }
        }
      }
    }
    namespace java
    {
      namespace security
      {
        namespace util
        {
          class PRNG;
        }
        namespace hash
        {
          class Sha160;
        }
      }
    }
  }
}

class gnu::javax::crypto::key::dh::GnuDHKeyPairGenerator : public ::java::lang::Object
{
public:
  virtual ::java::lang::String *name ();
  virtual void setup (::java::util::Map *);
  virtual ::java::security::KeyPair *generate ();
private:
  void nextRandomBytes (jbyteArray);
  ::gnu::java::security::util::PRNG *getDefaultPRNG ();
public:
  GnuDHKeyPairGenerator ();
private:
  static ::java::util::logging::Logger *log;
public:
  static ::java::lang::String *SOURCE_OF_RANDOMNESS;
  static ::java::lang::String *DH_PARAMETERS;
  static ::java::lang::String *PRIME_SIZE;
  static ::java::lang::String *EXPONENT_SIZE;
  static ::java::lang::String *PREFERRED_ENCODING_FORMAT;
  static const jint DEFAULT_PRIME_SIZE = 512L;
  static const jint DEFAULT_EXPONENT_SIZE = 160L;
private:
  static const jint DEFAULT_ENCODING_FORMAT = 1L;
  ::gnu::java::security::hash::Sha160 * __attribute__((aligned(__alignof__( ::java::lang::Object )))) sha;
  ::java::security::SecureRandom *rnd;
  jint l;
  jint m;
  ::java::math::BigInteger *seed;
  ::java::math::BigInteger *counter;
  ::java::math::BigInteger *q;
  ::java::math::BigInteger *p;
  ::java::math::BigInteger *j;
  ::java::math::BigInteger *g;
  ::gnu::java::security::util::PRNG *prng;
  jint preferredFormat;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_crypto_key_dh_GnuDHKeyPairGenerator__ */

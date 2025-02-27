// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_key_dh_RFC2631__
#define __gnu_javax_crypto_key_dh_RFC2631__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
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
            class RFC2631;
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
  namespace java
  {
    namespace security
    {
      class SecureRandom;
    }
    namespace math
    {
      class BigInteger;
    }
  }
}

class gnu::javax::crypto::key::dh::RFC2631 : public ::java::lang::Object
{
public:
  RFC2631 (jint, jint, ::java::security::SecureRandom *);
  virtual JArray< ::java::math::BigInteger *> *generateParameters ();
private:
  void nextRandomBytes (jbyteArray);
  ::gnu::java::security::util::PRNG *getDefaultPRNG ();
public:
  static const jint DH_PARAMS_SEED = 0L;
  static const jint DH_PARAMS_COUNTER = 1L;
  static const jint DH_PARAMS_Q = 2L;
  static const jint DH_PARAMS_P = 3L;
  static const jint DH_PARAMS_J = 4L;
  static const jint DH_PARAMS_G = 5L;
private:
  static ::java::math::BigInteger *TWO;
  ::gnu::java::security::hash::Sha160 * __attribute__((aligned(__alignof__( ::java::lang::Object )))) sha;
  jint m;
  jint L;
  ::java::security::SecureRandom *rnd;
  ::gnu::java::security::util::PRNG *prng;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_crypto_key_dh_RFC2631__ */

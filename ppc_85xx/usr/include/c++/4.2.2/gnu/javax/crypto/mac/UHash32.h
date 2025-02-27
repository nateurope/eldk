// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_mac_UHash32__
#define __gnu_javax_crypto_mac_UHash32__

#pragma interface

#include <gnu/javax/crypto/mac/BaseMac.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace crypto
      {
        namespace mac
        {
          class UHash32;
          class UHash32$L1Hash32;
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

class gnu::javax::crypto::mac::UHash32 : public ::gnu::javax::crypto::mac::BaseMac
{
public:
  UHash32 ();
private:
  UHash32 (::gnu::javax::crypto::mac::UHash32 *);
public: // actually package-private
  static ::java::math::BigInteger *prime (jint);
public:
  virtual ::java::lang::Object *clone ();
  virtual jint macSize ();
  virtual void init (::java::util::Map *);
  virtual void update (jbyte);
  virtual void update (jbyteArray, jint, jint);
  virtual jbyteArray digest ();
  virtual void reset ();
  virtual jboolean selfTest ();
private:
  static ::java::math::BigInteger *PRIME_19;
  static ::java::math::BigInteger *PRIME_32;
  static ::java::math::BigInteger *PRIME_36;
  static ::java::math::BigInteger *PRIME_64;
  static ::java::math::BigInteger *PRIME_128;
public: // actually package-private
  static ::java::math::BigInteger *TWO;
  static jlong BOUNDARY;
  static ::java::math::BigInteger *LOWER_RANGE;
  static ::java::math::BigInteger *UPPER_RANGE;
  static jbyteArray ALL_ZEROES;
  jint __attribute__((aligned(__alignof__( ::gnu::javax::crypto::mac::BaseMac ))))  streams;
  JArray< ::gnu::javax::crypto::mac::UHash32$L1Hash32 *> *l1hash;

  friend class gnu_javax_crypto_mac_UHash32$L3Hash32;
  friend class gnu_javax_crypto_mac_UHash32$L2Hash32;
  friend class gnu_javax_crypto_mac_UHash32$L1Hash32;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_crypto_mac_UHash32__ */

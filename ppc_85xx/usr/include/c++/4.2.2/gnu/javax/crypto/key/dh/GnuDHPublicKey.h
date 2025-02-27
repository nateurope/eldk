// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_key_dh_GnuDHPublicKey__
#define __gnu_javax_crypto_key_dh_GnuDHPublicKey__

#pragma interface

#include <gnu/javax/crypto/key/dh/GnuDHKey.h>
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
            class GnuDHPublicKey;
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

class gnu::javax::crypto::key::dh::GnuDHPublicKey : public ::gnu::javax::crypto::key::dh::GnuDHKey
{
public:
  GnuDHPublicKey (::java::math::BigInteger *, ::java::math::BigInteger *, ::java::math::BigInteger *, ::java::math::BigInteger *);
  GnuDHPublicKey (jint, ::java::math::BigInteger *, ::java::math::BigInteger *, ::java::math::BigInteger *, ::java::math::BigInteger *);
  static ::gnu::javax::crypto::key::dh::GnuDHPublicKey *valueOf (jbyteArray);
  virtual ::java::math::BigInteger *getY () { return y; }
  virtual jbyteArray getEncoded (jint);
  virtual jboolean equals (::java::lang::Object *);
  virtual ::java::lang::String *toString ();
private:
  ::java::math::BigInteger * __attribute__((aligned(__alignof__( ::gnu::javax::crypto::key::dh::GnuDHKey )))) y;
  ::java::lang::String *str;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_crypto_key_dh_GnuDHPublicKey__ */

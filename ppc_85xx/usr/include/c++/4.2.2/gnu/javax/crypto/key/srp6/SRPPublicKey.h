// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_key_srp6_SRPPublicKey__
#define __gnu_javax_crypto_key_srp6_SRPPublicKey__

#pragma interface

#include <gnu/javax/crypto/key/srp6/SRPKey.h>
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
          namespace srp6
          {
            class SRPPublicKey;
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

class gnu::javax::crypto::key::srp6::SRPPublicKey : public ::gnu::javax::crypto::key::srp6::SRPKey
{
public:
  SRPPublicKey (::java::math::BigInteger *, ::java::math::BigInteger *, ::java::math::BigInteger *);
public: // actually package-private
  SRPPublicKey (JArray< ::java::math::BigInteger *> *);
public:
  static ::gnu::javax::crypto::key::srp6::SRPPublicKey *valueOf (jbyteArray);
  virtual ::java::math::BigInteger *getY () { return Y; }
  virtual jbyteArray getEncoded (jint);
  virtual jboolean equals (::java::lang::Object *);
private:
  ::java::math::BigInteger * __attribute__((aligned(__alignof__( ::gnu::javax::crypto::key::srp6::SRPKey )))) Y;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_crypto_key_srp6_SRPPublicKey__ */

// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_key_srp6_SRPPrivateKey__
#define __gnu_javax_crypto_key_srp6_SRPPrivateKey__

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
            class SRPPrivateKey;
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

class gnu::javax::crypto::key::srp6::SRPPrivateKey : public ::gnu::javax::crypto::key::srp6::SRPKey
{
public:
  SRPPrivateKey (::java::math::BigInteger *, ::java::math::BigInteger *, ::java::math::BigInteger *);
  SRPPrivateKey (::java::math::BigInteger *, ::java::math::BigInteger *, ::java::math::BigInteger *, ::java::math::BigInteger *);
public: // actually package-private
  SRPPrivateKey (JArray< ::java::math::BigInteger *> *);
public:
  static ::gnu::javax::crypto::key::srp6::SRPPrivateKey *valueOf (jbyteArray);
  virtual ::java::math::BigInteger *getX () { return X; }
  virtual ::java::math::BigInteger *getV () { return v; }
  virtual jbyteArray getEncoded (jint);
  virtual jboolean equals (::java::lang::Object *);
private:
  ::java::math::BigInteger * __attribute__((aligned(__alignof__( ::gnu::javax::crypto::key::srp6::SRPKey )))) X;
  ::java::math::BigInteger *v;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_crypto_key_srp6_SRPPrivateKey__ */

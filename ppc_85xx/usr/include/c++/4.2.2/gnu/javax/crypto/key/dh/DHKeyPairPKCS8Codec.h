// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_key_dh_DHKeyPairPKCS8Codec__
#define __gnu_javax_crypto_key_dh_DHKeyPairPKCS8Codec__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace security
    {
      class PrivateKey;
      class PublicKey;
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
            class DHKeyPairPKCS8Codec;
          }
        }
      }
    }
    namespace java
    {
      namespace security
      {
        class OID;
      }
    }
  }
}

class gnu::javax::crypto::key::dh::DHKeyPairPKCS8Codec : public ::java::lang::Object
{
public:
  virtual jint getFormatID ();
  virtual jbyteArray encodePublicKey (::java::security::PublicKey *);
  virtual jbyteArray encodePrivateKey (::java::security::PrivateKey *);
  virtual ::java::security::PublicKey *decodePublicKey (jbyteArray);
  virtual ::java::security::PrivateKey *decodePrivateKey (jbyteArray);
  DHKeyPairPKCS8Codec ();
private:
  static ::gnu::java::security::OID *DH_ALG_OID;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_crypto_key_dh_DHKeyPairPKCS8Codec__ */

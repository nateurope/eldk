// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_key_dh_DHKeyPairX509Codec__
#define __gnu_javax_crypto_key_dh_DHKeyPairX509Codec__

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
            class DHKeyPairX509Codec;
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

class gnu::javax::crypto::key::dh::DHKeyPairX509Codec : public ::java::lang::Object
{
public:
  virtual jint getFormatID ();
  virtual jbyteArray encodePublicKey (::java::security::PublicKey *);
  virtual jbyteArray encodePrivateKey (::java::security::PrivateKey *);
  virtual ::java::security::PublicKey *decodePublicKey (jbyteArray);
  virtual ::java::security::PrivateKey *decodePrivateKey (jbyteArray);
  DHKeyPairX509Codec ();
private:
  static ::gnu::java::security::OID *DH_ALG_OID;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_crypto_key_dh_DHKeyPairX509Codec__ */

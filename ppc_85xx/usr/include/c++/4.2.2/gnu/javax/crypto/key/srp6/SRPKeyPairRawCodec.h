// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_key_srp6_SRPKeyPairRawCodec__
#define __gnu_javax_crypto_key_srp6_SRPKeyPairRawCodec__

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
          namespace srp6
          {
            class SRPKeyPairRawCodec;
          }
        }
      }
    }
  }
  namespace java
  {
    namespace security
    {
      class PrivateKey;
      class PublicKey;
    }
  }
}

class gnu::javax::crypto::key::srp6::SRPKeyPairRawCodec : public ::java::lang::Object
{
public:
  virtual jint getFormatID ();
  virtual jbyteArray encodePublicKey (::java::security::PublicKey *);
  virtual ::java::security::PublicKey *decodePublicKey (jbyteArray);
  virtual jbyteArray encodePrivateKey (::java::security::PrivateKey *);
  virtual ::java::security::PrivateKey *decodePrivateKey (jbyteArray);
  SRPKeyPairRawCodec ();

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_crypto_key_srp6_SRPKeyPairRawCodec__ */
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_security_key_rsa_RSAKeyPairPKCS8Codec__
#define __gnu_java_security_key_rsa_RSAKeyPairPKCS8Codec__

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
    namespace java
    {
      namespace security
      {
        namespace key
        {
          namespace rsa
          {
            class RSAKeyPairPKCS8Codec;
          }
        }
        class OID;
      }
    }
  }
}

class gnu::java::security::key::rsa::RSAKeyPairPKCS8Codec : public ::java::lang::Object
{
public:
  virtual jint getFormatID ();
  virtual jbyteArray encodePublicKey (::java::security::PublicKey *);
  virtual jbyteArray encodePrivateKey (::java::security::PrivateKey *);
  virtual ::java::security::PublicKey *decodePublicKey (jbyteArray);
  virtual ::java::security::PrivateKey *decodePrivateKey (jbyteArray);
  RSAKeyPairPKCS8Codec ();
private:
  static ::java::util::logging::Logger *log;
  static ::gnu::java::security::OID *RSA_ALG_OID;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_security_key_rsa_RSAKeyPairPKCS8Codec__ */
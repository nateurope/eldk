// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_keyring_PublicKeyEntry__
#define __gnu_javax_crypto_keyring_PublicKeyEntry__

#pragma interface

#include <gnu/javax/crypto/keyring/PrimitiveEntry.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace crypto
      {
        namespace keyring
        {
          class PublicKeyEntry;
          class Properties;
        }
      }
    }
  }
  namespace java
  {
    namespace security
    {
      class PublicKey;
    }
  }
}

class gnu::javax::crypto::keyring::PublicKeyEntry : public ::gnu::javax::crypto::keyring::PrimitiveEntry
{
public:
  PublicKeyEntry (::java::security::PublicKey *, ::java::util::Date *, ::gnu::javax::crypto::keyring::Properties *);
private:
  PublicKeyEntry ();
public:
  static ::gnu::javax::crypto::keyring::PublicKeyEntry *decode (::java::io::DataInputStream *);
  virtual ::java::security::PublicKey *getKey () { return key; }
public:  // actually protected
  virtual void encodePayload ();
public:
  static const jint TYPE = 6L;
private:
  ::java::security::PublicKey * __attribute__((aligned(__alignof__( ::gnu::javax::crypto::keyring::PrimitiveEntry )))) key;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_crypto_keyring_PublicKeyEntry__ */

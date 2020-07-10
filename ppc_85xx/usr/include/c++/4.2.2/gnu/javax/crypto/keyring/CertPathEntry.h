// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_keyring_CertPathEntry__
#define __gnu_javax_crypto_keyring_CertPathEntry__

#pragma interface

#include <gnu/javax/crypto/keyring/PrimitiveEntry.h>
#include <gcj/array.h>

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
          class CertPathEntry;
          class Properties;
        }
      }
    }
  }
  namespace java
  {
    namespace security
    {
      namespace cert
      {
        class Certificate;
      }
    }
  }
}

class gnu::javax::crypto::keyring::CertPathEntry : public ::gnu::javax::crypto::keyring::PrimitiveEntry
{
public:
  CertPathEntry (JArray< ::java::security::cert::Certificate *> *, ::java::util::Date *, ::gnu::javax::crypto::keyring::Properties *);
private:
  CertPathEntry ();
public:
  static ::gnu::javax::crypto::keyring::CertPathEntry *decode (::java::io::DataInputStream *);
  virtual JArray< ::java::security::cert::Certificate *> *getCertPath () { return path; }
public:  // actually protected
  virtual void encodePayload ();
public:
  static const jint TYPE = 8L;
private:
  JArray< ::java::security::cert::Certificate *> * __attribute__((aligned(__alignof__( ::gnu::javax::crypto::keyring::PrimitiveEntry )))) path;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_crypto_keyring_CertPathEntry__ */

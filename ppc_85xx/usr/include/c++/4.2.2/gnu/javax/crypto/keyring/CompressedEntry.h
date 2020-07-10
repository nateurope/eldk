// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_keyring_CompressedEntry__
#define __gnu_javax_crypto_keyring_CompressedEntry__

#pragma interface

#include <gnu/javax/crypto/keyring/EnvelopeEntry.h>

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
          class CompressedEntry;
          class Properties;
        }
      }
    }
  }
}

class gnu::javax::crypto::keyring::CompressedEntry : public ::gnu::javax::crypto::keyring::EnvelopeEntry
{
public:
  CompressedEntry (::gnu::javax::crypto::keyring::Properties *);
private:
  CompressedEntry ();
public:
  static ::gnu::javax::crypto::keyring::CompressedEntry *decode (::java::io::DataInputStream *);
public:  // actually protected
  virtual void encodePayload ();
public:
  static const jint TYPE = 4L;

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_crypto_keyring_CompressedEntry__ */

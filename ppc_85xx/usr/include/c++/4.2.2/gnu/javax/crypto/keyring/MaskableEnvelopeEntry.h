// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_keyring_MaskableEnvelopeEntry__
#define __gnu_javax_crypto_keyring_MaskableEnvelopeEntry__

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
          class MaskableEnvelopeEntry;
          class Entry;
          class Properties;
        }
      }
    }
  }
}

class gnu::javax::crypto::keyring::MaskableEnvelopeEntry : public ::gnu::javax::crypto::keyring::EnvelopeEntry
{
public:
  MaskableEnvelopeEntry (jint, ::gnu::javax::crypto::keyring::Properties *);
public:  // actually protected
  MaskableEnvelopeEntry (jint);
  virtual void setMasked (jboolean);
public:
  virtual jboolean isMasked () { return masked; }
  virtual void add (::gnu::javax::crypto::keyring::Entry *);
  virtual jboolean containsEntry (::gnu::javax::crypto::keyring::Entry *);
  virtual ::java::util::List *getEntries ();
  virtual ::java::util::List *get (::java::lang::String *);
  virtual jboolean remove (::gnu::javax::crypto::keyring::Entry *);
  virtual jboolean remove (::java::lang::String *);
  virtual ::java::lang::String *toString ();
public:  // actually protected
  jboolean __attribute__((aligned(__alignof__( ::gnu::javax::crypto::keyring::EnvelopeEntry ))))  masked;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_crypto_keyring_MaskableEnvelopeEntry__ */

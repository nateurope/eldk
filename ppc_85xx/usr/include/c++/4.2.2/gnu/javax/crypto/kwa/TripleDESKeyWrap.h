// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_kwa_TripleDESKeyWrap__
#define __gnu_javax_crypto_kwa_TripleDESKeyWrap__

#pragma interface

#include <gnu/javax/crypto/kwa/BaseKeyWrappingAlgorithm.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace security
    {
      class SecureRandom;
    }
  }
  namespace gnu
  {
    namespace java
    {
      namespace security
      {
        namespace hash
        {
          class Sha160;
        }
      }
    }
    namespace javax
    {
      namespace crypto
      {
        namespace kwa
        {
          class TripleDESKeyWrap;
        }
        namespace assembly
        {
          class Assembly;
        }
      }
    }
  }
}

class gnu::javax::crypto::kwa::TripleDESKeyWrap : public ::gnu::javax::crypto::kwa::BaseKeyWrappingAlgorithm
{
public:
  TripleDESKeyWrap ();
public:  // actually protected
  virtual void engineInit (::java::util::Map *);
  virtual jbyteArray engineWrap (jbyteArray, jint, jint);
  virtual jbyteArray engineUnwrap (jbyteArray, jint, jint);
private:
  void nextRandomBytes (jbyteArray);
  static jbyteArray DEFAULT_IV;
  ::gnu::javax::crypto::assembly::Assembly * __attribute__((aligned(__alignof__( ::gnu::javax::crypto::kwa::BaseKeyWrappingAlgorithm )))) asm$;
  ::java::util::HashMap *asmAttributes;
  ::java::util::HashMap *modeAttributes;
  ::gnu::java::security::hash::Sha160 *sha;
  ::java::security::SecureRandom *rnd;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_crypto_kwa_TripleDESKeyWrap__ */

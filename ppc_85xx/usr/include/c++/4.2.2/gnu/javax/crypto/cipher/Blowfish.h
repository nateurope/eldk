// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_cipher_Blowfish__
#define __gnu_javax_crypto_cipher_Blowfish__

#pragma interface

#include <gnu/javax/crypto/cipher/BaseCipher.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace crypto
      {
        namespace cipher
        {
          class Blowfish;
          class Blowfish$Context;
          class Blowfish$Block;
        }
      }
    }
  }
}

class gnu::javax::crypto::cipher::Blowfish : public ::gnu::javax::crypto::cipher::BaseCipher
{
public:
  Blowfish ();
  virtual ::java::lang::Object *clone ();
  virtual ::java::util::Iterator *keySizes ();
  virtual ::java::util::Iterator *blockSizes ();
  virtual ::java::lang::Object *makeKey (jbyteArray, jint);
  virtual void encrypt (jbyteArray, jint, jbyteArray, jint, ::java::lang::Object *, jint);
  virtual void decrypt (jbyteArray, jint, jbyteArray, jint, ::java::lang::Object *, jint);
private:
  void blowfishEncrypt (::gnu::javax::crypto::cipher::Blowfish$Block *, ::gnu::javax::crypto::cipher::Blowfish$Context *);
  void blowfishDecrypt (::gnu::javax::crypto::cipher::Blowfish$Block *, ::gnu::javax::crypto::cipher::Blowfish$Context *);
public:
  virtual jboolean selfTest ();
private:
  static const jint DEFAULT_BLOCK_SIZE = 8L;
  static const jint DEFAULT_KEY_SIZE = 8L;
  static const jint MAX_KEY_LENGTH = 56L;
  static jintArray P;
public: // actually package-private
  static jintArray KS0;
private:
  static jintArray KS1;
  static jintArray KS2;
  static jintArray KS3;
  static ::java::lang::Boolean *valid;
  static jbyteArray TV_KEY;
  static jbyteArray TV_CT;

  friend class gnu_javax_crypto_cipher_Blowfish$Block;
  friend class gnu_javax_crypto_cipher_Blowfish$Context;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_crypto_cipher_Blowfish__ */
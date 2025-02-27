// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_cipher_TripleDES__
#define __gnu_javax_crypto_cipher_TripleDES__

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
          class TripleDES;
          class DES;
        }
      }
    }
  }
}

class gnu::javax::crypto::cipher::TripleDES : public ::gnu::javax::crypto::cipher::BaseCipher
{
public:
  TripleDES ();
  static void adjustParity (jbyteArray, jint);
  static void adjustParity (jint, jbyteArray, jint);
  static jboolean isParityAdjusted (jbyteArray, jint);
  static jboolean isParityAdjusted (jint, jbyteArray, jint);
  virtual ::java::lang::Object *clone ();
  virtual ::java::util::Iterator *blockSizes ();
  virtual ::java::util::Iterator *keySizes ();
  virtual ::java::lang::Object *makeKey (jbyteArray, jint);
  virtual void encrypt (jbyteArray, jint, jbyteArray, jint, ::java::lang::Object *, jint);
  virtual void decrypt (jbyteArray, jint, jbyteArray, jint, ::java::lang::Object *, jint);
  static const jint BLOCK_SIZE = 8L;
  static const jint KEY_SIZE = 24L;
private:
  ::gnu::javax::crypto::cipher::DES * __attribute__((aligned(__alignof__( ::gnu::javax::crypto::cipher::BaseCipher )))) des;

  friend class gnu_javax_crypto_cipher_TripleDES$Context;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_crypto_cipher_TripleDES__ */

// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_cipher_Square__
#define __gnu_javax_crypto_cipher_Square__

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
          class Square;
        }
      }
    }
  }
}

class gnu::javax::crypto::cipher::Square : public ::gnu::javax::crypto::cipher::BaseCipher
{
public:
  Square ();
private:
  static void square (jbyteArray, jint, jbyteArray, jint, JArray<jintArray> *, jintArray, jbyteArray);
  static void transform (jintArray, jintArray);
  static jint rot32L (jint, jint);
  static jint rot32R (jint, jint);
  static jint mul (jint, jint);
public:
  virtual ::java::lang::Object *clone ();
  virtual ::java::util::Iterator *blockSizes ();
  virtual ::java::util::Iterator *keySizes ();
  virtual ::java::lang::Object *makeKey (jbyteArray, jint);
  virtual void encrypt (jbyteArray, jint, jbyteArray, jint, ::java::lang::Object *, jint);
  virtual void decrypt (jbyteArray, jint, jbyteArray, jint, ::java::lang::Object *, jint);
  virtual jboolean selfTest ();
private:
  static const jint DEFAULT_BLOCK_SIZE = 16L;
  static const jint DEFAULT_KEY_SIZE = 16L;
  static const jint ROUNDS = 8L;
  static const jint ROOT = 501L;
  static jintArray OFFSET;
  static ::java::lang::String *Sdata;
  static jbyteArray Se;
  static jbyteArray Sd;
  static jintArray Te;
  static jintArray Td;
  static jbyteArray KAT_KEY;
  static jbyteArray KAT_CT;
  static ::java::lang::Boolean *valid;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_crypto_cipher_Square__ */

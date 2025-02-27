// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_cipher_Anubis__
#define __gnu_javax_crypto_cipher_Anubis__

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
          class Anubis;
        }
      }
    }
  }
}

class gnu::javax::crypto::cipher::Anubis : public ::gnu::javax::crypto::cipher::BaseCipher
{
public:
  Anubis ();
private:
  static void anubis (jbyteArray, jint, jbyteArray, jint, JArray<jintArray> *);
public:
  virtual ::java::lang::Object *clone ();
  virtual ::java::util::Iterator *blockSizes ();
  virtual ::java::util::Iterator *keySizes ();
  virtual ::java::lang::Object *makeKey (jbyteArray, jint);
  virtual void encrypt (jbyteArray, jint, jbyteArray, jint, ::java::lang::Object *, jint);
  virtual void decrypt (jbyteArray, jint, jbyteArray, jint, ::java::lang::Object *, jint);
  virtual jboolean selfTest ();
private:
  static ::java::util::logging::Logger *log;
  static const jint DEFAULT_BLOCK_SIZE = 16L;
  static const jint DEFAULT_KEY_SIZE = 16L;
  static ::java::lang::String *Sd;
  static jbyteArray S;
  static jintArray T0;
  static jintArray T1;
  static jintArray T2;
  static jintArray T3;
  static jintArray T4;
  static jintArray T5;
  static jintArray rc;
  static jbyteArray KAT_KEY;
  static jbyteArray KAT_CT;
  static ::java::lang::Boolean *valid;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_crypto_cipher_Anubis__ */

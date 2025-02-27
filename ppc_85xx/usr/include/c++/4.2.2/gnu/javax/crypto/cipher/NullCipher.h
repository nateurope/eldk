// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_cipher_NullCipher__
#define __gnu_javax_crypto_cipher_NullCipher__

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
          class NullCipher;
        }
      }
    }
  }
}

class gnu::javax::crypto::cipher::NullCipher : public ::gnu::javax::crypto::cipher::BaseCipher
{
public:
  NullCipher ();
  virtual ::java::lang::Object *clone ();
  virtual ::java::util::Iterator *blockSizes ();
  virtual ::java::util::Iterator *keySizes ();
  virtual ::java::lang::Object *makeKey (jbyteArray, jint);
  virtual void encrypt (jbyteArray, jint, jbyteArray, jint, ::java::lang::Object *, jint);
  virtual void decrypt (jbyteArray, jint, jbyteArray, jint, ::java::lang::Object *, jint);
  virtual jboolean selfTest ();

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_crypto_cipher_NullCipher__ */

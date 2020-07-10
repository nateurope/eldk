// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_mode_CTR__
#define __gnu_javax_crypto_mode_CTR__

#pragma interface

#include <gnu/javax/crypto/mode/BaseMode.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace crypto
      {
        namespace mode
        {
          class CTR;
        }
        namespace cipher
        {
          class IBlockCipher;
        }
      }
    }
  }
}

class gnu::javax::crypto::mode::CTR : public ::gnu::javax::crypto::mode::BaseMode
{
public: // actually package-private
  CTR (::gnu::javax::crypto::cipher::IBlockCipher *, jint);
private:
  CTR (::gnu::javax::crypto::mode::CTR *);
public:
  virtual ::java::lang::Object *clone ();
  virtual void setup ();
  virtual void teardown ();
  virtual void encryptBlock (jbyteArray, jint, jbyteArray, jint);
  virtual void decryptBlock (jbyteArray, jint, jbyteArray, jint);
  virtual ::java::util::Iterator *blockSizes ();
private:
  void ctr (jbyteArray, jint, jbyteArray, jint);
  jint __attribute__((aligned(__alignof__( ::gnu::javax::crypto::mode::BaseMode ))))  off;
  jbyteArray counter;
  jbyteArray enc;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_crypto_mode_CTR__ */

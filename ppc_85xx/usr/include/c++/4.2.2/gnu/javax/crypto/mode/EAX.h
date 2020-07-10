// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_mode_EAX__
#define __gnu_javax_crypto_mode_EAX__

#pragma interface

#include <java/lang/Object.h>
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
          class IBlockCipher;
        }
        namespace mode
        {
          class EAX;
          class IMode;
        }
        namespace mac
        {
          class IMac;
        }
      }
    }
  }
}

class gnu::javax::crypto::mode::EAX : public ::java::lang::Object
{
public:
  EAX (::gnu::javax::crypto::cipher::IBlockCipher *, jint);
  virtual ::java::lang::Object *clone ();
  virtual ::java::lang::String *name ();
  virtual jint defaultBlockSize ();
  virtual jint defaultKeySize ();
  virtual ::java::util::Iterator *blockSizes ();
  virtual ::java::util::Iterator *keySizes ();
  virtual void init (::java::util::Map *);
  virtual jint currentBlockSize ();
  virtual void encryptBlock (jbyteArray, jint, jbyteArray, jint);
  virtual void decryptBlock (jbyteArray, jint, jbyteArray, jint);
  virtual void update (jbyteArray, jint, jbyteArray, jint);
  virtual void reset ();
  virtual jboolean selfTest ();
  virtual jint macSize () { return tagSize; }
  virtual jbyteArray digest ();
  virtual void digest (jbyteArray, jint);
  virtual void update (jbyte);
  virtual void update (jbyteArray, jint, jint);
private:
  jint __attribute__((aligned(__alignof__( ::java::lang::Object ))))  tagSize;
  ::gnu::javax::crypto::mac::IMac *nonceOmac;
  ::gnu::javax::crypto::mac::IMac *headerOmac;
  ::gnu::javax::crypto::mac::IMac *msgOmac;
  ::gnu::javax::crypto::mode::IMode *ctr;
  jint state;
  jboolean init__;
  jint cipherBlockSize;
  ::gnu::javax::crypto::cipher::IBlockCipher *cipher;
  jbyteArray t_n;
  static jboolean valid;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_crypto_mode_EAX__ */
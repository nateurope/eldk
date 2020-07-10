// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_pad_ISO10126__
#define __gnu_javax_crypto_pad_ISO10126__

#pragma interface

#include <gnu/javax/crypto/pad/BasePad.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace crypto
      {
        namespace pad
        {
          class ISO10126;
        }
      }
    }
    namespace java
    {
      namespace security
      {
        namespace util
        {
          class PRNG;
        }
      }
    }
  }
}

class gnu::javax::crypto::pad::ISO10126 : public ::gnu::javax::crypto::pad::BasePad
{
public: // actually package-private
  ISO10126 ();
public:
  virtual void setup () { }
  virtual jbyteArray pad (jbyteArray, jint, jint);
  virtual jint unpad (jbyteArray, jint, jint);
  virtual jboolean selfTest ();
private:
  ::gnu::java::security::util::PRNG * __attribute__((aligned(__alignof__( ::gnu::javax::crypto::pad::BasePad )))) prng;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_crypto_pad_ISO10126__ */

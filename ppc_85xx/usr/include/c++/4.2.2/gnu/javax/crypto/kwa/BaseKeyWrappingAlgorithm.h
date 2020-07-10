// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_kwa_BaseKeyWrappingAlgorithm__
#define __gnu_javax_crypto_kwa_BaseKeyWrappingAlgorithm__

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
        namespace kwa
        {
          class BaseKeyWrappingAlgorithm;
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

class gnu::javax::crypto::kwa::BaseKeyWrappingAlgorithm : public ::java::lang::Object
{
public:  // actually protected
  BaseKeyWrappingAlgorithm (::java::lang::String *);
public:
  virtual ::java::lang::String *name () { return name__; }
  virtual void init (::java::util::Map *);
  virtual jint wrap (jbyteArray, jint, jint, jbyteArray, jint);
  virtual jbyteArray wrap (jbyteArray, jint, jint);
  virtual jint unwrap (jbyteArray, jint, jint, jbyteArray, jint);
  virtual jbyteArray unwrap (jbyteArray, jint, jint);
public:  // actually protected
  virtual void engineInit (::java::util::Map *) = 0;
  virtual jbyteArray engineWrap (jbyteArray, jint, jint) = 0;
  virtual jbyteArray engineUnwrap (jbyteArray, jint, jint) = 0;
  virtual ::gnu::java::security::util::PRNG *getDefaultPRNG ();
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::lang::Object )))) name__;
private:
  ::gnu::java::security::util::PRNG *prng;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_crypto_kwa_BaseKeyWrappingAlgorithm__ */

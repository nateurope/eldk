// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_jce_spec_TMMHParameterSpec__
#define __gnu_javax_crypto_jce_spec_TMMHParameterSpec__

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
        namespace jce
        {
          namespace spec
          {
            class TMMHParameterSpec;
          }
        }
      }
    }
    namespace java
    {
      namespace security
      {
        namespace prng
        {
          class IRandom;
        }
      }
    }
  }
}

class gnu::javax::crypto::jce::spec::TMMHParameterSpec : public ::java::lang::Object
{
public:
  TMMHParameterSpec (::gnu::java::security::prng::IRandom *, ::java::lang::Integer *, jbyteArray);
  TMMHParameterSpec (::gnu::java::security::prng::IRandom *, ::java::lang::Integer *);
  virtual ::gnu::java::security::prng::IRandom *getKeystream () { return keystream; }
  virtual ::java::lang::Integer *getTagLength () { return tagLength; }
  virtual jbyteArray getPrefix () { return prefix; }
public:  // actually protected
  ::gnu::java::security::prng::IRandom * __attribute__((aligned(__alignof__( ::java::lang::Object )))) keystream;
  ::java::lang::Integer *tagLength;
  jbyteArray prefix;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_crypto_jce_spec_TMMHParameterSpec__ */
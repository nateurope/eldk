// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_crypto_spec_RC5ParameterSpec__
#define __javax_crypto_spec_RC5ParameterSpec__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace crypto
    {
      namespace spec
      {
        class RC5ParameterSpec;
      }
    }
  }
}

class javax::crypto::spec::RC5ParameterSpec : public ::java::lang::Object
{
public:
  RC5ParameterSpec (jint, jint, jint);
  RC5ParameterSpec (jint, jint, jint, jbyteArray);
  RC5ParameterSpec (jint, jint, jint, jbyteArray, jint);
  virtual jbyteArray getIV () { return iv; }
  virtual jint getRounds () { return rounds; }
  virtual jint getVersion () { return version; }
  virtual jint getWordSize () { return wordSize; }
  virtual jboolean equals (::java::lang::Object *);
  virtual jint hashCode ();
private:
  jbyteArray __attribute__((aligned(__alignof__( ::java::lang::Object ))))  iv;
  jint rounds;
  jint version;
  jint wordSize;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_crypto_spec_RC5ParameterSpec__ */

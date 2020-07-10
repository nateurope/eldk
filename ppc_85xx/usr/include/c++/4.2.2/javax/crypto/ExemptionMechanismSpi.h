// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_crypto_ExemptionMechanismSpi__
#define __javax_crypto_ExemptionMechanismSpi__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace crypto
    {
      class ExemptionMechanismSpi;
    }
  }
  namespace java
  {
    namespace security
    {
      namespace spec
      {
        class AlgorithmParameterSpec;
      }
      class AlgorithmParameters;
      class Key;
    }
  }
}

class javax::crypto::ExemptionMechanismSpi : public ::java::lang::Object
{
public:
  ExemptionMechanismSpi ();
public:  // actually protected
  virtual jbyteArray engineGenExemptionBlob () = 0;
  virtual jint engineGenExemptionBlob (jbyteArray, jint) = 0;
  virtual jint engineGetOutputSize (jint) = 0;
  virtual void engineInit (::java::security::Key *) = 0;
  virtual void engineInit (::java::security::Key *, ::java::security::AlgorithmParameters *) = 0;
  virtual void engineInit (::java::security::Key *, ::java::security::spec::AlgorithmParameterSpec *) = 0;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_crypto_ExemptionMechanismSpi__ */

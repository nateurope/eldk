// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_security_DummyKeyPairGenerator__
#define __java_security_DummyKeyPairGenerator__

#pragma interface

#include <java/security/KeyPairGenerator.h>

extern "Java"
{
  namespace java
  {
    namespace security
    {
      class DummyKeyPairGenerator;
      class KeyPair;
      namespace spec
      {
        class AlgorithmParameterSpec;
      }
      class SecureRandom;
      class KeyPairGeneratorSpi;
    }
  }
}

class java::security::DummyKeyPairGenerator : public ::java::security::KeyPairGenerator
{
public:
  DummyKeyPairGenerator (::java::security::KeyPairGeneratorSpi *, ::java::lang::String *);
  virtual ::java::lang::Object *clone ();
  virtual void initialize (jint, ::java::security::SecureRandom *);
  virtual void initialize (::java::security::spec::AlgorithmParameterSpec *, ::java::security::SecureRandom *);
  virtual ::java::security::KeyPair *generateKeyPair ();
private:
  ::java::security::KeyPairGeneratorSpi * __attribute__((aligned(__alignof__( ::java::security::KeyPairGenerator )))) kpgSpi;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_security_DummyKeyPairGenerator__ */

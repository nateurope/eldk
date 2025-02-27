// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_security_jce_sig_DSSKeyPairGeneratorSpi__
#define __gnu_java_security_jce_sig_DSSKeyPairGeneratorSpi__

#pragma interface

#include <gnu/java/security/jce/sig/KeyPairGeneratorAdapter.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace security
      {
        namespace jce
        {
          namespace sig
          {
            class DSSKeyPairGeneratorSpi;
          }
        }
      }
    }
  }
  namespace java
  {
    namespace security
    {
      namespace interfaces
      {
        class DSAParams;
      }
      namespace spec
      {
        class AlgorithmParameterSpec;
      }
      class SecureRandom;
    }
  }
}

class gnu::java::security::jce::sig::DSSKeyPairGeneratorSpi : public ::gnu::java::security::jce::sig::KeyPairGeneratorAdapter
{
public:
  DSSKeyPairGeneratorSpi ();
  virtual void initialize (jint, ::java::security::SecureRandom *);
  virtual void initialize (::java::security::spec::AlgorithmParameterSpec *, ::java::security::SecureRandom *);
  virtual void initialize (::java::security::interfaces::DSAParams *, ::java::security::SecureRandom *);
  virtual void initialize (jint, jboolean, ::java::security::SecureRandom *);

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_security_jce_sig_DSSKeyPairGeneratorSpi__ */

// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_security_jce_sig_KeyPairGeneratorAdapter__
#define __gnu_java_security_jce_sig_KeyPairGeneratorAdapter__

#pragma interface

#include <java/security/KeyPairGenerator.h>

extern "Java"
{
  namespace java
  {
    namespace security
    {
      class KeyPair;
      namespace spec
      {
        class AlgorithmParameterSpec;
      }
      class SecureRandom;
    }
  }
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
            class KeyPairGeneratorAdapter;
          }
        }
        namespace key
        {
          class IKeyPairGenerator;
        }
      }
    }
  }
}

class gnu::java::security::jce::sig::KeyPairGeneratorAdapter : public ::java::security::KeyPairGenerator
{
public:  // actually protected
  KeyPairGeneratorAdapter (::java::lang::String *);
public:
  virtual void initialize (jint, ::java::security::SecureRandom *) = 0;
  virtual void initialize (::java::security::spec::AlgorithmParameterSpec *, ::java::security::SecureRandom *) = 0;
  virtual ::java::security::KeyPair *generateKeyPair ();
public:  // actually protected
  ::gnu::java::security::key::IKeyPairGenerator * __attribute__((aligned(__alignof__( ::java::security::KeyPairGenerator )))) adaptee;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_security_jce_sig_KeyPairGeneratorAdapter__ */

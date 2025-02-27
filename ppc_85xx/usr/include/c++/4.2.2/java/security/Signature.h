// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_security_Signature__
#define __java_security_Signature__

#pragma interface

#include <java/security/SignatureSpi.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace security
    {
      class AlgorithmParameters;
      namespace spec
      {
        class AlgorithmParameterSpec;
      }
      class SecureRandom;
      class PrivateKey;
      namespace cert
      {
        class Certificate;
      }
      class PublicKey;
      class Signature;
      class Provider;
    }
  }
}

class java::security::Signature : public ::java::security::SignatureSpi
{
public:  // actually protected
  Signature (::java::lang::String *);
public:
  static ::java::security::Signature *getInstance (::java::lang::String *);
  static ::java::security::Signature *getInstance (::java::lang::String *, ::java::lang::String *);
  static ::java::security::Signature *getInstance (::java::lang::String *, ::java::security::Provider *);
  virtual ::java::security::Provider *getProvider () { return provider; }
  virtual void initVerify (::java::security::PublicKey *);
  virtual void initVerify (::java::security::cert::Certificate *);
  virtual void initSign (::java::security::PrivateKey *);
  virtual void initSign (::java::security::PrivateKey *, ::java::security::SecureRandom *);
  virtual jbyteArray sign ();
  virtual jint sign (jbyteArray, jint, jint);
  virtual jboolean verify (jbyteArray);
  virtual jboolean verify (jbyteArray, jint, jint);
  virtual void update (jbyte);
  virtual void update (jbyteArray);
  virtual void update (jbyteArray, jint, jint);
  virtual ::java::lang::String *getAlgorithm () { return algorithm; }
  virtual ::java::lang::String *toString ();
  virtual void setParameter (::java::lang::String *, ::java::lang::Object *);
  virtual void setParameter (::java::security::spec::AlgorithmParameterSpec *);
  virtual ::java::security::AlgorithmParameters *getParameters ();
  virtual ::java::lang::Object *getParameter (::java::lang::String *);
  virtual ::java::lang::Object *clone ();
private:
  static ::java::lang::String *SIGNATURE;
public:  // actually protected
  static const jint UNINITIALIZED = 0L;
  static const jint SIGN = 2L;
  static const jint VERIFY = 3L;
  jint __attribute__((aligned(__alignof__( ::java::security::SignatureSpi ))))  state;
private:
  ::java::lang::String *algorithm;
public: // actually package-private
  ::java::security::Provider *provider;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_security_Signature__ */

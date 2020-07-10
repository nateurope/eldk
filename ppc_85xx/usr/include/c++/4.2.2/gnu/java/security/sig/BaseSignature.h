// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_security_sig_BaseSignature__
#define __gnu_java_security_sig_BaseSignature__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace security
    {
      class PrivateKey;
      class PublicKey;
    }
  }
  namespace gnu
  {
    namespace java
    {
      namespace security
      {
        namespace sig
        {
          class BaseSignature;
        }
        namespace util
        {
          class PRNG;
        }
        namespace prng
        {
          class IRandom;
        }
        namespace hash
        {
          class IMessageDigest;
        }
      }
    }
  }
}

class gnu::java::security::sig::BaseSignature : public ::java::lang::Object
{
public:  // actually protected
  BaseSignature (::java::lang::String *, ::gnu::java::security::hash::IMessageDigest *);
public:
  virtual ::java::lang::String *name ();
  virtual void setupVerify (::java::util::Map *);
  virtual void setupSign (::java::util::Map *);
  virtual void update (jbyte);
  virtual void update (jbyteArray, jint, jint);
  virtual ::java::lang::Object *sign ();
  virtual jboolean verify (::java::lang::Object *);
  virtual ::java::lang::Object *clone () = 0;
public:  // actually protected
  virtual void setupForVerification (::java::security::PublicKey *) = 0;
  virtual void setupForSigning (::java::security::PrivateKey *) = 0;
  virtual ::java::lang::Object *generateSignature () = 0;
  virtual jboolean verifySignature (::java::lang::Object *) = 0;
  virtual void init ();
  virtual void nextRandomBytes (jbyteArray);
private:
  void setup (::java::util::Map *);
  ::gnu::java::security::util::PRNG *getDefaultPRNG ();
public:  // actually protected
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::lang::Object )))) schemeName;
  ::gnu::java::security::hash::IMessageDigest *md;
  ::java::security::PublicKey *publicKey;
  ::java::security::PrivateKey *privateKey;
private:
  ::java::util::Random *rnd;
  ::gnu::java::security::prng::IRandom *irnd;
  ::gnu::java::security::util::PRNG *prng;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_security_sig_BaseSignature__ */
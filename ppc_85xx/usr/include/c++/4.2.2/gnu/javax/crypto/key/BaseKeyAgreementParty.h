// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_key_BaseKeyAgreementParty__
#define __gnu_javax_crypto_key_BaseKeyAgreementParty__

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
        namespace key
        {
          class BaseKeyAgreementParty;
          class OutgoingMessage;
          class IncomingMessage;
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
        namespace prng
        {
          class IRandom;
        }
      }
    }
  }
  namespace java
  {
    namespace security
    {
      class SecureRandom;
    }
    namespace math
    {
      class BigInteger;
    }
  }
}

class gnu::javax::crypto::key::BaseKeyAgreementParty : public ::java::lang::Object
{
public:  // actually protected
  BaseKeyAgreementParty (::java::lang::String *);
public:
  virtual ::java::lang::String *name () { return name__; }
  virtual void init (::java::util::Map *);
  virtual ::gnu::javax::crypto::key::OutgoingMessage *processMessage (::gnu::javax::crypto::key::IncomingMessage *);
  virtual jboolean isComplete () { return complete; }
  virtual jbyteArray getSharedSecret ();
  virtual void reset ();
public:  // actually protected
  virtual void engineInit (::java::util::Map *) = 0;
  virtual ::gnu::javax::crypto::key::OutgoingMessage *engineProcessMessage (::gnu::javax::crypto::key::IncomingMessage *) = 0;
  virtual jbyteArray engineSharedSecret () = 0;
  virtual void engineReset () = 0;
  virtual void nextRandomBytes (jbyteArray);
private:
  ::gnu::java::security::util::PRNG *getDefaultPRNG ();
public:  // actually protected
  static ::java::math::BigInteger *TWO;
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::lang::Object )))) name__;
  jboolean initialised;
  jint step;
  jboolean complete;
  ::java::security::SecureRandom *rnd;
  ::gnu::java::security::prng::IRandom *irnd;
private:
  ::gnu::java::security::util::PRNG *prng;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_crypto_key_BaseKeyAgreementParty__ */

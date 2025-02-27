// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_security_key_dss_DSSKeyPairGenerator__
#define __gnu_java_security_key_dss_DSSKeyPairGenerator__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace security
      {
        namespace key
        {
          namespace dss
          {
            class DSSKeyPairGenerator;
          }
        }
        namespace util
        {
          class PRNG;
        }
      }
    }
  }
  namespace java
  {
    namespace security
    {
      class KeyPair;
      class SecureRandom;
      namespace spec
      {
        class DSAParameterSpec;
      }
    }
    namespace math
    {
      class BigInteger;
    }
  }
}

class gnu::java::security::key::dss::DSSKeyPairGenerator : public ::java::lang::Object
{
public:
  virtual ::java::lang::String *name ();
  virtual void setup (::java::util::Map *);
  virtual ::java::security::KeyPair *generate ();
private:
  ::java::math::BigInteger *nextX ();
  void nextRandomBytes (jbyteArray);
  ::gnu::java::security::util::PRNG *getDefaultPRNG ();
public:
  DSSKeyPairGenerator ();
private:
  static ::java::util::logging::Logger *log;
  static ::java::math::BigInteger *TWO;
public:
  static ::java::lang::String *MODULUS_LENGTH;
  static ::java::lang::String *USE_DEFAULTS;
  static ::java::lang::String *STRICT_DEFAULTS;
  static ::java::lang::String *SOURCE_OF_RANDOMNESS;
  static ::java::lang::String *DSS_PARAMETERS;
  static ::java::lang::String *PREFERRED_ENCODING_FORMAT;
  static const jint DEFAULT_MODULUS_LENGTH = 1024L;
private:
  static const jint DEFAULT_ENCODING_FORMAT = 1L;
  static jintArray T_SHS;
public:
  static ::java::security::spec::DSAParameterSpec *KEY_PARAMS_512;
  static ::java::security::spec::DSAParameterSpec *KEY_PARAMS_768;
  static ::java::security::spec::DSAParameterSpec *KEY_PARAMS_1024;
private:
  static ::java::math::BigInteger *TWO_POW_160;
  jint __attribute__((aligned(__alignof__( ::java::lang::Object ))))  L;
  ::java::security::SecureRandom *rnd;
  ::java::math::BigInteger *seed;
  ::java::math::BigInteger *counter;
  ::java::math::BigInteger *p;
  ::java::math::BigInteger *q;
  ::java::math::BigInteger *e;
  ::java::math::BigInteger *g;
  ::java::math::BigInteger *XKEY;
  ::gnu::java::security::util::PRNG *prng;
  jint preferredFormat;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_security_key_dss_DSSKeyPairGenerator__ */

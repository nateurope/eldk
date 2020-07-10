// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_security_sig_dss_DSSSignature__
#define __gnu_java_security_sig_dss_DSSSignature__

#pragma interface

#include <gnu/java/security/sig/BaseSignature.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace math
    {
      class BigInteger;
    }
    namespace security
    {
      class PrivateKey;
      class PublicKey;
      namespace interfaces
      {
        class DSAPublicKey;
        class DSAPrivateKey;
      }
    }
  }
  namespace gnu
  {
    namespace java
    {
      namespace security
      {
        namespace prng
        {
          class IRandom;
        }
        namespace sig
        {
          namespace dss
          {
            class DSSSignature;
          }
        }
      }
    }
  }
}

class gnu::java::security::sig::dss::DSSSignature : public ::gnu::java::security::sig::BaseSignature
{
public:
  DSSSignature ();
private:
  DSSSignature (::gnu::java::security::sig::dss::DSSSignature *);
public:
  static JArray< ::java::math::BigInteger *> *sign (::java::security::interfaces::DSAPrivateKey *, jbyteArray);
  static JArray< ::java::math::BigInteger *> *sign (::java::security::interfaces::DSAPrivateKey *, jbyteArray, ::java::util::Random *);
  static JArray< ::java::math::BigInteger *> *sign (::java::security::interfaces::DSAPrivateKey *, jbyteArray, ::gnu::java::security::prng::IRandom *);
  static jboolean verify (::java::security::interfaces::DSAPublicKey *, jbyteArray, JArray< ::java::math::BigInteger *> *);
  virtual ::java::lang::Object *clone ();
public:  // actually protected
  virtual void setupForVerification (::java::security::PublicKey *);
  virtual void setupForSigning (::java::security::PrivateKey *);
  virtual ::java::lang::Object *generateSignature ();
  virtual jboolean verifySignature (::java::lang::Object *);
private:
  ::java::lang::Object *encodeSignature (::java::math::BigInteger *, ::java::math::BigInteger *);
  JArray< ::java::math::BigInteger *> *decodeSignature (::java::lang::Object *);
  JArray< ::java::math::BigInteger *> *computeRS (jbyteArray);
  jboolean checkRS (JArray< ::java::math::BigInteger *> *, jbyteArray);
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_security_sig_dss_DSSSignature__ */

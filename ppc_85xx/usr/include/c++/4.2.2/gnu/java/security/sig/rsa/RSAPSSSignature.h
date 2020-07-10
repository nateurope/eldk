// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_security_sig_rsa_RSAPSSSignature__
#define __gnu_java_security_sig_rsa_RSAPSSSignature__

#pragma interface

#include <gnu/java/security/sig/BaseSignature.h>

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
        namespace hash
        {
          class IMessageDigest;
        }
        namespace sig
        {
          namespace rsa
          {
            class RSAPSSSignature;
            class EMSA_PSS;
          }
        }
      }
    }
  }
}

class gnu::java::security::sig::rsa::RSAPSSSignature : public ::gnu::java::security::sig::BaseSignature
{
public:
  RSAPSSSignature ();
  RSAPSSSignature (::java::lang::String *);
  RSAPSSSignature (::java::lang::String *, jint);
  RSAPSSSignature (::gnu::java::security::hash::IMessageDigest *, jint);
private:
  RSAPSSSignature (::gnu::java::security::sig::rsa::RSAPSSSignature *);
public:
  virtual ::java::lang::Object *clone ();
public:  // actually protected
  virtual void setupForVerification (::java::security::PublicKey *);
  virtual void setupForSigning (::java::security::PrivateKey *);
  virtual ::java::lang::Object *generateSignature ();
  virtual jboolean verifySignature (::java::lang::Object *);
private:
  static ::java::util::logging::Logger *log;
  ::gnu::java::security::sig::rsa::EMSA_PSS * __attribute__((aligned(__alignof__( ::gnu::java::security::sig::BaseSignature )))) pss;
  jint sLen;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_security_sig_rsa_RSAPSSSignature__ */

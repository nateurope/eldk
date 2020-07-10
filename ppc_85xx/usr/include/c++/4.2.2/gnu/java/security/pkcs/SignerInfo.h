// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_security_pkcs_SignerInfo__
#define __gnu_java_security_pkcs_SignerInfo__

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
        namespace pkcs
        {
          class SignerInfo;
        }
        namespace ber
        {
          class BERReader;
        }
        class OID;
      }
    }
  }
  namespace javax
  {
    namespace security
    {
      namespace auth
      {
        namespace x500
        {
          class X500Principal;
        }
      }
    }
  }
  namespace java
  {
    namespace math
    {
      class BigInteger;
    }
  }
}

class gnu::java::security::pkcs::SignerInfo : public ::java::lang::Object
{
public:
  SignerInfo (::gnu::java::security::ber::BERReader *);
  SignerInfo (::javax::security::auth::x500::X500Principal *, ::java::math::BigInteger *, ::gnu::java::security::OID *, jbyteArray, ::gnu::java::security::OID *, jbyteArray, jbyteArray);
  virtual ::java::math::BigInteger *getVersion () { return version; }
  virtual ::java::math::BigInteger *getSerialNumber () { return serialNumber; }
  virtual ::javax::security::auth::x500::X500Principal *getIssuer () { return issuer; }
  virtual ::gnu::java::security::OID *getDigestAlgorithmId () { return digestAlgorithmId; }
  virtual jbyteArray getDigestAlgorithmParams ();
  virtual jbyteArray getAuthenticatedAttributes ();
  virtual ::gnu::java::security::OID *getDigestEncryptionAlgorithmId () { return digestEncryptionAlgorithmId; }
  virtual jbyteArray getDigestEncryptionAlgorithmParams ();
  virtual jbyteArray getEncryptedDigest ();
  virtual jbyteArray getUnauthenticatedAttributes ();
  virtual void encode (::java::io::OutputStream *);
private:
  static ::java::util::logging::Logger *log;
  ::java::math::BigInteger * __attribute__((aligned(__alignof__( ::java::lang::Object )))) version;
  ::java::math::BigInteger *serialNumber;
  ::javax::security::auth::x500::X500Principal *issuer;
  ::gnu::java::security::OID *digestAlgorithmId;
  jbyteArray digestAlgorithmParams;
  jbyteArray authenticatedAttributes;
  ::gnu::java::security::OID *digestEncryptionAlgorithmId;
  jbyteArray digestEncryptionAlgorithmParams;
  jbyteArray encryptedDigest;
  jbyteArray unauthenticatedAttributes;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_security_pkcs_SignerInfo__ */
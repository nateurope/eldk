// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_security_cert_TrustAnchor__
#define __java_security_cert_TrustAnchor__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace security
    {
      namespace cert
      {
        class TrustAnchor;
        class X509Certificate;
      }
      class PublicKey;
    }
  }
  namespace gnu
  {
    namespace java
    {
      namespace security
      {
        namespace x509
        {
          class X500DistinguishedName;
        }
      }
    }
  }
}

class java::security::cert::TrustAnchor : public ::java::lang::Object
{
public:
  TrustAnchor (::java::security::cert::X509Certificate *, jbyteArray);
  TrustAnchor (::java::lang::String *, ::java::security::PublicKey *, jbyteArray);
  virtual ::java::security::cert::X509Certificate *getTrustedCert () { return trustedCert; }
  virtual ::java::lang::String *getCAName ();
  virtual ::java::security::PublicKey *getCAPublicKey () { return caKey; }
  virtual jbyteArray getNameConstraints ();
  virtual ::java::lang::String *toString ();
private:
  ::gnu::java::security::x509::X500DistinguishedName * __attribute__((aligned(__alignof__( ::java::lang::Object )))) caName;
  ::java::security::PublicKey *caKey;
  ::java::security::cert::X509Certificate *trustedCert;
  jbyteArray nameConstraints;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_security_cert_TrustAnchor__ */
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_security_x509_X509Certificate__
#define __gnu_java_security_x509_X509Certificate__

#pragma interface

#include <java/security/cert/X509Certificate.h>
#include <gcj/array.h>

extern "Java"
{
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
    namespace security
    {
      class Signature;
      class Principal;
      class PublicKey;
    }
    namespace math
    {
      class BigInteger;
    }
  }
  namespace gnu
  {
    namespace java
    {
      namespace security
      {
        namespace der
        {
          class BitString;
        }
        namespace x509
        {
          class X509Certificate;
          namespace ext
          {
            class Extension;
          }
          class X500DistinguishedName;
        }
        class OID;
      }
    }
  }
}

class gnu::java::security::x509::X509Certificate : public ::java::security::cert::X509Certificate
{
public:
  X509Certificate (::java::io::InputStream *);
public:  // actually protected
  X509Certificate ();
public:
  virtual void checkValidity ();
  virtual void checkValidity (::java::util::Date *);
  virtual jint getVersion () { return version; }
  virtual ::java::math::BigInteger *getSerialNumber () { return serialNo; }
  virtual ::java::security::Principal *getIssuerDN () { return reinterpret_cast< ::java::security::Principal *> (issuer); }
  virtual ::javax::security::auth::x500::X500Principal *getIssuerX500Principal ();
  virtual ::java::security::Principal *getSubjectDN () { return reinterpret_cast< ::java::security::Principal *> (subject); }
  virtual ::javax::security::auth::x500::X500Principal *getSubjectX500Principal ();
  virtual ::java::util::Date *getNotBefore ();
  virtual ::java::util::Date *getNotAfter ();
  virtual jbyteArray getTBSCertificate ();
  virtual jbyteArray getSignature ();
  virtual ::java::lang::String *getSigAlgName ();
  virtual ::java::lang::String *getSigAlgOID ();
  virtual jbyteArray getSigAlgParams ();
  virtual jbooleanArray getIssuerUniqueID ();
  virtual jbooleanArray getSubjectUniqueID ();
  virtual jbooleanArray getKeyUsage ();
  virtual ::java::util::List *getExtendedKeyUsage ();
  virtual jint getBasicConstraints ();
  virtual ::java::util::Collection *getSubjectAlternativeNames ();
  virtual ::java::util::Collection *getIssuerAlternativeNames ();
  virtual jboolean hasUnsupportedCriticalExtension ();
  virtual ::java::util::Set *getCriticalExtensionOIDs ();
  virtual ::java::util::Set *getNonCriticalExtensionOIDs ();
  virtual jbyteArray getExtensionValue (::java::lang::String *);
  virtual ::gnu::java::security::x509::ext::Extension *getExtension (::gnu::java::security::OID *);
  virtual ::java::util::Collection *getExtensions ();
  virtual jbyteArray getEncoded ();
  virtual void verify (::java::security::PublicKey *);
  virtual void verify (::java::security::PublicKey *, ::java::lang::String *);
  virtual ::java::lang::String *toString ();
  virtual ::java::security::PublicKey *getPublicKey () { return subjectKey; }
  virtual jboolean equals (::java::lang::Object *);
private:
  void doVerify (::java::security::Signature *, ::java::security::PublicKey *);
  void parse (::java::io::InputStream *);
  static ::java::util::logging::Logger *logger;
public:  // actually protected
  static ::gnu::java::security::OID *ID_DSA;
  static ::gnu::java::security::OID *ID_DSA_WITH_SHA1;
  static ::gnu::java::security::OID *ID_RSA;
  static ::gnu::java::security::OID *ID_RSA_WITH_MD2;
  static ::gnu::java::security::OID *ID_RSA_WITH_MD5;
  static ::gnu::java::security::OID *ID_RSA_WITH_SHA1;
  static ::gnu::java::security::OID *ID_ECDSA_WITH_SHA1;
  jbyteArray __attribute__((aligned(__alignof__( ::java::security::cert::X509Certificate ))))  encoded;
  jbyteArray tbsCertBytes;
  jint version;
  ::java::math::BigInteger *serialNo;
  ::gnu::java::security::OID *algId;
  jbyteArray algVal;
  ::gnu::java::security::x509::X500DistinguishedName *issuer;
  ::java::util::Date *notBefore;
  ::java::util::Date *notAfter;
  ::gnu::java::security::x509::X500DistinguishedName *subject;
  ::java::security::PublicKey *subjectKey;
  ::gnu::java::security::der::BitString *issuerUniqueId;
  ::gnu::java::security::der::BitString *subjectUniqueId;
  ::java::util::Map *extensions;
  ::gnu::java::security::OID *sigAlgId;
  jbyteArray sigAlgVal;
  jbyteArray signature;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_security_x509_X509Certificate__ */

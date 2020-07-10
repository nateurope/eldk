// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_security_cert_X509CertBridge__
#define __javax_security_cert_X509CertBridge__

#pragma interface

#include <javax/security/cert/X509Certificate.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace security
    {
      namespace cert
      {
        class X509CertBridge;
      }
    }
  }
  namespace java
  {
    namespace math
    {
      class BigInteger;
    }
    namespace security
    {
      class Principal;
      class PublicKey;
      namespace cert
      {
        class X509Certificate;
      }
    }
  }
}

class javax::security::cert::X509CertBridge : public ::javax::security::cert::X509Certificate
{
public: // actually package-private
  X509CertBridge (::java::security::cert::X509Certificate *);
public:
  virtual jbyteArray getEncoded ();
  virtual void verify (::java::security::PublicKey *);
  virtual void verify (::java::security::PublicKey *, ::java::lang::String *);
  virtual ::java::lang::String *toString ();
  virtual ::java::security::PublicKey *getPublicKey ();
  virtual void checkValidity ();
  virtual void checkValidity (::java::util::Date *);
  virtual jint getVersion ();
  virtual ::java::math::BigInteger *getSerialNumber ();
  virtual ::java::security::Principal *getIssuerDN ();
  virtual ::java::security::Principal *getSubjectDN ();
  virtual ::java::util::Date *getNotBefore ();
  virtual ::java::util::Date *getNotAfter ();
  virtual ::java::lang::String *getSigAlgName ();
  virtual ::java::lang::String *getSigAlgOID ();
  virtual jbyteArray getSigAlgParams ();
private:
  ::java::security::cert::X509Certificate * __attribute__((aligned(__alignof__( ::javax::security::cert::X509Certificate )))) cert;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_security_cert_X509CertBridge__ */
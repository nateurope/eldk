// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_security_cert_CertificateEncodingException__
#define __java_security_cert_CertificateEncodingException__

#pragma interface

#include <java/security/cert/CertificateException.h>

extern "Java"
{
  namespace java
  {
    namespace security
    {
      namespace cert
      {
        class CertificateEncodingException;
      }
    }
  }
}

class java::security::cert::CertificateEncodingException : public ::java::security::cert::CertificateException
{
public:
  CertificateEncodingException ();
  CertificateEncodingException (::java::lang::String *);
  CertificateEncodingException (::java::lang::String *, ::java::lang::Throwable *);
  CertificateEncodingException (::java::lang::Throwable *);
private:
  static const jlong serialVersionUID = 6219492851589449162LL;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_security_cert_CertificateEncodingException__ */
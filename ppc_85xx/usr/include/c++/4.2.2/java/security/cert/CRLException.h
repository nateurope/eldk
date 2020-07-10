// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_security_cert_CRLException__
#define __java_security_cert_CRLException__

#pragma interface

#include <java/security/GeneralSecurityException.h>

extern "Java"
{
  namespace java
  {
    namespace security
    {
      namespace cert
      {
        class CRLException;
      }
    }
  }
}

class java::security::cert::CRLException : public ::java::security::GeneralSecurityException
{
public:
  CRLException ();
  CRLException (::java::lang::String *);
  CRLException (::java::lang::String *, ::java::lang::Throwable *);
  CRLException (::java::lang::Throwable *);
private:
  static const jlong serialVersionUID = -6694728944094197147LL;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_security_cert_CRLException__ */
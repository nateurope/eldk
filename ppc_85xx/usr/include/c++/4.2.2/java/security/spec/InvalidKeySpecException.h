// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_security_spec_InvalidKeySpecException__
#define __java_security_spec_InvalidKeySpecException__

#pragma interface

#include <java/security/GeneralSecurityException.h>

extern "Java"
{
  namespace java
  {
    namespace security
    {
      namespace spec
      {
        class InvalidKeySpecException;
      }
    }
  }
}

class java::security::spec::InvalidKeySpecException : public ::java::security::GeneralSecurityException
{
public:
  InvalidKeySpecException ();
  InvalidKeySpecException (::java::lang::String *);
  InvalidKeySpecException (::java::lang::String *, ::java::lang::Throwable *);
  InvalidKeySpecException (::java::lang::Throwable *);
private:
  static const jlong serialVersionUID = 3546139293998810778LL;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_security_spec_InvalidKeySpecException__ */

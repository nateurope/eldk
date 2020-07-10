// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_security_x509_ext_CRLNumber__
#define __gnu_java_security_x509_ext_CRLNumber__

#pragma interface

#include <gnu/java/security/x509/ext/Extension$Value.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
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
        namespace x509
        {
          namespace ext
          {
            class CRLNumber;
          }
        }
        class OID;
      }
    }
  }
}

class gnu::java::security::x509::ext::CRLNumber : public ::gnu::java::security::x509::ext::Extension$Value
{
public:
  CRLNumber (jbyteArray);
  CRLNumber (::java::math::BigInteger *);
  virtual ::java::math::BigInteger *getNumber () { return number; }
  virtual jbyteArray getEncoded ();
  virtual ::java::lang::String *toString ();
  static ::gnu::java::security::OID *ID;
private:
  ::java::math::BigInteger * __attribute__((aligned(__alignof__( ::gnu::java::security::x509::ext::Extension$Value )))) number;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_security_x509_ext_CRLNumber__ */

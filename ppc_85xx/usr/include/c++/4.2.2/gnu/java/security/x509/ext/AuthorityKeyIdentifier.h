// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_security_x509_ext_AuthorityKeyIdentifier__
#define __gnu_java_security_x509_ext_AuthorityKeyIdentifier__

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
            class AuthorityKeyIdentifier;
            class GeneralNames;
          }
        }
        class OID;
      }
    }
  }
}

class gnu::java::security::x509::ext::AuthorityKeyIdentifier : public ::gnu::java::security::x509::ext::Extension$Value
{
public:
  AuthorityKeyIdentifier (jbyteArray);
  virtual jbyteArray getKeyIdentifier ();
  virtual ::gnu::java::security::x509::ext::GeneralNames *getAuthorityCertIssuer () { return authorityCertIssuer; }
  virtual ::java::math::BigInteger *getAuthorityCertSerialNumber () { return authorityCertSerialNumber; }
  virtual ::java::lang::String *toString ();
  static ::gnu::java::security::OID *ID;
private:
  jbyteArray __attribute__((aligned(__alignof__( ::gnu::java::security::x509::ext::Extension$Value ))))  keyIdentifier;
  ::gnu::java::security::x509::ext::GeneralNames *authorityCertIssuer;
  ::java::math::BigInteger *authorityCertSerialNumber;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_security_x509_ext_AuthorityKeyIdentifier__ */

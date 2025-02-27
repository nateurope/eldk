// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_security_x509_ext_CertificatePolicies__
#define __gnu_java_security_x509_ext_CertificatePolicies__

#pragma interface

#include <gnu/java/security/x509/ext/Extension$Value.h>
#include <gcj/array.h>

extern "Java"
{
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
            class CertificatePolicies;
          }
        }
        class OID;
      }
    }
  }
}

class gnu::java::security::x509::ext::CertificatePolicies : public ::gnu::java::security::x509::ext::Extension$Value
{
public:
  CertificatePolicies (jbyteArray);
  CertificatePolicies (::java::util::List *, ::java::util::Map *);
  virtual ::java::util::List *getPolicies () { return policies; }
  virtual ::java::util::List *getPolicyQualifierInfos (::gnu::java::security::OID *);
  virtual jbyteArray getEncoded ();
  virtual ::java::lang::String *toString ();
  static ::gnu::java::security::OID *ID;
private:
  ::java::util::List * __attribute__((aligned(__alignof__( ::gnu::java::security::x509::ext::Extension$Value )))) policies;
  ::java::util::Map *policyQualifierInfos;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_security_x509_ext_CertificatePolicies__ */

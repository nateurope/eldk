// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_security_x509_X509CertSelectorImpl__
#define __gnu_java_security_x509_X509CertSelectorImpl__

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
        namespace x509
        {
          class X509CertSelectorImpl;
        }
      }
    }
  }
  namespace java
  {
    namespace security
    {
      namespace cert
      {
        class Certificate;
      }
      class Principal;
    }
  }
}

class gnu::java::security::x509::X509CertSelectorImpl : public ::java::lang::Object
{
public:
  X509CertSelectorImpl ();
  virtual void addIssuerName (jbyteArray);
  virtual void addIssuerName (::java::lang::String *);
  virtual void addIssuerName (::java::security::Principal *);
  virtual ::java::util::Collection *getIssuerNames ();
  virtual void addSubjectName (jbyteArray);
  virtual void addSubjectName (::java::lang::String *);
  virtual void addSubjectName (::java::security::Principal *);
  virtual ::java::util::Collection *getSubjectNames ();
  virtual ::java::lang::Object *clone ();
  virtual jboolean match (::java::security::cert::Certificate *);
private:
  ::java::util::Set * __attribute__((aligned(__alignof__( ::java::lang::Object )))) issuerNames;
  ::java::util::Set *subjectNames;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_security_x509_X509CertSelectorImpl__ */

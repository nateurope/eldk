// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_security_x509_ext_ExtendedKeyUsage__
#define __gnu_java_security_x509_ext_ExtendedKeyUsage__

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
            class ExtendedKeyUsage;
          }
        }
        class OID;
      }
    }
  }
}

class gnu::java::security::x509::ext::ExtendedKeyUsage : public ::gnu::java::security::x509::ext::Extension$Value
{
public:
  ExtendedKeyUsage (jbyteArray);
  virtual ::java::util::List *getPurposeIds ();
  virtual ::java::lang::String *toString ();
  static ::gnu::java::security::OID *ID;
private:
  ::java::util::List * __attribute__((aligned(__alignof__( ::gnu::java::security::x509::ext::Extension$Value )))) purposeIds;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_security_x509_ext_ExtendedKeyUsage__ */

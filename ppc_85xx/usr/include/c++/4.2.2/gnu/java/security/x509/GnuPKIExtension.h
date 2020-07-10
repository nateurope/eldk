// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_security_x509_GnuPKIExtension__
#define __gnu_java_security_x509_GnuPKIExtension__

#pragma interface

#include <java/lang/Object.h>

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
          class GnuPKIExtension;
          namespace ext
          {
            class Extension;
          }
        }
        class OID;
      }
    }
  }
}

class gnu::java::security::x509::GnuPKIExtension : public ::java::lang::Object
{
public:
  virtual ::gnu::java::security::x509::ext::Extension *getExtension (::gnu::java::security::OID *) = 0;
  virtual ::java::util::Collection *getExtensions () = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __gnu_java_security_x509_GnuPKIExtension__ */

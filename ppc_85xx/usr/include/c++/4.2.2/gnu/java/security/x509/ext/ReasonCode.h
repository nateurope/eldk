// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_security_x509_ext_ReasonCode__
#define __gnu_java_security_x509_ext_ReasonCode__

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
            class ReasonCode;
          }
        }
        class OID;
      }
    }
  }
}

class gnu::java::security::x509::ext::ReasonCode : public ::gnu::java::security::x509::ext::Extension$Value
{
public:
  ReasonCode (jbyteArray);
  virtual jint getReasonCode () { return reason; }
  virtual ::java::lang::String *toString ();
  static ::gnu::java::security::OID *ID;
  jint __attribute__((aligned(__alignof__( ::gnu::java::security::x509::ext::Extension$Value ))))  reason;

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_security_x509_ext_ReasonCode__ */

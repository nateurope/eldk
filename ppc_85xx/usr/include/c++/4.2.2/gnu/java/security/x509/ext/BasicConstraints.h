// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_security_x509_ext_BasicConstraints__
#define __gnu_java_security_x509_ext_BasicConstraints__

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
            class BasicConstraints;
          }
        }
        class OID;
      }
    }
  }
}

class gnu::java::security::x509::ext::BasicConstraints : public ::gnu::java::security::x509::ext::Extension$Value
{
public:
  BasicConstraints (jbyteArray);
  BasicConstraints (jboolean, jint);
  virtual jboolean isCA () { return ca; }
  virtual jint getPathLengthConstraint () { return pathLenConstraint; }
  virtual jbyteArray getEncoded ();
  virtual ::java::lang::String *toString ();
  static ::gnu::java::security::OID *ID;
private:
  jboolean __attribute__((aligned(__alignof__( ::gnu::java::security::x509::ext::Extension$Value ))))  ca;
  jint pathLenConstraint;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_security_x509_ext_BasicConstraints__ */

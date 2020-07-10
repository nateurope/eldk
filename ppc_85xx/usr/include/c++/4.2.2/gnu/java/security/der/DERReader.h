// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_security_der_DERReader__
#define __gnu_java_security_der_DERReader__

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
        namespace der
        {
          class DERReader;
          class DERValue;
        }
      }
    }
  }
}

class gnu::java::security::der::DERReader : public ::java::lang::Object
{
public:
  DERReader (jbyteArray);
  DERReader (jbyteArray, jint, jint);
  DERReader (::java::io::InputStream *);
  static ::gnu::java::security::der::DERValue *read (jbyteArray);
  virtual void skip (jint);
  virtual ::gnu::java::security::der::DERValue *read ();
public:  // actually protected
  virtual jint readLength ();
private:
  ::java::lang::Object *readUniversal (jint, jint);
  static ::java::lang::String *makeString (jint, jbyteArray);
  static ::java::lang::String *fromIso88591 (jbyteArray);
  static ::java::lang::String *fromUtf16Be (jbyteArray);
  static ::java::lang::String *fromUtf8 (jbyteArray);
  ::java::util::Date *makeTime (jint, jbyteArray);
public:  // actually protected
  ::java::io::InputStream * __attribute__((aligned(__alignof__( ::java::lang::Object )))) in;
  ::java::io::ByteArrayOutputStream *encBuf;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_security_der_DERReader__ */
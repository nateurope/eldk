// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_security_der_DERValue__
#define __gnu_java_security_der_DERValue__

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
          class DERValue;
        }
      }
    }
  }
}

class gnu::java::security::der::DERValue : public ::java::lang::Object
{
public:
  DERValue (jint, jint, ::java::lang::Object *, jbyteArray);
  DERValue (jint, ::java::lang::Object *);
  virtual jint getExternalTag ();
  virtual jint getTag () { return tag; }
  virtual jint getTagClass () { return tagClass; }
  virtual jboolean isConstructed () { return constructed; }
  virtual jint getLength ();
  virtual ::java::lang::Object *getValue () { return value; }
  virtual ::java::lang::Object *getValueAs (jint);
  virtual jbyteArray getEncoded ();
  virtual jint getEncodedLength ();
  virtual ::java::lang::String *toString ();
private:
  jint __attribute__((aligned(__alignof__( ::java::lang::Object ))))  tagClass;
  jboolean constructed;
  jint tag;
  jint length;
  ::java::lang::Object *value;
  jbyteArray encoded;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_security_der_DERValue__ */

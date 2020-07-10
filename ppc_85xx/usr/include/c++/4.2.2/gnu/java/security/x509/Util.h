// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_security_x509_Util__
#define __gnu_java_security_x509_Util__

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
          class Util;
        }
      }
    }
  }
}

class gnu::java::security::x509::Util : public ::java::lang::Object
{
public:
  static ::java::lang::String *toHexString (jbyteArray, jint, jint);
  static ::java::lang::String *toHexString (jbyteArray);
  static ::java::lang::String *toHexString (jbyteArray, jint, jint, jchar);
  static ::java::lang::String *toHexString (jbyteArray, jchar);
  static ::java::lang::String *hexDump (jbyteArray, jint, jint, ::java::lang::String *);
  static ::java::lang::String *hexDump (jbyteArray, ::java::lang::String *);
  static ::java::lang::String *formatInt (jint, jint, jint);
  static jbyteArray toByteArray (::java::lang::String *);
  Util ();
  static ::java::lang::String *HEX;

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_security_x509_Util__ */

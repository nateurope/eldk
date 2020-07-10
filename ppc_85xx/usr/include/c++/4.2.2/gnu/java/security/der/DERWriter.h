// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_security_der_DERWriter__
#define __gnu_java_security_der_DERWriter__

#pragma interface

#include <java/lang/Object.h>
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
        class OID;
        namespace der
        {
          class DERWriter;
          class BitString;
          class DERValue;
        }
      }
    }
  }
}

class gnu::java::security::der::DERWriter : public ::java::lang::Object
{
private:
  DERWriter ();
public:
  static jint write (::java::io::OutputStream *, ::gnu::java::security::der::DERValue *);
  static jint definiteEncodingSize (jint);
private:
  static jint writeBoolean (::java::io::OutputStream *, ::java::lang::Boolean *);
  static jint writeInteger (::java::io::OutputStream *, ::java::math::BigInteger *);
  static jint writeSequence (::java::io::OutputStream *, ::java::util::List *);
  static jint writeSet (::java::io::OutputStream *, ::java::util::Set *);
  static jint writeOID (::java::io::OutputStream *, ::gnu::java::security::OID *);
  static jint writeBitString (::java::io::OutputStream *, ::gnu::java::security::der::BitString *);
  static jint writeString (::java::io::OutputStream *, jint, ::java::lang::String *);
  static jbyteArray toIso88591 (::java::lang::String *);
  static jbyteArray toUtf16Be (::java::lang::String *);
  static jbyteArray toUtf8 (::java::lang::String *);
  static jint writeDate (::java::io::OutputStream *, jint, ::java::util::Date *);
public: // actually package-private
  static void writeLength (::java::io::OutputStream *, jint);
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_security_der_DERWriter__ */
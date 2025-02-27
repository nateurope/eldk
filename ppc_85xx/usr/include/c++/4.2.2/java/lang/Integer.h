// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_lang_Integer__
#define __java_lang_Integer__

#pragma interface

#include <java/lang/Number.h>
#include <gcj/array.h>

class java::lang::Integer : public ::java::lang::Number
{
public:
  Integer (jint);
  Integer (::java::lang::String *);
  static ::java::lang::String *toString (jint, jint);
  static ::java::lang::String *toHexString (jint);
  static ::java::lang::String *toOctalString (jint);
  static ::java::lang::String *toBinaryString (jint);
  static ::java::lang::String *toString (jint);
  static jint parseInt (::java::lang::String *, jint);
  static jint parseInt (::java::lang::String *);
  static ::java::lang::Integer *valueOf (::java::lang::String *, jint);
  static ::java::lang::Integer *valueOf (::java::lang::String *);
  static ::java::lang::Integer *valueOf (jint);
  virtual jbyte byteValue ();
  virtual jshort shortValue ();
  virtual jint intValue () { return value; }
  virtual jlong longValue ();
  virtual jfloat floatValue ();
  virtual jdouble doubleValue ();
  virtual ::java::lang::String *toString ();
  virtual jint hashCode () { return value; }
  virtual jboolean equals (::java::lang::Object *);
  static ::java::lang::Integer *getInteger (::java::lang::String *);
  static ::java::lang::Integer *getInteger (::java::lang::String *, jint);
  static ::java::lang::Integer *getInteger (::java::lang::String *, ::java::lang::Integer *);
  static ::java::lang::Integer *decode (::java::lang::String *);
  virtual jint compareTo (::java::lang::Integer *);
  virtual jint compareTo (::java::lang::Object *);
  static jint bitCount (jint);
  static jint rotateLeft (jint, jint);
  static jint rotateRight (jint, jint);
  static jint highestOneBit (jint);
  static jint numberOfLeadingZeros (jint);
  static jint lowestOneBit (jint);
  static jint numberOfTrailingZeros (jint);
  static jint signum (jint);
  static jint reverseBytes (jint);
  static jint reverse (jint);
public: // actually package-private
  static ::java::lang::String *toUnsignedString (jint, jint);
  static jint parseInt (::java::lang::String *, jint, jboolean);
private:
  static const jlong serialVersionUID = 1360826667806852920LL;
public:
  static const jint MIN_VALUE = -2147483647L - 1;
  static const jint MAX_VALUE = 2147483647L;
  static ::java::lang::Class *TYPE;
  static const jint SIZE = 32L;
private:
  static const jint MIN_CACHE = -128L;
  static const jint MAX_CACHE = 127L;
  static JArray< ::java::lang::Integer *> *intCache;
  jint __attribute__((aligned(__alignof__( ::java::lang::Number ))))  value;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_lang_Integer__ */

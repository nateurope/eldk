// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_font_NumericShaper__
#define __java_awt_font_NumericShaper__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace font
      {
        class NumericShaper;
      }
    }
  }
}

class java::awt::font::NumericShaper : public ::java::lang::Object
{
private:
  NumericShaper (jint, jint);
public:
  virtual jint getRanges ();
  virtual jboolean isContextual ();
  virtual void shape (jcharArray, jint, jint);
private:
  jint classify (::java::lang::Character$UnicodeBlock *);
public:
  virtual void shape (jcharArray, jint, jint, jint);
  virtual jboolean equals (::java::lang::Object *);
  virtual jint hashCode ();
  virtual ::java::lang::String *toString ();
  static ::java::awt::font::NumericShaper *getShaper (jint);
  static ::java::awt::font::NumericShaper *getContextualShaper (jint);
  static ::java::awt::font::NumericShaper *getContextualShaper (jint, jint);
private:
  static const jlong serialVersionUID = -8022764705923730308LL;
public:
  static const jint ALL_RANGES = 524287L;
  static const jint ARABIC = 2L;
  static const jint BENGALI = 16L;
  static const jint DEVANAGARI = 8L;
  static const jint EASTERN_ARABIC = 4L;
  static const jint ETHIOPIC = 65536L;
  static const jint EUROPEAN = 1L;
  static const jint GUJARATI = 64L;
  static const jint GURMUKHI = 32L;
  static const jint KANNADA = 1024L;
  static const jint KHMER = 131072L;
  static const jint LAO = 8192L;
  static const jint MALAYALAM = 2048L;
  static const jint MONGOLIAN = 262144L;
  static const jint MYANMAR = 32768L;
  static const jint ORIYA = 128L;
  static const jint TAMIL = 256L;
  static const jint TELUGU = 512L;
  static const jint THAI = 4096L;
  static const jint TIBETAN = 16384L;
private:
  static jcharArray zeroDigits;
  jint __attribute__((aligned(__alignof__( ::java::lang::Object ))))  key;
  jint mask;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_awt_font_NumericShaper__ */

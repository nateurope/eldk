// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_FormatFlagsConversionMismatchException__
#define __java_util_FormatFlagsConversionMismatchException__

#pragma interface

#include <java/util/IllegalFormatException.h>

class java::util::FormatFlagsConversionMismatchException : public ::java::util::IllegalFormatException
{
public:
  FormatFlagsConversionMismatchException (::java::lang::String *, jchar);
  virtual jchar getConversion () { return c; }
  virtual ::java::lang::String *getFlags () { return f; }
private:
  static const jlong serialVersionUID = 19120414LL;
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::util::IllegalFormatException )))) f;
  jchar c;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_util_FormatFlagsConversionMismatchException__ */

// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_UnknownFormatConversionException__
#define __java_util_UnknownFormatConversionException__

#pragma interface

#include <java/util/IllegalFormatException.h>

class java::util::UnknownFormatConversionException : public ::java::util::IllegalFormatException
{
public:
  UnknownFormatConversionException (::java::lang::String *);
  virtual ::java::lang::String *getConversion () { return s; }
private:
  static const jlong serialVersionUID = 19060418LL;
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::util::IllegalFormatException )))) s;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_util_UnknownFormatConversionException__ */

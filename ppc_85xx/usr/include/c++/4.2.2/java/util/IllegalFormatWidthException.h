// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_IllegalFormatWidthException__
#define __java_util_IllegalFormatWidthException__

#pragma interface

#include <java/util/IllegalFormatException.h>

class java::util::IllegalFormatWidthException : public ::java::util::IllegalFormatException
{
public:
  IllegalFormatWidthException (jint);
  virtual jint getWidth () { return w; }
private:
  static const jlong serialVersionUID = 16660902LL;
  jint __attribute__((aligned(__alignof__( ::java::util::IllegalFormatException ))))  w;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_util_IllegalFormatWidthException__ */

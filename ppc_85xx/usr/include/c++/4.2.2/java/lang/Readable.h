// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_lang_Readable__
#define __java_lang_Readable__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace nio
    {
      class CharBuffer;
    }
  }
}

class java::lang::Readable : public ::java::lang::Object
{
public:
  virtual jint read (::java::nio::CharBuffer *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_lang_Readable__ */

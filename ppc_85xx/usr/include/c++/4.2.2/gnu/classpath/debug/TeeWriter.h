// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_classpath_debug_TeeWriter__
#define __gnu_classpath_debug_TeeWriter__

#pragma interface

#include <java/io/Writer.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace classpath
    {
      namespace debug
      {
        class TeeWriter;
      }
    }
  }
}

class gnu::classpath::debug::TeeWriter : public ::java::io::Writer
{
public:
  TeeWriter (::java::io::Writer *, ::java::io::Writer *);
  virtual void write (jint);
  virtual void write (jcharArray, jint, jint);
  virtual void flush ();
  virtual void close ();
private:
  ::java::io::Writer * __attribute__((aligned(__alignof__( ::java::io::Writer )))) out;
  ::java::io::Writer *sink;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_classpath_debug_TeeWriter__ */

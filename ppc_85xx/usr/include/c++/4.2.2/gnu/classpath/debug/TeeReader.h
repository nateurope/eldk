// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_classpath_debug_TeeReader__
#define __gnu_classpath_debug_TeeReader__

#pragma interface

#include <java/io/Reader.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace classpath
    {
      namespace debug
      {
        class TeeReader;
      }
    }
  }
}

class gnu::classpath::debug::TeeReader : public ::java::io::Reader
{
public:
  TeeReader (::java::io::Reader *, ::java::io::Writer *);
  virtual jint read ();
  virtual jint read (jcharArray, jint, jint);
  virtual void close ();
  virtual jboolean markSupported ();
private:
  ::java::io::Reader * __attribute__((aligned(__alignof__( ::java::io::Reader )))) in;
  ::java::io::Writer *out;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_classpath_debug_TeeReader__ */

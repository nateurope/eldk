// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_classpath_debug_TeeInputStream__
#define __gnu_classpath_debug_TeeInputStream__

#pragma interface

#include <java/io/InputStream.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace classpath
    {
      namespace debug
      {
        class TeeInputStream;
      }
    }
  }
}

class gnu::classpath::debug::TeeInputStream : public ::java::io::InputStream
{
public:
  TeeInputStream (::java::io::InputStream *, ::java::io::OutputStream *);
  virtual jint read ();
  virtual jint read (jbyteArray, jint, jint);
  virtual void close ();
  virtual jboolean markSupported ();
private:
  ::java::io::InputStream * __attribute__((aligned(__alignof__( ::java::io::InputStream )))) in;
  ::java::io::OutputStream *out;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_classpath_debug_TeeInputStream__ */

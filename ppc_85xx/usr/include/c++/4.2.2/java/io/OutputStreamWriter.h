// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_io_OutputStreamWriter__
#define __java_io_OutputStreamWriter__

#pragma interface

#include <java/io/Writer.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace nio
    {
      namespace charset
      {
        class CharsetEncoder;
        class Charset;
      }
    }
  }
  namespace gnu
  {
    namespace gcj
    {
      namespace convert
      {
        class UnicodeToBytes;
      }
    }
  }
}

class java::io::OutputStreamWriter : public ::java::io::Writer
{
private:
  OutputStreamWriter (::java::io::OutputStream *, ::gnu::gcj::convert::UnicodeToBytes *);
public:
  OutputStreamWriter (::java::io::OutputStream *, ::java::lang::String *);
  OutputStreamWriter (::java::io::OutputStream *);
  OutputStreamWriter (::java::io::OutputStream *, ::java::nio::charset::Charset *);
  OutputStreamWriter (::java::io::OutputStream *, ::java::nio::charset::CharsetEncoder *);
  virtual void close ();
  virtual ::java::lang::String *getEncoding ();
  virtual void flush ();
  virtual void write (jcharArray, jint, jint);
private:
  void writeChars (jcharArray, jint, jint);
public:
  virtual void write (::java::lang::String *, jint, jint);
  virtual void write (jint);
public: // actually package-private
  ::java::io::BufferedOutputStream * __attribute__((aligned(__alignof__( ::java::io::Writer )))) out;
  ::gnu::gcj::convert::UnicodeToBytes *converter;
private:
  jcharArray work;
  jint wcount;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_io_OutputStreamWriter__ */

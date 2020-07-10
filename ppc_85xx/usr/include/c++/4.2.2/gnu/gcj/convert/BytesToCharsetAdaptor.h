// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_gcj_convert_BytesToCharsetAdaptor__
#define __gnu_gcj_convert_BytesToCharsetAdaptor__

#pragma interface

#include <gnu/gcj/convert/BytesToUnicode.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace gcj
    {
      namespace convert
      {
        class BytesToCharsetAdaptor;
      }
    }
  }
  namespace java
  {
    namespace nio
    {
      class ByteBuffer;
      namespace charset
      {
        class Charset;
        class CharsetDecoder;
      }
    }
  }
}

class gnu::gcj::convert::BytesToCharsetAdaptor : public ::gnu::gcj::convert::BytesToUnicode
{
public:
  BytesToCharsetAdaptor (::java::nio::charset::Charset *);
  BytesToCharsetAdaptor (::java::nio::charset::CharsetDecoder *);
  virtual ::java::lang::String *getName ();
  virtual jint read (jcharArray, jint, jint);
  virtual void done () { }
private:
  ::java::nio::charset::CharsetDecoder * __attribute__((aligned(__alignof__( ::gnu::gcj::convert::BytesToUnicode )))) decoder;
  ::java::nio::ByteBuffer *inBuf;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_gcj_convert_BytesToCharsetAdaptor__ */

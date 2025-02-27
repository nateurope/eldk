// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_nio_ChannelReader__
#define __gnu_java_nio_ChannelReader__

#pragma interface

#include <java/io/Reader.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace nio
      {
        class ChannelReader;
      }
    }
  }
  namespace java
  {
    namespace nio
    {
      class CharBuffer;
      class ByteBuffer;
      namespace charset
      {
        class CharsetDecoder;
      }
      namespace channels
      {
        class ReadableByteChannel;
      }
    }
  }
}

class gnu::java::nio::ChannelReader : public ::java::io::Reader
{
public:
  ChannelReader (::java::nio::channels::ReadableByteChannel *, ::java::nio::charset::CharsetDecoder *, jint);
  virtual jint read (jcharArray, jint, jint);
  virtual void close ();
private:
  static const jint DEFAULT_BUFFER_CAP = 8192L;
  ::java::nio::channels::ReadableByteChannel * __attribute__((aligned(__alignof__( ::java::io::Reader )))) channel;
  ::java::nio::charset::CharsetDecoder *decoder;
  ::java::nio::ByteBuffer *byteBuffer;
  ::java::nio::CharBuffer *charBuffer;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_nio_ChannelReader__ */

// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_nio_PipeImpl$SourceChannelImpl__
#define __gnu_java_nio_PipeImpl$SourceChannelImpl__

#pragma interface

#include <java/nio/channels/Pipe$SourceChannel.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace nio
    {
      class ByteBuffer;
      namespace channels
      {
        namespace spi
        {
          class SelectorProvider;
        }
      }
    }
  }
  namespace gnu
  {
    namespace java
    {
      namespace nio
      {
        class PipeImpl$SourceChannelImpl;
        class VMChannel;
      }
    }
  }
}

class gnu::java::nio::PipeImpl$SourceChannelImpl : public ::java::nio::channels::Pipe$SourceChannel
{
public:
  PipeImpl$SourceChannelImpl (::java::nio::channels::spi::SelectorProvider *, jint);
public:  // actually protected
  virtual void implCloseSelectableChannel ();
  virtual void implConfigureBlocking (jboolean);
public:
  virtual jint read (::java::nio::ByteBuffer *);
  virtual jlong read (JArray< ::java::nio::ByteBuffer *> *);
  virtual jlong read (JArray< ::java::nio::ByteBuffer *> *, jint, jint);
  virtual jint getNativeFD () { return native_fd; }
private:
  jint __attribute__((aligned(__alignof__( ::java::nio::channels::Pipe$SourceChannel ))))  native_fd;
  ::gnu::java::nio::VMChannel *vmch;

  friend class gnu_java_nio_PipeImpl$SourceChannelImpl;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_nio_PipeImpl$SourceChannelImpl__ */
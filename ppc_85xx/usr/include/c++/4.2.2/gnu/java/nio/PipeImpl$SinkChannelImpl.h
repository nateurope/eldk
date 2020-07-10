// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_nio_PipeImpl$SinkChannelImpl__
#define __gnu_java_nio_PipeImpl$SinkChannelImpl__

#pragma interface

#include <java/nio/channels/Pipe$SinkChannel.h>
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
        class PipeImpl$SinkChannelImpl;
        class VMChannel;
      }
    }
  }
}

class gnu::java::nio::PipeImpl$SinkChannelImpl : public ::java::nio::channels::Pipe$SinkChannel
{
public:
  PipeImpl$SinkChannelImpl (::java::nio::channels::spi::SelectorProvider *, jint);
public:  // actually protected
  virtual void implCloseSelectableChannel ();
  virtual void implConfigureBlocking (jboolean);
public:
  virtual jint write (::java::nio::ByteBuffer *);
  virtual jlong write (JArray< ::java::nio::ByteBuffer *> *);
  virtual jlong write (JArray< ::java::nio::ByteBuffer *> *, jint, jint);
  virtual jint getNativeFD () { return native_fd; }
private:
  jint __attribute__((aligned(__alignof__( ::java::nio::channels::Pipe$SinkChannel ))))  native_fd;
  ::gnu::java::nio::VMChannel *vmch;

  friend class gnu_java_nio_PipeImpl$SinkChannelImpl;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_nio_PipeImpl$SinkChannelImpl__ */

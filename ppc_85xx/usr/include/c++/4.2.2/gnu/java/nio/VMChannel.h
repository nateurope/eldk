// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_nio_VMChannel__
#define __gnu_java_nio_VMChannel__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace nio
    {
      class ByteBuffer;
    }
  }
  namespace gnu
  {
    namespace java
    {
      namespace nio
      {
        namespace channels
        {
          class FileChannelImpl;
        }
        class PipeImpl$SinkChannelImpl;
        class PipeImpl$SourceChannelImpl;
        class VMChannel;
      }
      namespace net
      {
        class PlainSocketImpl;
      }
    }
  }
}

class gnu::java::nio::VMChannel : public ::java::lang::Object
{
private:
  VMChannel (jint);
public:
  static ::gnu::java::nio::VMChannel *getVMChannel (::gnu::java::net::PlainSocketImpl *);
  static ::gnu::java::nio::VMChannel *getVMChannel (::gnu::java::nio::PipeImpl$SourceChannelImpl *);
  static ::gnu::java::nio::VMChannel *getVMChannel (::gnu::java::nio::PipeImpl$SinkChannelImpl *);
  static ::gnu::java::nio::VMChannel *getVMChannel (::gnu::java::nio::channels::FileChannelImpl *) { return 0; }
  virtual void setBlocking (jint, jboolean);
  virtual void setBlocking (jboolean);
public: // actually package-private
  virtual jint read (jint, ::java::nio::ByteBuffer *);
public:
  virtual jint read (::java::nio::ByteBuffer *);
public: // actually package-private
  virtual jlong readScattering (jint, JArray< ::java::nio::ByteBuffer *> *, jint, jint);
public:
  virtual jlong readScattering (JArray< ::java::nio::ByteBuffer *> *, jint, jint);
public: // actually package-private
  virtual jint write (jint, ::java::nio::ByteBuffer *);
public:
  virtual jint write (::java::nio::ByteBuffer *);
public: // actually package-private
  virtual jlong writeGathering (jint, JArray< ::java::nio::ByteBuffer *> *, jint, jint);
public:
  virtual jlong writeGathering (JArray< ::java::nio::ByteBuffer *> *, jint, jint);
private:
  jint __attribute__((aligned(__alignof__( ::java::lang::Object ))))  fd;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_nio_VMChannel__ */

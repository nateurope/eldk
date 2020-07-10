// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_nio_IntViewBufferImpl__
#define __java_nio_IntViewBufferImpl__

#pragma interface

#include <java/nio/IntBuffer.h>

extern "Java"
{
  namespace java
  {
    namespace nio
    {
      class IntViewBufferImpl;
      class IntBuffer;
      class ByteOrder;
      class ByteBuffer;
    }
  }
}

class java::nio::IntViewBufferImpl : public ::java::nio::IntBuffer
{
public: // actually package-private
  IntViewBufferImpl (::java::nio::ByteBuffer *, jint);
public:
  IntViewBufferImpl (::java::nio::ByteBuffer *, jint, jint, jint, jint, jint, jboolean, ::java::nio::ByteOrder *);
  virtual jint get ();
  virtual jint get (jint);
  virtual ::java::nio::IntBuffer *put (jint);
  virtual ::java::nio::IntBuffer *put (jint, jint);
  virtual ::java::nio::IntBuffer *compact ();
  virtual ::java::nio::IntBuffer *slice ();
public: // actually package-private
  virtual ::java::nio::IntBuffer *duplicate (jboolean);
public:
  virtual ::java::nio::IntBuffer *duplicate ();
  virtual ::java::nio::IntBuffer *asReadOnlyBuffer ();
  virtual jboolean isReadOnly () { return readOnly; }
  virtual jboolean isDirect ();
  virtual ::java::nio::ByteOrder *order () { return endian; }
private:
  jint __attribute__((aligned(__alignof__( ::java::nio::IntBuffer ))))  offset;
  ::java::nio::ByteBuffer *bb;
  jboolean readOnly;
  ::java::nio::ByteOrder *endian;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_nio_IntViewBufferImpl__ */

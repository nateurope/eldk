// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_nio_LongBufferImpl__
#define __java_nio_LongBufferImpl__

#pragma interface

#include <java/nio/LongBuffer.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace nio
    {
      class LongBufferImpl;
      class ByteOrder;
      class LongBuffer;
    }
  }
}

class java::nio::LongBufferImpl : public ::java::nio::LongBuffer
{
public: // actually package-private
  LongBufferImpl (jint);
  LongBufferImpl (jlongArray, jint, jint, jint, jint, jint, jboolean);
public:
  virtual jboolean isReadOnly () { return readOnly; }
  virtual ::java::nio::LongBuffer *slice ();
  virtual ::java::nio::LongBuffer *duplicate ();
  virtual ::java::nio::LongBuffer *asReadOnlyBuffer ();
  virtual ::java::nio::LongBuffer *compact ();
  virtual jboolean isDirect ();
  virtual jlong get ();
  virtual ::java::nio::LongBuffer *put (jlong);
  virtual jlong get (jint);
  virtual ::java::nio::LongBuffer *put (jint, jlong);
  virtual ::java::nio::ByteOrder *order ();
private:
  jboolean __attribute__((aligned(__alignof__( ::java::nio::LongBuffer ))))  readOnly;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_nio_LongBufferImpl__ */
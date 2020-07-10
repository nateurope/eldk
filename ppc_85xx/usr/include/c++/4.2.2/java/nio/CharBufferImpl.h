// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_nio_CharBufferImpl__
#define __java_nio_CharBufferImpl__

#pragma interface

#include <java/nio/CharBuffer.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace nio
    {
      class ByteOrder;
      class CharBuffer;
      class CharBufferImpl;
    }
  }
}

class java::nio::CharBufferImpl : public ::java::nio::CharBuffer
{
public: // actually package-private
  CharBufferImpl (jint);
  CharBufferImpl (jcharArray, jint, jint, jint, jint, jint, jboolean);
public:
  CharBufferImpl (::java::nio::CharBufferImpl *);
  virtual jboolean isReadOnly () { return readOnly; }
  virtual ::java::nio::CharBuffer *slice ();
  virtual ::java::nio::CharBuffer *duplicate ();
  virtual ::java::nio::CharBuffer *asReadOnlyBuffer ();
  virtual ::java::nio::CharBuffer *compact ();
  virtual jboolean isDirect ();
  virtual ::java::lang::CharSequence *subSequence (jint, jint);
  virtual jchar get ();
  virtual ::java::nio::CharBuffer *put (jchar);
  virtual jchar get (jint);
  virtual ::java::nio::CharBuffer *get (jcharArray, jint, jint);
  virtual ::java::nio::CharBuffer *put (jcharArray, jint, jint);
  virtual ::java::nio::CharBuffer *put (jint, jchar);
  virtual ::java::nio::ByteOrder *order ();
private:
  jboolean __attribute__((aligned(__alignof__( ::java::nio::CharBuffer ))))  readOnly;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_nio_CharBufferImpl__ */
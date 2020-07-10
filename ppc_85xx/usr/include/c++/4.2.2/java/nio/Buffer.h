// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_nio_Buffer__
#define __java_nio_Buffer__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace nio
    {
      class Buffer;
    }
  }
  namespace gnu
  {
    namespace gcj
    {
      class RawData;
    }
  }
}

class java::nio::Buffer : public ::java::lang::Object
{
public: // actually package-private
  Buffer (jint, jint, jint, jint);
public:
  virtual jint capacity () { return cap; }
  virtual ::java::nio::Buffer *clear ();
  virtual ::java::nio::Buffer *flip ();
  virtual jboolean hasRemaining ();
  virtual jboolean isReadOnly () = 0;
  virtual jint limit () { return limit__; }
  virtual ::java::nio::Buffer *limit (jint);
  virtual ::java::nio::Buffer *mark ();
  virtual jint position () { return pos; }
  virtual ::java::nio::Buffer *position (jint);
  virtual jint remaining ();
  virtual ::java::nio::Buffer *reset ();
  virtual ::java::nio::Buffer *rewind ();
public: // actually package-private
  virtual void checkForUnderflow ();
  virtual void checkForUnderflow (jint);
  virtual void checkForOverflow ();
  virtual void checkForOverflow (jint);
  virtual void checkIndex (jint);
  virtual void checkIfReadOnly ();
  static void checkArraySize (jint, jint, jint);
  jint __attribute__((aligned(__alignof__( ::java::lang::Object ))))  cap;
  jint limit__;
  jint pos;
  jint mark__;
  ::gnu::gcj::RawData *address;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_nio_Buffer__ */

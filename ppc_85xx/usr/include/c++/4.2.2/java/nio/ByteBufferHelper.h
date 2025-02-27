// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_nio_ByteBufferHelper__
#define __java_nio_ByteBufferHelper__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace nio
    {
      class ByteBufferHelper;
      class ByteOrder;
      class ByteBuffer;
    }
  }
}

class java::nio::ByteBufferHelper : public ::java::lang::Object
{
public:
  static jchar getChar (::java::nio::ByteBuffer *, ::java::nio::ByteOrder *);
  static void putChar (::java::nio::ByteBuffer *, jchar, ::java::nio::ByteOrder *);
  static jchar getChar (::java::nio::ByteBuffer *, jint, ::java::nio::ByteOrder *);
  static void putChar (::java::nio::ByteBuffer *, jint, jchar, ::java::nio::ByteOrder *);
  static jshort getShort (::java::nio::ByteBuffer *, ::java::nio::ByteOrder *);
  static void putShort (::java::nio::ByteBuffer *, jshort, ::java::nio::ByteOrder *);
  static jshort getShort (::java::nio::ByteBuffer *, jint, ::java::nio::ByteOrder *);
  static void putShort (::java::nio::ByteBuffer *, jint, jshort, ::java::nio::ByteOrder *);
  static jint getInt (::java::nio::ByteBuffer *, ::java::nio::ByteOrder *);
  static void putInt (::java::nio::ByteBuffer *, jint, ::java::nio::ByteOrder *);
  static jint getInt (::java::nio::ByteBuffer *, jint, ::java::nio::ByteOrder *);
  static void putInt (::java::nio::ByteBuffer *, jint, jint, ::java::nio::ByteOrder *);
  static jlong getLong (::java::nio::ByteBuffer *, ::java::nio::ByteOrder *);
  static void putLong (::java::nio::ByteBuffer *, jlong, ::java::nio::ByteOrder *);
  static jlong getLong (::java::nio::ByteBuffer *, jint, ::java::nio::ByteOrder *);
  static void putLong (::java::nio::ByteBuffer *, jint, jlong, ::java::nio::ByteOrder *);
  static jfloat getFloat (::java::nio::ByteBuffer *, ::java::nio::ByteOrder *);
  static void putFloat (::java::nio::ByteBuffer *, jfloat, ::java::nio::ByteOrder *);
  static jfloat getFloat (::java::nio::ByteBuffer *, jint, ::java::nio::ByteOrder *);
  static void putFloat (::java::nio::ByteBuffer *, jint, jfloat, ::java::nio::ByteOrder *);
  static jdouble getDouble (::java::nio::ByteBuffer *, ::java::nio::ByteOrder *);
  static void putDouble (::java::nio::ByteBuffer *, jdouble, ::java::nio::ByteOrder *);
  static jdouble getDouble (::java::nio::ByteBuffer *, jint, ::java::nio::ByteOrder *);
  static void putDouble (::java::nio::ByteBuffer *, jint, jdouble, ::java::nio::ByteOrder *);
public: // actually package-private
  ByteBufferHelper ();
public:

  static ::java::lang::Class class$;
};

#endif /* __java_nio_ByteBufferHelper__ */

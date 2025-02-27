// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_nio_channels_FileChannel__
#define __java_nio_channels_FileChannel__

#pragma interface

#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace nio
    {
      class ByteBuffer;
      class MappedByteBuffer;
      namespace channels
      {
        class ReadableByteChannel;
        class WritableByteChannel;
        class FileChannel;
        class FileLock;
        class FileChannel$MapMode;
      }
    }
  }
}

class java::nio::channels::FileChannel : public ::java::nio::channels::spi::AbstractInterruptibleChannel
{
public:  // actually protected
  FileChannel ();
public:
  virtual ::java::nio::MappedByteBuffer *map (::java::nio::channels::FileChannel$MapMode *, jlong, jlong) = 0;
  virtual jlong size () = 0;
  virtual jlong write (JArray< ::java::nio::ByteBuffer *> *);
  virtual jint write (::java::nio::ByteBuffer *) = 0;
  virtual jint write (::java::nio::ByteBuffer *, jlong) = 0;
  virtual jlong write (JArray< ::java::nio::ByteBuffer *> *, jint, jint) = 0;
  virtual jlong read (JArray< ::java::nio::ByteBuffer *> *, jint, jint) = 0;
  virtual jlong read (JArray< ::java::nio::ByteBuffer *> *);
  virtual jint read (::java::nio::ByteBuffer *) = 0;
  virtual jint read (::java::nio::ByteBuffer *, jlong) = 0;
public:  // actually protected
  virtual void implCloseChannel () = 0;
public:
  virtual void force (jboolean) = 0;
  virtual ::java::nio::channels::FileLock *lock ();
  virtual ::java::nio::channels::FileLock *lock (jlong, jlong, jboolean) = 0;
  virtual ::java::nio::channels::FileLock *tryLock ();
  virtual ::java::nio::channels::FileLock *tryLock (jlong, jlong, jboolean) = 0;
  virtual jlong position () = 0;
  virtual ::java::nio::channels::FileChannel *position (jlong) = 0;
  virtual jlong transferTo (jlong, jlong, ::java::nio::channels::WritableByteChannel *) = 0;
  virtual jlong transferFrom (::java::nio::channels::ReadableByteChannel *, jlong, jlong) = 0;
  virtual ::java::nio::channels::FileChannel *truncate (jlong) = 0;

  friend class java_nio_channels_FileChannel$MapMode;

  static ::java::lang::Class class$;
};

#endif /* __java_nio_channels_FileChannel__ */

// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_nio_channels_FileLock__
#define __java_nio_channels_FileLock__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace nio
    {
      namespace channels
      {
        class FileLock;
        class FileChannel;
      }
    }
  }
}

class java::nio::channels::FileLock : public ::java::lang::Object
{
public:  // actually protected
  FileLock (::java::nio::channels::FileChannel *, jlong, jlong, jboolean);
public:
  virtual jboolean isValid () = 0;
  virtual void release () = 0;
  virtual ::java::nio::channels::FileChannel *channel () { return channel__; }
  virtual jboolean isShared () { return shared; }
  virtual jboolean overlaps (jlong, jlong);
  virtual jlong position () { return position__; }
  virtual jlong size () { return size__; }
  virtual ::java::lang::String *toString ();
private:
  ::java::nio::channels::FileChannel * __attribute__((aligned(__alignof__( ::java::lang::Object )))) channel__;
  jlong position__;
  jlong size__;
  jboolean shared;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_nio_channels_FileLock__ */

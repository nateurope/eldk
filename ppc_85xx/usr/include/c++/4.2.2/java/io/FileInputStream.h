// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_io_FileInputStream__
#define __java_io_FileInputStream__

#pragma interface

#include <java/io/InputStream.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace nio
    {
      namespace channels
      {
        class FileChannel;
      }
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
      }
    }
  }
}

class java::io::FileInputStream : public ::java::io::InputStream
{
public:
  FileInputStream (::java::lang::String *);
  FileInputStream (::java::io::File *);
  FileInputStream (::java::io::FileDescriptor *);
public: // actually package-private
  FileInputStream (::gnu::java::nio::channels::FileChannelImpl *);
public:
  virtual jint available ();
  virtual void close ();
public:  // actually protected
  virtual void finalize () { }
public:
  virtual ::java::io::FileDescriptor *getFD ();
  virtual jint read ();
  virtual jint read (jbyteArray);
  virtual jint read (jbyteArray, jint, jint);
  virtual jlong skip (jlong);
  virtual ::java::nio::channels::FileChannel *getChannel ();
private:
  ::java::io::FileDescriptor * __attribute__((aligned(__alignof__( ::java::io::InputStream )))) fd;
  ::gnu::java::nio::channels::FileChannelImpl *ch;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_io_FileInputStream__ */

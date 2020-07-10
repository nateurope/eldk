// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_nio_channels_SelectionKey__
#define __java_nio_channels_SelectionKey__

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
        class Selector;
        class SelectionKey;
        class SelectableChannel;
      }
    }
  }
}

class java::nio::channels::SelectionKey : public ::java::lang::Object
{
public:  // actually protected
  SelectionKey ();
public:
  virtual ::java::lang::Object *attach (::java::lang::Object *);
  virtual ::java::lang::Object *attachment ();
  virtual jboolean isAcceptable ();
  virtual jboolean isConnectable ();
  virtual jboolean isReadable ();
  virtual jboolean isWritable ();
  virtual void cancel () = 0;
  virtual ::java::nio::channels::SelectableChannel *channel () = 0;
  virtual jint interestOps () = 0;
  virtual ::java::nio::channels::SelectionKey *interestOps (jint) = 0;
  virtual jboolean isValid () = 0;
  virtual jint readyOps () = 0;
  virtual ::java::nio::channels::Selector *selector () = 0;
  static const jint OP_ACCEPT = 16L;
  static const jint OP_CONNECT = 8L;
  static const jint OP_READ = 1L;
  static const jint OP_WRITE = 4L;
public: // actually package-private
  ::java::lang::Object * __attribute__((aligned(__alignof__( ::java::lang::Object )))) attached;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_nio_channels_SelectionKey__ */

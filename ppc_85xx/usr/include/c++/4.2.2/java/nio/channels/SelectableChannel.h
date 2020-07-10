// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_nio_channels_SelectableChannel__
#define __java_nio_channels_SelectableChannel__

#pragma interface

#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>

extern "Java"
{
  namespace java
  {
    namespace nio
    {
      namespace channels
      {
        namespace spi
        {
          class SelectorProvider;
        }
        class SelectionKey;
        class Selector;
        class SelectableChannel;
      }
    }
  }
}

class java::nio::channels::SelectableChannel : public ::java::nio::channels::spi::AbstractInterruptibleChannel
{
public:  // actually protected
  SelectableChannel ();
public:
  virtual ::java::lang::Object *blockingLock () = 0;
  virtual ::java::nio::channels::SelectableChannel *configureBlocking (jboolean) = 0;
  virtual jboolean isBlocking () = 0;
  virtual jboolean isRegistered () = 0;
  virtual ::java::nio::channels::SelectionKey *keyFor (::java::nio::channels::Selector *) = 0;
  virtual ::java::nio::channels::spi::SelectorProvider *provider () = 0;
  virtual ::java::nio::channels::SelectionKey *register$ (::java::nio::channels::Selector *, jint);
  virtual ::java::nio::channels::SelectionKey *register$ (::java::nio::channels::Selector *, jint, ::java::lang::Object *) = 0;
  virtual jint validOps () = 0;

  static ::java::lang::Class class$;
};

#endif /* __java_nio_channels_SelectableChannel__ */
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_nio_channels_Pipe$SinkChannel__
#define __java_nio_channels_Pipe$SinkChannel__

#pragma interface

#include <java/nio/channels/spi/AbstractSelectableChannel.h>

extern "Java"
{
  namespace java
  {
    namespace nio
    {
      namespace channels
      {
        class Pipe$SinkChannel;
        namespace spi
        {
          class SelectorProvider;
        }
      }
    }
  }
}

class java::nio::channels::Pipe$SinkChannel : public ::java::nio::channels::spi::AbstractSelectableChannel
{
public:  // actually protected
  Pipe$SinkChannel (::java::nio::channels::spi::SelectorProvider *);
public:
  virtual jint validOps ();

  friend class java_nio_channels_Pipe$SinkChannel;

  static ::java::lang::Class class$;
};

#endif /* __java_nio_channels_Pipe$SinkChannel__ */

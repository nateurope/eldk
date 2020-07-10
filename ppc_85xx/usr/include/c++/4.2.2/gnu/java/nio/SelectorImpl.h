// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_nio_SelectorImpl__
#define __gnu_java_nio_SelectorImpl__

#pragma interface

#include <java/nio/channels/spi/AbstractSelector.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace nio
      {
        class SelectorImpl;
      }
    }
  }
  namespace java
  {
    namespace nio
    {
      namespace channels
      {
        class SelectionKey;
        class SelectableChannel;
        class Selector;
        namespace spi
        {
          class AbstractSelectableChannel;
          class SelectorProvider;
        }
      }
    }
  }
}

class gnu::java::nio::SelectorImpl : public ::java::nio::channels::spi::AbstractSelector
{
public:
  SelectorImpl (::java::nio::channels::spi::SelectorProvider *);
public:  // actually protected
  virtual void finalize ();
  virtual void implCloseSelector ();
public:
  virtual ::java::util::Set *keys ();
  virtual jint selectNow ();
  virtual jint select ();
private:
  jintArray getFDsAsArray (jint);
public:
  virtual jint select (jlong);
  virtual ::java::util::Set *selectedKeys ();
  virtual ::java::nio::channels::Selector *wakeup ();
private:
  void deregisterCancelledKeys ();
public:  // actually protected
  virtual ::java::nio::channels::SelectionKey *register$ (::java::nio::channels::SelectableChannel *, jint, ::java::lang::Object *);
  virtual ::java::nio::channels::SelectionKey *register$ (::java::nio::channels::spi::AbstractSelectableChannel *, jint, ::java::lang::Object *);
private:
  ::java::util::Set * __attribute__((aligned(__alignof__( ::java::nio::channels::spi::AbstractSelector )))) keys__;
  ::java::util::Set *selected;
  ::java::lang::Object *selectThreadMutex;
  ::java::lang::Thread *selectThread;
  jboolean unhandledWakeup;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_nio_SelectorImpl__ */

// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_datatransfer_FlavorListener__
#define __java_awt_datatransfer_FlavorListener__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace datatransfer
      {
        class FlavorListener;
        class FlavorEvent;
      }
    }
  }
}

class java::awt::datatransfer::FlavorListener : public ::java::lang::Object
{
public:
  virtual void flavorsChanged (::java::awt::datatransfer::FlavorEvent *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_awt_datatransfer_FlavorListener__ */

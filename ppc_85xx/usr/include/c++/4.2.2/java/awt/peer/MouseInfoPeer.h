// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_peer_MouseInfoPeer__
#define __java_awt_peer_MouseInfoPeer__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace peer
      {
        class MouseInfoPeer;
      }
      class Window;
      class Point;
    }
  }
}

class java::awt::peer::MouseInfoPeer : public ::java::lang::Object
{
public:
  virtual jint fillPointWithCoords (::java::awt::Point *) = 0;
  virtual jboolean isWindowUnderMouse (::java::awt::Window *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_awt_peer_MouseInfoPeer__ */

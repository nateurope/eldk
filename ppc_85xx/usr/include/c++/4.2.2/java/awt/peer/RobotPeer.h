// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_peer_RobotPeer__
#define __java_awt_peer_RobotPeer__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace peer
      {
        class RobotPeer;
      }
      class Rectangle;
    }
  }
}

class java::awt::peer::RobotPeer : public ::java::lang::Object
{
public:
  virtual void mouseMove (jint, jint) = 0;
  virtual void mousePress (jint) = 0;
  virtual void mouseRelease (jint) = 0;
  virtual void mouseWheel (jint) = 0;
  virtual void keyPress (jint) = 0;
  virtual void keyRelease (jint) = 0;
  virtual jint getRGBPixel (jint, jint) = 0;
  virtual jintArray getRGBPixels (::java::awt::Rectangle *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_awt_peer_RobotPeer__ */

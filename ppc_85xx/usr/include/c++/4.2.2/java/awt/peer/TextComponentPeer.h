// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_peer_TextComponentPeer__
#define __java_awt_peer_TextComponentPeer__

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
        class TextComponentPeer;
      }
      namespace im
      {
        class InputMethodRequests;
      }
      class Rectangle;
    }
  }
}

class java::awt::peer::TextComponentPeer : public ::java::lang::Object
{
public:
  virtual jint getSelectionEnd () = 0;
  virtual jint getSelectionStart () = 0;
  virtual ::java::lang::String *getText () = 0;
  virtual void setText (::java::lang::String *) = 0;
  virtual void select (jint, jint) = 0;
  virtual void setEditable (jboolean) = 0;
  virtual jint getCaretPosition () = 0;
  virtual void setCaretPosition (jint) = 0;
  virtual jint getIndexAtPoint (jint, jint) = 0;
  virtual ::java::awt::Rectangle *getCharacterBounds (jint) = 0;
  virtual jlong filterEvents (jlong) = 0;
  virtual ::java::awt::im::InputMethodRequests *getInputMethodRequests () = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_awt_peer_TextComponentPeer__ */

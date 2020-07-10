// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_Caret__
#define __javax_swing_text_Caret__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class Graphics;
      class Point;
    }
  }
  namespace javax
  {
    namespace swing
    {
      namespace text
      {
        class Caret;
        class JTextComponent;
      }
      namespace event
      {
        class ChangeListener;
      }
    }
  }
}

class javax::swing::text::Caret : public ::java::lang::Object
{
public:
  virtual void addChangeListener (::javax::swing::event::ChangeListener *) = 0;
  virtual void removeChangeListener (::javax::swing::event::ChangeListener *) = 0;
  virtual void install (::javax::swing::text::JTextComponent *) = 0;
  virtual void deinstall (::javax::swing::text::JTextComponent *) = 0;
  virtual jint getBlinkRate () = 0;
  virtual void setBlinkRate (jint) = 0;
  virtual jint getDot () = 0;
  virtual void setDot (jint) = 0;
  virtual void moveDot (jint) = 0;
  virtual jint getMark () = 0;
  virtual ::java::awt::Point *getMagicCaretPosition () = 0;
  virtual void setMagicCaretPosition (::java::awt::Point *) = 0;
  virtual jboolean isSelectionVisible () = 0;
  virtual void setSelectionVisible (jboolean) = 0;
  virtual jboolean isVisible () = 0;
  virtual void setVisible (jboolean) = 0;
  virtual void paint (::java::awt::Graphics *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __javax_swing_text_Caret__ */

// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_LayeredHighlighter__
#define __javax_swing_text_LayeredHighlighter__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace text
      {
        class LayeredHighlighter;
        class View;
        class JTextComponent;
      }
    }
  }
  namespace java
  {
    namespace awt
    {
      class Shape;
      class Graphics;
    }
  }
}

class javax::swing::text::LayeredHighlighter : public ::java::lang::Object
{
public:
  virtual void paintLayeredHighlights (::java::awt::Graphics *, jint, jint, ::java::awt::Shape *, ::javax::swing::text::JTextComponent *, ::javax::swing::text::View *) = 0;
  LayeredHighlighter ();

  friend class javax_swing_text_LayeredHighlighter$LayerPainter;

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_text_LayeredHighlighter__ */

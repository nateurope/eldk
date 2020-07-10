// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_SystemColor__
#define __java_awt_SystemColor__

#pragma interface

#include <java/awt/Color.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class PaintContext;
      class RenderingHints;
      namespace geom
      {
        class AffineTransform;
        class Rectangle2D;
      }
      class Rectangle;
      namespace image
      {
        class ColorModel;
      }
      class SystemColor;
    }
  }
}

class java::awt::SystemColor : public ::java::awt::Color
{
private:
  SystemColor (jint);
public:
  virtual jint getRGB ();
  virtual ::java::awt::PaintContext *createContext (::java::awt::image::ColorModel *, ::java::awt::Rectangle *, ::java::awt::geom::Rectangle2D *, ::java::awt::geom::AffineTransform *, ::java::awt::RenderingHints *);
  virtual ::java::lang::String *toString ();
private:
  static const jlong serialVersionUID = 4503142729533789064LL;
public:
  static const jint DESKTOP = 0L;
  static const jint ACTIVE_CAPTION = 1L;
  static const jint ACTIVE_CAPTION_TEXT = 2L;
  static const jint ACTIVE_CAPTION_BORDER = 3L;
  static const jint INACTIVE_CAPTION = 4L;
  static const jint INACTIVE_CAPTION_TEXT = 5L;
  static const jint INACTIVE_CAPTION_BORDER = 6L;
  static const jint WINDOW = 7L;
  static const jint WINDOW_BORDER = 8L;
  static const jint WINDOW_TEXT = 9L;
  static const jint MENU = 10L;
  static const jint MENU_TEXT = 11L;
  static const jint TEXT = 12L;
  static const jint TEXT_TEXT = 13L;
  static const jint TEXT_HIGHLIGHT = 14L;
  static const jint TEXT_HIGHLIGHT_TEXT = 15L;
  static const jint TEXT_INACTIVE_TEXT = 16L;
  static const jint CONTROL = 17L;
  static const jint CONTROL_TEXT = 18L;
  static const jint CONTROL_HIGHLIGHT = 19L;
  static const jint CONTROL_LT_HIGHLIGHT = 20L;
  static const jint CONTROL_SHADOW = 21L;
  static const jint CONTROL_DK_SHADOW = 22L;
  static const jint SCROLLBAR = 23L;
  static const jint INFO = 24L;
  static const jint INFO_TEXT = 25L;
  static const jint NUM_COLORS = 26L;
private:
  static jintArray colors;
public:
  static ::java::awt::SystemColor *desktop;
  static ::java::awt::SystemColor *activeCaption;
  static ::java::awt::SystemColor *activeCaptionText;
  static ::java::awt::SystemColor *activeCaptionBorder;
  static ::java::awt::SystemColor *inactiveCaption;
  static ::java::awt::SystemColor *inactiveCaptionText;
  static ::java::awt::SystemColor *inactiveCaptionBorder;
  static ::java::awt::SystemColor *window;
  static ::java::awt::SystemColor *windowBorder;
  static ::java::awt::SystemColor *windowText;
  static ::java::awt::SystemColor *menu;
  static ::java::awt::SystemColor *menuText;
  static ::java::awt::SystemColor *text;
  static ::java::awt::SystemColor *textText;
  static ::java::awt::SystemColor *textHighlight;
  static ::java::awt::SystemColor *textHighlightText;
  static ::java::awt::SystemColor *textInactiveText;
  static ::java::awt::SystemColor *control;
  static ::java::awt::SystemColor *controlText;
  static ::java::awt::SystemColor *controlHighlight;
  static ::java::awt::SystemColor *controlLtHighlight;
  static ::java::awt::SystemColor *controlShadow;
  static ::java::awt::SystemColor *controlDkShadow;
  static ::java::awt::SystemColor *scrollbar;
  static ::java::awt::SystemColor *info;
  static ::java::awt::SystemColor *infoText;

  static ::java::lang::Class class$;
};

#endif /* __java_awt_SystemColor__ */

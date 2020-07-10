// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_border_TitledBorder__
#define __javax_swing_border_TitledBorder__

#pragma interface

#include <javax/swing/border/AbstractBorder.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class Dimension;
      class Insets;
      class Point;
      class Rectangle;
      class FontMetrics;
      class Graphics;
      class Component;
      class Color;
      class Font;
    }
  }
  namespace javax
  {
    namespace swing
    {
      namespace border
      {
        class TitledBorder;
        class Border;
      }
    }
  }
}

class javax::swing::border::TitledBorder : public ::javax::swing::border::AbstractBorder
{
public:
  TitledBorder (::java::lang::String *);
  TitledBorder (::javax::swing::border::Border *);
  TitledBorder (::javax::swing::border::Border *, ::java::lang::String *);
  TitledBorder (::javax::swing::border::Border *, ::java::lang::String *, jint, jint);
  TitledBorder (::javax::swing::border::Border *, ::java::lang::String *, jint, jint, ::java::awt::Font *);
  TitledBorder (::javax::swing::border::Border *, ::java::lang::String *, jint, jint, ::java::awt::Font *, ::java::awt::Color *);
  virtual void paintBorder (::java::awt::Component *, ::java::awt::Graphics *, jint, jint, jint, jint);
private:
  void layoutBorderWithTitle (::java::awt::Component *, ::java::awt::FontMetrics *, ::java::awt::Rectangle *, ::java::awt::Point *);
  void paintBorderWithTitle (::java::awt::Component *, ::java::awt::Graphics *, jint, jint, jint, jint, ::java::awt::Rectangle *, ::java::awt::Point *, ::java::awt::FontMetrics *);
public:
  virtual ::java::awt::Insets *getBorderInsets (::java::awt::Component *);
  virtual ::java::awt::Insets *getBorderInsets (::java::awt::Component *, ::java::awt::Insets *);
  virtual jboolean isBorderOpaque ();
  virtual ::java::lang::String *getTitle () { return title; }
  virtual ::javax::swing::border::Border *getBorder ();
  virtual jint getTitlePosition () { return titlePosition; }
  virtual jint getTitleJustification () { return titleJustification; }
  virtual ::java::awt::Font *getTitleFont ();
  virtual ::java::awt::Color *getTitleColor ();
  virtual void setTitle (::java::lang::String *);
  virtual void setBorder (::javax::swing::border::Border *);
  virtual void setTitlePosition (jint);
  virtual void setTitleJustification (jint);
  virtual void setTitleFont (::java::awt::Font *);
  virtual void setTitleColor (::java::awt::Color *);
  virtual ::java::awt::Dimension *getMinimumSize (::java::awt::Component *);
public:  // actually protected
  virtual ::java::awt::Font *getFont (::java::awt::Component *);
public:
  static const jint DEFAULT_POSITION = 0L;
  static const jint ABOVE_TOP = 1L;
  static const jint TOP = 2L;
  static const jint BELOW_TOP = 3L;
  static const jint ABOVE_BOTTOM = 4L;
  static const jint BOTTOM = 5L;
  static const jint BELOW_BOTTOM = 6L;
  static const jint DEFAULT_JUSTIFICATION = 0L;
  static const jint LEFT = 1L;
  static const jint CENTER = 2L;
  static const jint RIGHT = 3L;
  static const jint LEADING = 4L;
  static const jint TRAILING = 5L;
public:  // actually protected
  static const jint EDGE_SPACING = 2L;
  static const jint TEXT_INSET_H = 5L;
  static const jint TEXT_SPACING = 2L;
public: // actually package-private
  static const jlong serialVersionUID = 8012999415147721601LL;
public:  // actually protected
  ::java::lang::String * __attribute__((aligned(__alignof__( ::javax::swing::border::AbstractBorder )))) title;
  ::javax::swing::border::Border *border;
  jint titlePosition;
  jint titleJustification;
  ::java::awt::Font *titleFont;
  ::java::awt::Color *titleColor;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_border_TitledBorder__ */
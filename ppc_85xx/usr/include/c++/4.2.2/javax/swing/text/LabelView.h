// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_LabelView__
#define __javax_swing_text_LabelView__

#pragma interface

#include <javax/swing/text/GlyphView.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace event
      {
        class DocumentEvent;
      }
      namespace text
      {
        class LabelView;
        class ViewFactory;
        class Element;
      }
    }
  }
  namespace java
  {
    namespace awt
    {
      class FontMetrics;
      class Shape;
      class Font;
      class Color;
    }
  }
}

class javax::swing::text::LabelView : public ::javax::swing::text::GlyphView
{
public:
  LabelView (::javax::swing::text::Element *);
public:  // actually protected
  virtual void setPropertiesFromAttributes ();
public:
  virtual void changedUpdate (::javax::swing::event::DocumentEvent *, ::java::awt::Shape *, ::javax::swing::text::ViewFactory *);
  virtual ::java::awt::Color *getBackground () { return background; }
public:  // actually protected
  virtual void setBackground (::java::awt::Color *);
public:
  virtual ::java::awt::Color *getForeground () { return foreground; }
  virtual ::java::awt::Font *getFont () { return font; }
public:  // actually protected
  virtual ::java::awt::FontMetrics *getFontMetrics ();
public:
  virtual jboolean isUnderline () { return underline; }
public:  // actually protected
  virtual void setUnderline (jboolean);
public:
  virtual jboolean isSubscript () { return subscript; }
public:  // actually protected
  virtual void setSubscript (jboolean);
public:
  virtual jboolean isSuperscript () { return superscript; }
public:  // actually protected
  virtual void setSuperscript (jboolean);
public:
  virtual jboolean isStrikeThrough () { return strikeThrough; }
public:  // actually protected
  virtual void setStrikeThrough (jboolean);
public: // actually package-private
  ::java::awt::Color * __attribute__((aligned(__alignof__( ::javax::swing::text::GlyphView )))) background;
  ::java::awt::Color *foreground;
  ::java::awt::Font *font;
  jboolean strikeThrough;
  jboolean underline;
  jboolean subscript;
  jboolean superscript;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_text_LabelView__ */
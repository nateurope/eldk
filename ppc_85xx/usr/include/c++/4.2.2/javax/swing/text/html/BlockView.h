// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_html_BlockView__
#define __javax_swing_text_html_BlockView__

#pragma interface

#include <javax/swing/text/BoxView.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class Shape;
      class Graphics;
    }
  }
  namespace javax
  {
    namespace swing
    {
      namespace event
      {
        class DocumentEvent;
      }
      class SizeRequirements;
      namespace text
      {
        namespace html
        {
          class BlockView;
          class StyleSheet;
        }
        class ViewFactory;
        class AttributeSet;
        class View;
        class Element;
      }
    }
  }
}

class javax::swing::text::html::BlockView : public ::javax::swing::text::BoxView
{
public:
  BlockView (::javax::swing::text::Element *, jint);
  virtual void setParent (::javax::swing::text::View *);
public:  // actually protected
  virtual ::javax::swing::SizeRequirements *calculateMajorAxisRequirements (jint, ::javax::swing::SizeRequirements *);
  virtual ::javax::swing::SizeRequirements *calculateMinorAxisRequirements (jint, ::javax::swing::SizeRequirements *);
  virtual void layoutMinorAxis (jint, jint, jintArray, jintArray);
public:
  virtual void paint (::java::awt::Graphics *, ::java::awt::Shape *);
  virtual ::javax::swing::text::AttributeSet *getAttributes ();
  virtual jint getResizeWeight (jint);
  virtual jfloat getAlignment (jint);
  virtual void changedUpdate (::javax::swing::event::DocumentEvent *, ::java::awt::Shape *, ::javax::swing::text::ViewFactory *);
  virtual jfloat getPreferredSpan (jint);
  virtual jfloat getMinimumSpan (jint);
  virtual jfloat getMaximumSpan (jint);
public:  // actually protected
  virtual void setPropertiesFromAttributes () { }
  virtual ::javax::swing::text::html::StyleSheet *getStyleSheet ();
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_text_html_BlockView__ */

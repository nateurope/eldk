// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_ParagraphView__
#define __javax_swing_text_ParagraphView__

#pragma interface

#include <javax/swing/text/FlowView.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class Shape;
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
      namespace text
      {
        class ParagraphView;
        class ParagraphView$Row;
        class Position$Bias;
        class ViewFactory;
        class View;
        class Element;
        class TabSet;
      }
    }
  }
}

class javax::swing::text::ParagraphView : public ::javax::swing::text::FlowView
{
public:
  ParagraphView (::javax::swing::text::Element *);
  virtual jfloat nextTabStop (jfloat, jint);
public:  // actually protected
  virtual ::javax::swing::text::View *createRow ();
public:
  virtual jfloat getAlignment (jint);
  virtual void changedUpdate (::javax::swing::event::DocumentEvent *, ::java::awt::Shape *, ::javax::swing::text::ViewFactory *);
public:  // actually protected
  virtual void setPropertiesFromAttributes ();
  virtual void setFirstLineIndent (jfloat);
  virtual void setJustification (jint);
  virtual void setLineSpacing (jfloat);
  virtual ::javax::swing::text::View *getLayoutView (jint);
  virtual jint getLayoutViewCount ();
  virtual ::javax::swing::text::TabSet *getTabSet () { return tabSet; }
  virtual jint findOffsetToCharactersInString (jcharArray, jint);
  virtual jint getClosestPositionTo (jint, ::javax::swing::text::Position$Bias *, ::java::awt::Shape *, jint, JArray< ::javax::swing::text::Position$Bias *> *, jint, jint);
  virtual jfloat getPartialSize (jint, jint);
  virtual jfloat getTabBase ();
  virtual void adjustRow (::javax::swing::text::ParagraphView$Row *, jint, jint) { }
public:
  virtual ::javax::swing::text::View *breakView (jint, jfloat, ::java::awt::Shape *) { return 0; }
  virtual jint getBreakWeight (jint, jfloat);
public:  // actually protected
  jint __attribute__((aligned(__alignof__( ::javax::swing::text::FlowView ))))  firstLineIndent;
private:
  jint justification;
  jfloat lineSpacing;
  ::javax::swing::text::TabSet *tabSet;

  friend class javax_swing_text_ParagraphView$Row;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_text_ParagraphView__ */

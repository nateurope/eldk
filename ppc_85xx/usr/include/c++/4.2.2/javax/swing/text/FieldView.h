// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_FieldView__
#define __javax_swing_text_FieldView__

#pragma interface

#include <javax/swing/text/PlainView.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class Graphics;
      class Shape;
      class FontMetrics;
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
        class FieldView;
        class ViewFactory;
        class Position$Bias;
        class Element;
      }
      class BoundedRangeModel;
    }
  }
}

class javax::swing::text::FieldView : public ::javax::swing::text::PlainView
{
public:
  FieldView (::javax::swing::text::Element *);
private:
  void checkContainer ();
  void updateVisibility ();
public:  // actually protected
  virtual ::java::awt::FontMetrics *getFontMetrics ();
  virtual ::java::awt::Shape *adjustAllocation (::java::awt::Shape *);
public:
  virtual jfloat getPreferredSpan (jint);
private:
  jfloat calculateHorizontalSpan ();
public:
  virtual jint getResizeWeight (jint);
  virtual ::java::awt::Shape *modelToView (jint, ::java::awt::Shape *, ::javax::swing::text::Position$Bias *);
  virtual void paint (::java::awt::Graphics *, ::java::awt::Shape *);
  virtual void insertUpdate (::javax::swing::event::DocumentEvent *, ::java::awt::Shape *, ::javax::swing::text::ViewFactory *);
  virtual void removeUpdate (::javax::swing::event::DocumentEvent *, ::java::awt::Shape *, ::javax::swing::text::ViewFactory *);
  virtual void changedUpdate (::javax::swing::event::DocumentEvent *, ::java::awt::Shape *, ::javax::swing::text::ViewFactory *);
  virtual jint viewToModel (jfloat, jfloat, ::java::awt::Shape *, JArray< ::javax::swing::text::Position$Bias *> *);
public: // actually package-private
  ::javax::swing::BoundedRangeModel * __attribute__((aligned(__alignof__( ::javax::swing::text::PlainView )))) horizontalVisibility;
  jfloat cachedSpan;

  friend class javax_swing_text_FieldView$1;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_text_FieldView__ */
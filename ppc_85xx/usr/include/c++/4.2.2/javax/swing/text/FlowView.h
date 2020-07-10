// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_FlowView__
#define __javax_swing_text_FlowView__

#pragma interface

#include <javax/swing/text/BoxView.h>

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
      class SizeRequirements;
      namespace event
      {
        class DocumentEvent;
      }
      namespace text
      {
        class FlowView;
        class ViewFactory;
        class Element;
        class View;
        class FlowView$FlowStrategy;
      }
    }
  }
}

class javax::swing::text::FlowView : public ::javax::swing::text::BoxView
{
public:
  FlowView (::javax::swing::text::Element *, jint);
  virtual jint getFlowAxis ();
  virtual jint getFlowSpan (jint) { return layoutSpan; }
  virtual jint getFlowStart (jint);
public:  // actually protected
  virtual ::javax::swing::text::View *createRow () = 0;
  virtual void loadChildren (::javax::swing::text::ViewFactory *);
  virtual void layout (jint, jint);
public:
  virtual void insertUpdate (::javax::swing::event::DocumentEvent *, ::java::awt::Shape *, ::javax::swing::text::ViewFactory *);
  virtual void removeUpdate (::javax::swing::event::DocumentEvent *, ::java::awt::Shape *, ::javax::swing::text::ViewFactory *);
  virtual void changedUpdate (::javax::swing::event::DocumentEvent *, ::java::awt::Shape *, ::javax::swing::text::ViewFactory *);
public:  // actually protected
  virtual jint getViewIndexAtPosition (jint);
  virtual ::javax::swing::SizeRequirements *calculateMinorAxisRequirements (jint, ::javax::swing::SizeRequirements *);
public: // actually package-private
  static ::javax::swing::text::FlowView$FlowStrategy *sharedStrategy;
public:  // actually protected
  jint __attribute__((aligned(__alignof__( ::javax::swing::text::BoxView ))))  layoutSpan;
  ::javax::swing::text::View *layoutPool;
  ::javax::swing::text::FlowView$FlowStrategy *strategy;
private:
  jboolean layoutDirty;

  friend class javax_swing_text_FlowView$LogicalView;
  friend class javax_swing_text_FlowView$FlowStrategy;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_text_FlowView__ */

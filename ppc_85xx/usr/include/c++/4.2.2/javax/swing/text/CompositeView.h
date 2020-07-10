// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_CompositeView__
#define __javax_swing_text_CompositeView__

#pragma interface

#include <javax/swing/text/View.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class Shape;
      class Insets;
      class Rectangle;
    }
  }
  namespace javax
  {
    namespace swing
    {
      namespace text
      {
        class CompositeView;
        class AttributeSet;
        class Position$Bias;
        class ViewFactory;
        class Element;
        class View;
      }
    }
  }
}

class javax::swing::text::CompositeView : public ::javax::swing::text::View
{
public:
  CompositeView (::javax::swing::text::Element *);
public:  // actually protected
  virtual void loadChildren (::javax::swing::text::ViewFactory *);
public:
  virtual void setParent (::javax::swing::text::View *);
  virtual jint getViewCount ();
  virtual ::javax::swing::text::View *getView (jint);
  virtual void replace (jint, jint, JArray< ::javax::swing::text::View *> *);
  virtual ::java::awt::Shape *getChildAllocation (jint, ::java::awt::Shape *);
  virtual ::java::awt::Shape *modelToView (jint, ::java::awt::Shape *, ::javax::swing::text::Position$Bias *);
private:
  ::java::awt::Shape *createDefaultLocation (::java::awt::Shape *, ::javax::swing::text::Position$Bias *);
public:
  virtual ::java::awt::Shape *modelToView (jint, ::javax::swing::text::Position$Bias *, jint, ::javax::swing::text::Position$Bias *, ::java::awt::Shape *);
  virtual jint viewToModel (jfloat, jfloat, ::java::awt::Shape *, JArray< ::javax::swing::text::Position$Bias *> *);
  virtual jint getNextVisualPositionFrom (jint, ::javax::swing::text::Position$Bias *, ::java::awt::Shape *, jint, JArray< ::javax::swing::text::Position$Bias *> *);
  virtual jint getViewIndex (jint, ::javax::swing::text::Position$Bias *);
public:  // actually protected
  virtual jboolean isBefore (jint, jint, ::java::awt::Rectangle *) = 0;
  virtual jboolean isAfter (jint, jint, ::java::awt::Rectangle *) = 0;
  virtual ::javax::swing::text::View *getViewAtPoint (jint, jint, ::java::awt::Rectangle *) = 0;
  virtual void childAllocation (jint, ::java::awt::Rectangle *) = 0;
  virtual ::javax::swing::text::View *getViewAtPosition (jint, ::java::awt::Rectangle *);
  virtual jint getViewIndexAtPosition (jint);
  virtual ::java::awt::Rectangle *getInsideAllocation (::java::awt::Shape *);
  virtual void setParagraphInsets (::javax::swing::text::AttributeSet *);
  virtual void setInsets (jshort, jshort, jshort, jshort);
  virtual jshort getLeftInset ();
  virtual jshort getRightInset ();
  virtual jshort getTopInset ();
  virtual jshort getBottomInset ();
  virtual jint getNextNorthSouthVisualPositionFrom (jint, ::javax::swing::text::Position$Bias *, ::java::awt::Shape *, jint, JArray< ::javax::swing::text::Position$Bias *> *);
  virtual jint getNextEastWestVisualPositionFrom (jint, ::javax::swing::text::Position$Bias *, ::java::awt::Shape *, jint, JArray< ::javax::swing::text::Position$Bias *> *);
  virtual jboolean flipEastAndWestAtEnds (jint, ::javax::swing::text::Position$Bias *);
public: // actually package-private
  JArray< ::javax::swing::text::View *> * __attribute__((aligned(__alignof__( ::javax::swing::text::View )))) children;
  ::java::awt::Rectangle *insideAllocation;
  ::java::awt::Insets *insets;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_text_CompositeView__ */

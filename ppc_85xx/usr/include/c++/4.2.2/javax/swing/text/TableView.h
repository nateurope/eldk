// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_TableView__
#define __javax_swing_text_TableView__

#pragma interface

#include <javax/swing/text/BoxView.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class Rectangle;
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
        class DocumentEvent$ElementChange;
      }
      namespace text
      {
        class TableView;
        class ViewFactory;
        class TableView$TableCell;
        class TableView$TableRow;
        class View;
        class Element;
      }
      class SizeRequirements;
    }
  }
}

class javax::swing::text::TableView : public ::javax::swing::text::BoxView
{
public:
  TableView (::javax::swing::text::Element *);
  virtual void replace (jint, jint, JArray< ::javax::swing::text::View *> *);
public:  // actually protected
  virtual ::javax::swing::text::TableView$TableRow *createTableRow (::javax::swing::text::Element *);
  virtual ::javax::swing::text::TableView$TableCell *createTableCell (::javax::swing::text::Element *);
  virtual void forwardUpdate (::javax::swing::event::DocumentEvent$ElementChange *, ::javax::swing::event::DocumentEvent *, ::java::awt::Shape *, ::javax::swing::text::ViewFactory *) { }
  virtual void layoutColumns (jint, jintArray, jintArray, JArray< ::javax::swing::SizeRequirements *> *);
  virtual void layoutMinorAxis (jint, jint, jintArray, jintArray);
  virtual ::javax::swing::SizeRequirements *calculateMinorAxisRequirements (jint, ::javax::swing::SizeRequirements *);
  virtual ::javax::swing::text::View *getViewAtPosition (jint, ::java::awt::Rectangle *);
private:
  void updateColumnRequirements ();
public: // actually package-private
  jintArray __attribute__((aligned(__alignof__( ::javax::swing::text::BoxView ))))  columnOffsets;
  jintArray columnSpans;
  JArray< ::javax::swing::SizeRequirements *> *columnRequirements;

  friend class javax_swing_text_TableView$TableCell;
  friend class javax_swing_text_TableView$TableRow;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_text_TableView__ */

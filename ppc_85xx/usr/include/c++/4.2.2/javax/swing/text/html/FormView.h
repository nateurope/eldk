// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_html_FormView__
#define __javax_swing_text_html_FormView__

#pragma interface

#include <javax/swing/text/ComponentView.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class Point;
      namespace event
      {
        class ActionEvent;
      }
      class Component;
    }
  }
  namespace javax
  {
    namespace swing
    {
      namespace text
      {
        namespace html
        {
          class FormView;
        }
        class Element;
      }
    }
  }
}

class javax::swing::text::html::FormView : public ::javax::swing::text::ComponentView
{
public:
  FormView (::javax::swing::text::Element *);
public:  // actually protected
  virtual ::java::awt::Component *createComponent ();
public:
  virtual jfloat getMaximumSpan (jint);
  virtual void actionPerformed (::java::awt::event::ActionEvent *);
public:  // actually protected
  virtual void submitData (::java::lang::String *) { }
  virtual void imageSubmit (::java::lang::String *) { }
public: // actually package-private
  virtual ::java::lang::String *getImageData (::java::awt::Point *);
public:
  static ::java::lang::String *SUBMIT;
  static ::java::lang::String *RESET;

  friend class javax_swing_text_html_FormView$MouseEventListener;

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_text_html_FormView__ */

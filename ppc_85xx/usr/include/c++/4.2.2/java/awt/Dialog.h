// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_Dialog__
#define __java_awt_Dialog__

#pragma interface

#include <java/awt/Window.h>

extern "Java"
{
  namespace javax
  {
    namespace accessibility
    {
      class AccessibleContext;
    }
  }
  namespace java
  {
    namespace awt
    {
      class Dialog;
      class GraphicsConfiguration;
      class Frame;
      class EventQueue;
    }
  }
}

class java::awt::Dialog : public ::java::awt::Window
{
public:
  Dialog (::java::awt::Frame *);
  Dialog (::java::awt::Frame *, jboolean);
  Dialog (::java::awt::Frame *, ::java::lang::String *);
  Dialog (::java::awt::Frame *, ::java::lang::String *, jboolean);
  Dialog (::java::awt::Frame *, ::java::lang::String *, jboolean, ::java::awt::GraphicsConfiguration *);
  Dialog (::java::awt::Dialog *);
  Dialog (::java::awt::Dialog *, ::java::lang::String *);
  Dialog (::java::awt::Dialog *, ::java::lang::String *, jboolean);
  Dialog (::java::awt::Dialog *, ::java::lang::String *, jboolean, ::java::awt::GraphicsConfiguration *);
  virtual ::java::lang::String *getTitle () { return title; }
  virtual void setTitle (::java::lang::String *);
  virtual jboolean isModal () { return modal; }
  virtual void setModal (jboolean);
  virtual jboolean isResizable () { return resizable; }
  virtual void setResizable (jboolean);
  virtual void addNotify ();
  virtual void show ();
  virtual void hide ();
  virtual void dispose ();
public:  // actually protected
  virtual ::java::lang::String *paramString ();
public:
  virtual jboolean isUndecorated () { return undecorated; }
  virtual void setUndecorated (jboolean);
  virtual ::javax::accessibility::AccessibleContext *getAccessibleContext ();
private:
  static const jlong serialVersionUID = 5920926903803293709LL;
  jboolean __attribute__((aligned(__alignof__( ::java::awt::Window ))))  modal;
  jboolean resizable;
  ::java::lang::String *title;
  jboolean undecorated;
  jboolean blocked;
  ::java::awt::EventQueue *eq2;

  friend class java_awt_Dialog$AccessibleAWTDialog;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_awt_Dialog__ */

// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_JFrame__
#define __javax_swing_JFrame__

#pragma interface

#include <java/awt/Frame.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace event
      {
        class WindowEvent;
        class KeyEvent;
      }
      class Graphics;
      class Component;
      class Container;
      class LayoutManager;
      class Dimension;
      class GraphicsConfiguration;
    }
  }
  namespace javax
  {
    namespace swing
    {
      class JFrame;
      class JLayeredPane;
      class JMenuBar;
      class JRootPane;
    }
    namespace accessibility
    {
      class AccessibleContext;
    }
  }
}

class javax::swing::JFrame : public ::java::awt::Frame
{
public:
  JFrame ();
  JFrame (::java::lang::String *);
  JFrame (::java::awt::GraphicsConfiguration *);
  JFrame (::java::lang::String *, ::java::awt::GraphicsConfiguration *);
public:  // actually protected
  virtual void frameInit ();
public:
  virtual ::java::awt::Dimension *getPreferredSize ();
  virtual ::javax::swing::JMenuBar *getJMenuBar ();
  virtual void setJMenuBar (::javax::swing::JMenuBar *);
  virtual void setLayout (::java::awt::LayoutManager *);
  virtual void setLayeredPane (::javax::swing::JLayeredPane *);
  virtual ::javax::swing::JLayeredPane *getLayeredPane ();
  virtual ::javax::swing::JRootPane *getRootPane ();
public:  // actually protected
  virtual void setRootPane (::javax::swing::JRootPane *);
  virtual ::javax::swing::JRootPane *createRootPane ();
public:
  virtual ::java::awt::Container *getContentPane ();
  virtual void setContentPane (::java::awt::Container *);
  virtual ::java::awt::Component *getGlassPane ();
  virtual void setGlassPane (::java::awt::Component *);
public:  // actually protected
  virtual void addImpl (::java::awt::Component *, ::java::lang::Object *, jint);
public:
  virtual void remove (::java::awt::Component *);
public:  // actually protected
  virtual jboolean isRootPaneCheckingEnabled () { return rootPaneCheckingEnabled; }
  virtual void setRootPaneCheckingEnabled (jboolean);
public:
  virtual void update (::java::awt::Graphics *);
public:  // actually protected
  virtual void processKeyEvent (::java::awt::event::KeyEvent *);
public:
  static void setDefaultLookAndFeelDecorated (jboolean);
  static jboolean isDefaultLookAndFeelDecorated ();
  virtual ::javax::accessibility::AccessibleContext *getAccessibleContext ();
  virtual jint getDefaultCloseOperation () { return closeAction; }
public:  // actually protected
  virtual ::java::lang::String *paramString ();
  virtual void processWindowEvent (::java::awt::event::WindowEvent *);
public:
  virtual void setDefaultCloseOperation (jint);
  static const jint EXIT_ON_CLOSE = 3L;
private:
  static const jlong serialVersionUID = -3362141868504252139LL;
  static jboolean defaultLookAndFeelDecorated;
  jint __attribute__((aligned(__alignof__( ::java::awt::Frame ))))  closeAction;
public:  // actually protected
  ::javax::accessibility::AccessibleContext *accessibleContext;
  ::javax::swing::JRootPane *rootPane;
  jboolean rootPaneCheckingEnabled;

  friend class javax_swing_JFrame$AccessibleJFrame;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_JFrame__ */
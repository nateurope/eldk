// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_ToolTipManager__
#define __javax_swing_ToolTipManager__

#pragma interface

#include <java/awt/event/MouseAdapter.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class Dimension;
      namespace event
      {
        class MouseEvent;
      }
      class Point;
      class Component;
    }
  }
  namespace javax
  {
    namespace swing
    {
      class JComponent;
      class Popup;
      class JToolTip;
      class ToolTipManager;
      class Timer;
    }
  }
}

class javax::swing::ToolTipManager : public ::java::awt::event::MouseAdapter
{
public: // actually package-private
  ToolTipManager ();
public:
  static ::javax::swing::ToolTipManager *sharedInstance ();
  virtual void setEnabled (jboolean);
  virtual jboolean isEnabled () { return enabled; }
  virtual jboolean isLightWeightPopupEnabled () { return lightWeightPopupEnabled; }
  virtual void setLightWeightPopupEnabled (jboolean);
  virtual jint getInitialDelay ();
  virtual void setInitialDelay (jint);
  virtual jint getDismissDelay ();
  virtual void setDismissDelay (jint);
  virtual jint getReshowDelay ();
  virtual void setReshowDelay (jint);
  virtual void registerComponent (::javax::swing::JComponent *);
  virtual void unregisterComponent (::javax::swing::JComponent *);
  virtual void mouseEntered (::java::awt::event::MouseEvent *);
  virtual void mouseExited (::java::awt::event::MouseEvent *);
  virtual void mousePressed (::java::awt::event::MouseEvent *);
  virtual void mouseDragged (::java::awt::event::MouseEvent *);
  virtual void mouseMoved (::java::awt::event::MouseEvent *);
public: // actually package-private
  virtual void showTip ();
private:
  ::java::awt::Point *adjustLocation (::java::awt::Point *, ::java::awt::Component *, ::java::awt::Dimension *);
public: // actually package-private
  virtual void hideTip ();
private:
  ::java::awt::Component *getContentPaneDeepestComponent (::java::awt::event::MouseEvent *);
public: // actually package-private
  ::javax::swing::Timer * __attribute__((aligned(__alignof__( ::java::awt::event::MouseAdapter )))) enterTimer;
  ::javax::swing::Timer *exitTimer;
  ::javax::swing::Timer *insideTimer;
private:
  jboolean enabled;
public:  // actually protected
  jboolean lightWeightPopupEnabled;
  jboolean heavyWeightPopupEnabled;
private:
  static ::javax::swing::ToolTipManager *shared;
  static ::java::awt::Component *currentComponent;
  static ::javax::swing::JToolTip *currentTip;
  static ::java::awt::Point *currentPoint;
  static ::javax::swing::Popup *popup;

  friend class javax_swing_ToolTipManager$insideTimerAction;
  friend class javax_swing_ToolTipManager$outsideTimerAction;
  friend class javax_swing_ToolTipManager$stillInsideTimerAction;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_ToolTipManager__ */

// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_basic_BasicSplitPaneDivider__
#define __javax_swing_plaf_basic_BasicSplitPaneDivider__

#pragma interface

#include <java/awt/Container.h>

extern "Java"
{
  namespace java
  {
    namespace beans
    {
      class PropertyChangeEvent;
    }
    namespace awt
    {
      class Graphics;
      class Dimension;
      class Insets;
      class Component;
    }
  }
  namespace javax
  {
    namespace swing
    {
      namespace border
      {
        class Border;
      }
      class JButton;
      class JSplitPane;
      namespace plaf
      {
        namespace basic
        {
          class BasicSplitPaneDivider;
          class BasicSplitPaneDivider$MouseHandler;
          class BasicSplitPaneUI;
          class BasicSplitPaneDivider$DragController;
        }
      }
    }
  }
}

class javax::swing::plaf::basic::BasicSplitPaneDivider : public ::java::awt::Container
{
public:
  BasicSplitPaneDivider (::javax::swing::plaf::basic::BasicSplitPaneUI *);
  virtual void setBasicSplitPaneUI (::javax::swing::plaf::basic::BasicSplitPaneUI *);
  virtual ::javax::swing::plaf::basic::BasicSplitPaneUI *getBasicSplitPaneUI () { return splitPaneUI; }
  virtual void setDividerSize (jint);
  virtual jint getDividerSize () { return dividerSize; }
  virtual void setBorder (::javax::swing::border::Border *);
  virtual ::javax::swing::border::Border *getBorder () { return border; }
  virtual ::java::awt::Insets *getInsets ();
  virtual ::java::awt::Dimension *getPreferredSize ();
  virtual ::java::awt::Dimension *getMinimumSize ();
  virtual void propertyChange (::java::beans::PropertyChangeEvent *);
  virtual void paint (::java::awt::Graphics *);
public:  // actually protected
  virtual void oneTouchExpandableChanged ();
  virtual ::javax::swing::JButton *createLeftOneTouchButton ();
  virtual ::javax::swing::JButton *createRightOneTouchButton ();
  virtual void prepareForDragging ();
  virtual void dragDividerTo (jint);
  virtual void finishDraggingTo (jint);
public: // actually package-private
  virtual void moveDividerTo (jint);
  static const jlong serialVersionUID = 1463404307042803342LL;
public:  // actually protected
  static const jint ONE_TOUCH_SIZE = 6L;
  static const jint ONE_TOUCH_OFFSET = 2L;
  ::javax::swing::plaf::basic::BasicSplitPaneDivider$DragController * __attribute__((aligned(__alignof__( ::java::awt::Container )))) dragger;
  ::javax::swing::plaf::basic::BasicSplitPaneUI *splitPaneUI;
  jint dividerSize;
  ::java::awt::Component *hiddenDivider;
  ::javax::swing::JSplitPane *splitPane;
  ::javax::swing::plaf::basic::BasicSplitPaneDivider$MouseHandler *mouseHandler;
  jint orientation;
  ::javax::swing::JButton *leftButton;
  ::javax::swing::JButton *rightButton;
private:
  ::javax::swing::border::Border *border;
public: // actually package-private
  jint currentDividerLocation;

  friend class javax_swing_plaf_basic_BasicSplitPaneDivider$DividerLayout;
  friend class javax_swing_plaf_basic_BasicSplitPaneDivider$VerticalDragController;
  friend class javax_swing_plaf_basic_BasicSplitPaneDivider$DragController;
  friend class javax_swing_plaf_basic_BasicSplitPaneDivider$MouseHandler;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_plaf_basic_BasicSplitPaneDivider__ */

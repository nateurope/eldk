// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_basic_BasicSplitPaneUI__
#define __javax_swing_plaf_basic_BasicSplitPaneUI__

#pragma interface

#include <javax/swing/plaf/SplitPaneUI.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class Insets;
      class Dimension;
      class Graphics;
      class Component;
      namespace event
      {
        class ActionListener;
        class FocusListener;
      }
    }
    namespace beans
    {
      class PropertyChangeListener;
    }
  }
  namespace javax
  {
    namespace swing
    {
      class ActionMap;
      class InputMap;
      class JComponent;
      class JSplitPane;
      class KeyStroke;
      namespace plaf
      {
        class ComponentUI;
        namespace basic
        {
          class BasicSplitPaneUI;
          class BasicSplitPaneUI$BasicHorizontalLayoutManager;
          class BasicSplitPaneDivider;
        }
      }
    }
  }
}

class javax::swing::plaf::basic::BasicSplitPaneUI : public ::javax::swing::plaf::SplitPaneUI
{
public:
  BasicSplitPaneUI ();
  static ::javax::swing::plaf::ComponentUI *createUI (::javax::swing::JComponent *);
  virtual void installUI (::javax::swing::JComponent *);
  virtual void uninstallUI (::javax::swing::JComponent *);
public:  // actually protected
  virtual void installDefaults ();
  virtual void uninstallDefaults ();
  virtual void installListeners ();
  virtual void uninstallListeners ();
public: // actually package-private
  virtual ::javax::swing::InputMap *getInputMap (jint);
  virtual ::javax::swing::ActionMap *getActionMap ();
  virtual ::javax::swing::ActionMap *createActionMap ();
public:  // actually protected
  virtual void installKeyboardActions ();
  virtual void uninstallKeyboardActions ();
  virtual ::java::beans::PropertyChangeListener *createPropertyChangeListener ();
  virtual ::java::awt::event::FocusListener *createFocusListener ();
  virtual ::java::awt::event::ActionListener *createKeyboardUpLeftListener ();
  virtual ::java::awt::event::ActionListener *createKeyboardDownRightListener ();
  virtual ::java::awt::event::ActionListener *createKeyboardHomeListener ();
  virtual ::java::awt::event::ActionListener *createKeyboardEndListener ();
  virtual ::java::awt::event::ActionListener *createKeyboardResizeToggleListener ();
public:
  virtual jint getOrientation ();
  virtual void setOrientation (jint);
  virtual jboolean isContinuousLayout ();
  virtual void setContinuousLayout (jboolean);
  virtual jint getLastDragLocation () { return lastDragLocation; }
  virtual void setLastDragLocation (jint);
  virtual ::javax::swing::plaf::basic::BasicSplitPaneDivider *getDivider () { return divider; }
public:  // actually protected
  virtual ::java::awt::Component *createDefaultNonContinuousLayoutDivider ();
  virtual void setNonContinuousLayoutDivider (::java::awt::Component *);
  virtual void setNonContinuousLayoutDivider (::java::awt::Component *, jboolean);
public:
  virtual ::java::awt::Component *getNonContinuousLayoutDivider () { return nonContinuousLayoutDivider; }
  virtual ::javax::swing::JSplitPane *getSplitPane () { return splitPane; }
  virtual ::javax::swing::plaf::basic::BasicSplitPaneDivider *createDefaultDivider ();
  virtual void resetToPreferredSizes (::javax::swing::JSplitPane *);
  virtual void setDividerLocation (::javax::swing::JSplitPane *, jint);
  virtual jint getDividerLocation (::javax::swing::JSplitPane *) { return dividerLocation; }
  virtual jint getMinimumDividerLocation (::javax::swing::JSplitPane *);
  virtual jint getMaximumDividerLocation (::javax::swing::JSplitPane *);
  virtual void finishedPaintingChildren (::javax::swing::JSplitPane *, ::java::awt::Graphics *);
  virtual void paint (::java::awt::Graphics *, ::javax::swing::JComponent *) { }
  virtual ::java::awt::Dimension *getPreferredSize (::javax::swing::JComponent *);
  virtual ::java::awt::Dimension *getMinimumSize (::javax::swing::JComponent *);
  virtual ::java::awt::Dimension *getMaximumSize (::javax::swing::JComponent *);
  virtual ::java::awt::Insets *getInsets (::javax::swing::JComponent *);
public:  // actually protected
  virtual void resetLayoutManager ();
  virtual void startDragging ();
  virtual void dragDividerTo (jint);
  virtual void finishDraggingTo (jint);
  virtual jint getDividerBorderSize ();
private:
  jint validLocation (jint);
public:  // actually protected
  jint __attribute__((aligned(__alignof__( ::javax::swing::plaf::SplitPaneUI ))))  beginDragDividerLocation;
  jint dividerSize;
public: // actually package-private
  jint lastDragLocation;
public:  // actually protected
  static jint KEYBOARD_DIVIDER_MOVE_OFFSET;
  ::javax::swing::plaf::basic::BasicSplitPaneDivider *divider;
  ::java::beans::PropertyChangeListener *propertyChangeListener;
  ::java::awt::event::FocusListener *focusListener;
  ::java::awt::event::ActionListener *keyboardDownRightListener;
  ::java::awt::event::ActionListener *keyboardEndListener;
  ::java::awt::event::ActionListener *keyboardHomeListener;
  ::java::awt::event::ActionListener *keyboardResizeToggleListener;
  ::java::awt::event::ActionListener *keyboardUpLeftListener;
  ::javax::swing::plaf::basic::BasicSplitPaneUI$BasicHorizontalLayoutManager *layoutManager;
  ::javax::swing::KeyStroke *dividerResizeToggleKey;
  ::javax::swing::KeyStroke *downKey;
  ::javax::swing::KeyStroke *endKey;
  ::javax::swing::KeyStroke *homeKey;
  ::javax::swing::KeyStroke *leftKey;
  ::javax::swing::KeyStroke *rightKey;
  ::javax::swing::KeyStroke *upKey;
  jboolean draggingHW;
  static ::java::lang::String *NON_CONTINUOUS_DIVIDER;
  ::java::awt::Component *nonContinuousLayoutDivider;
  ::javax::swing::JSplitPane *splitPane;
private:
  jint dividerLocation;

  friend class javax_swing_plaf_basic_BasicSplitPaneUI$8;
  friend class javax_swing_plaf_basic_BasicSplitPaneUI$7;
  friend class javax_swing_plaf_basic_BasicSplitPaneUI$6;
  friend class javax_swing_plaf_basic_BasicSplitPaneUI$5;
  friend class javax_swing_plaf_basic_BasicSplitPaneUI$4;
  friend class javax_swing_plaf_basic_BasicSplitPaneUI$3;
  friend class javax_swing_plaf_basic_BasicSplitPaneUI$2;
  friend class javax_swing_plaf_basic_BasicSplitPaneUI$1;
  friend class javax_swing_plaf_basic_BasicSplitPaneUI$PropertyHandler;
  friend class javax_swing_plaf_basic_BasicSplitPaneUI$KeyboardUpLeftHandler;
  friend class javax_swing_plaf_basic_BasicSplitPaneUI$KeyboardResizeToggleHandler;
  friend class javax_swing_plaf_basic_BasicSplitPaneUI$KeyboardHomeHandler;
  friend class javax_swing_plaf_basic_BasicSplitPaneUI$KeyboardEndHandler;
  friend class javax_swing_plaf_basic_BasicSplitPaneUI$KeyboardDownRightHandler;
  friend class javax_swing_plaf_basic_BasicSplitPaneUI$FocusHandler;
  friend class javax_swing_plaf_basic_BasicSplitPaneUI$BasicVerticalLayoutManager;
  friend class javax_swing_plaf_basic_BasicSplitPaneUI$BasicHorizontalLayoutManager;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_plaf_basic_BasicSplitPaneUI__ */

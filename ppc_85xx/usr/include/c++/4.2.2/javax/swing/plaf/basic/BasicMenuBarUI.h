// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_basic_BasicMenuBarUI__
#define __javax_swing_plaf_basic_BasicMenuBarUI__

#pragma interface

#include <javax/swing/plaf/MenuBarUI.h>

extern "Java"
{
  namespace java
  {
    namespace beans
    {
      class PropertyChangeListener;
    }
    namespace awt
    {
      class Dimension;
      namespace event
      {
        class ContainerListener;
      }
    }
  }
  namespace javax
  {
    namespace swing
    {
      class ActionMap;
      namespace plaf
      {
        namespace basic
        {
          class BasicMenuBarUI;
        }
        class ComponentUI;
      }
      class JComponent;
      class JMenuBar;
      namespace event
      {
        class MouseInputListener;
        class ChangeListener;
      }
    }
  }
}

class javax::swing::plaf::basic::BasicMenuBarUI : public ::javax::swing::plaf::MenuBarUI
{
public:
  BasicMenuBarUI ();
public:  // actually protected
  virtual ::javax::swing::event::ChangeListener *createChangeListener ();
  virtual ::java::awt::event::ContainerListener *createContainerListener ();
public:
  static ::javax::swing::plaf::ComponentUI *createUI (::javax::swing::JComponent *);
  virtual ::java::awt::Dimension *getMaximumSize (::javax::swing::JComponent *) { return 0; }
  virtual ::java::awt::Dimension *getMinimumSize (::javax::swing::JComponent *) { return 0; }
  virtual ::java::awt::Dimension *getPreferredSize (::javax::swing::JComponent *) { return 0; }
public:  // actually protected
  virtual void installDefaults ();
  virtual void installKeyboardActions ();
private:
  ::javax::swing::ActionMap *getActionMap ();
  ::javax::swing::ActionMap *createDefaultActions ();
public:  // actually protected
  virtual void installListeners ();
public:
  virtual void installUI (::javax::swing::JComponent *);
public:  // actually protected
  virtual void uninstallDefaults ();
  virtual void uninstallKeyboardActions ();
  virtual void uninstallListeners ();
public:
  virtual void uninstallUI (::javax::swing::JComponent *);
public:  // actually protected
  ::javax::swing::event::ChangeListener * __attribute__((aligned(__alignof__( ::javax::swing::plaf::MenuBarUI )))) changeListener;
  ::java::awt::event::ContainerListener *containerListener;
private:
  ::java::beans::PropertyChangeListener *propertyChangeListener;
public:  // actually protected
  ::javax::swing::JMenuBar *menuBar;
private:
  ::javax::swing::event::MouseInputListener *mouseListener;

  friend class javax_swing_plaf_basic_BasicMenuBarUI$MouseInputHandler;
  friend class javax_swing_plaf_basic_BasicMenuBarUI$PropertyChangeHandler;
  friend class javax_swing_plaf_basic_BasicMenuBarUI$ContainerHandler;
  friend class javax_swing_plaf_basic_BasicMenuBarUI$ChangeHandler;
  friend class javax_swing_plaf_basic_BasicMenuBarUI$FocusAction;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_plaf_basic_BasicMenuBarUI__ */
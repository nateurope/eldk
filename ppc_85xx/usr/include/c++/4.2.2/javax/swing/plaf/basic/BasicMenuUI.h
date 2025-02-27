// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_basic_BasicMenuUI__
#define __javax_swing_plaf_basic_BasicMenuUI__

#pragma interface

#include <javax/swing/plaf/basic/BasicMenuItemUI.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class Dimension;
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
      class JMenu;
      namespace plaf
      {
        namespace basic
        {
          class BasicMenuUI;
        }
        class ComponentUI;
      }
      class JComponent;
      namespace event
      {
        class MouseInputListener;
        class MenuKeyListener;
        class MenuDragMouseListener;
        class MenuListener;
        class ChangeListener;
      }
    }
  }
}

class javax::swing::plaf::basic::BasicMenuUI : public ::javax::swing::plaf::basic::BasicMenuItemUI
{
public:
  BasicMenuUI ();
public:  // actually protected
  virtual ::javax::swing::event::ChangeListener *createChangeListener (::javax::swing::JComponent *);
  virtual ::javax::swing::event::MenuDragMouseListener *createMenuDragMouseListener (::javax::swing::JComponent *);
  virtual ::javax::swing::event::MenuKeyListener *createMenuKeyListener (::javax::swing::JComponent *);
  virtual ::javax::swing::event::MenuListener *createMenuListener (::javax::swing::JComponent *);
  virtual ::javax::swing::event::MouseInputListener *createMouseInputListener (::javax::swing::JComponent *);
  virtual ::java::beans::PropertyChangeListener *createPropertyChangeListener (::javax::swing::JComponent *);
public:
  static ::javax::swing::plaf::ComponentUI *createUI (::javax::swing::JComponent *);
  virtual ::java::awt::Dimension *getMaximumSize (::javax::swing::JComponent *);
public:  // actually protected
  virtual ::java::lang::String *getPropertyPrefix ();
  virtual void installDefaults ();
  virtual void installKeyboardActions ();
  virtual void installListeners ();
  virtual void setupPostTimer (::javax::swing::JMenu *) { }
  virtual void uninstallDefaults ();
  virtual void uninstallKeyboardActions ();
  virtual void uninstallListeners ();
  ::javax::swing::event::ChangeListener * __attribute__((aligned(__alignof__( ::javax::swing::plaf::basic::BasicMenuItemUI )))) changeListener;
  ::javax::swing::event::MenuListener *menuListener;
  ::java::beans::PropertyChangeListener *propertyChangeListener;

  friend class javax_swing_plaf_basic_BasicMenuUI$MenuKeyHandler;
  friend class javax_swing_plaf_basic_BasicMenuUI$MenuDragMouseHandler;
  friend class javax_swing_plaf_basic_BasicMenuUI$ChangeHandler;
  friend class javax_swing_plaf_basic_BasicMenuUI$MenuHandler;
  friend class javax_swing_plaf_basic_BasicMenuUI$MouseInputHandler;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_plaf_basic_BasicMenuUI__ */

// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_basic_BasicRadioButtonMenuItemUI__
#define __javax_swing_plaf_basic_BasicRadioButtonMenuItemUI__

#pragma interface

#include <javax/swing/plaf/basic/BasicMenuItemUI.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace event
      {
        class MouseEvent;
      }
    }
  }
  namespace javax
  {
    namespace swing
    {
      class MenuSelectionManager;
      class MenuElement;
      class JMenuItem;
      namespace plaf
      {
        namespace basic
        {
          class BasicRadioButtonMenuItemUI;
        }
        class ComponentUI;
      }
      class JComponent;
    }
  }
}

class javax::swing::plaf::basic::BasicRadioButtonMenuItemUI : public ::javax::swing::plaf::basic::BasicMenuItemUI
{
public:
  BasicRadioButtonMenuItemUI ();
  static ::javax::swing::plaf::ComponentUI *createUI (::javax::swing::JComponent *);
public:  // actually protected
  virtual ::java::lang::String *getPropertyPrefix ();
public:
  virtual void processMouseEvent (::javax::swing::JMenuItem *, ::java::awt::event::MouseEvent *, JArray< ::javax::swing::MenuElement *> *, ::javax::swing::MenuSelectionManager *);

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_plaf_basic_BasicRadioButtonMenuItemUI__ */

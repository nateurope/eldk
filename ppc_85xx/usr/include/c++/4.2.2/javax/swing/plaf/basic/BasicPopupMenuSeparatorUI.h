// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_basic_BasicPopupMenuSeparatorUI__
#define __javax_swing_plaf_basic_BasicPopupMenuSeparatorUI__

#pragma interface

#include <javax/swing/plaf/basic/BasicSeparatorUI.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class Dimension;
      class Graphics;
    }
  }
  namespace javax
  {
    namespace swing
    {
      namespace plaf
      {
        namespace basic
        {
          class BasicPopupMenuSeparatorUI;
        }
        class ComponentUI;
      }
      class JComponent;
    }
  }
}

class javax::swing::plaf::basic::BasicPopupMenuSeparatorUI : public ::javax::swing::plaf::basic::BasicSeparatorUI
{
public:
  BasicPopupMenuSeparatorUI ();
  static ::javax::swing::plaf::ComponentUI *createUI (::javax::swing::JComponent *);
  virtual void paint (::java::awt::Graphics *, ::javax::swing::JComponent *);
  virtual ::java::awt::Dimension *getPreferredSize (::javax::swing::JComponent *);

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_plaf_basic_BasicPopupMenuSeparatorUI__ */

// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_metal_MetalMenuBarUI__
#define __javax_swing_plaf_metal_MetalMenuBarUI__

#pragma interface

#include <javax/swing/plaf/basic/BasicMenuBarUI.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class Graphics;
    }
  }
  namespace javax
  {
    namespace swing
    {
      namespace plaf
      {
        namespace metal
        {
          class MetalMenuBarUI;
        }
        class ComponentUI;
      }
      class JComponent;
    }
  }
}

class javax::swing::plaf::metal::MetalMenuBarUI : public ::javax::swing::plaf::basic::BasicMenuBarUI
{
public:
  static ::javax::swing::plaf::ComponentUI *createUI (::javax::swing::JComponent *);
  virtual void update (::java::awt::Graphics *, ::javax::swing::JComponent *);
  MetalMenuBarUI ();

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_plaf_metal_MetalMenuBarUI__ */

// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_metal_MetalLabelUI__
#define __javax_swing_plaf_metal_MetalLabelUI__

#pragma interface

#include <javax/swing/plaf/basic/BasicLabelUI.h>

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
      class JLabel;
      class JComponent;
      namespace plaf
      {
        class ComponentUI;
        namespace metal
        {
          class MetalLabelUI;
        }
      }
    }
  }
}

class javax::swing::plaf::metal::MetalLabelUI : public ::javax::swing::plaf::basic::BasicLabelUI
{
public:
  MetalLabelUI ();
  static ::javax::swing::plaf::ComponentUI *createUI (::javax::swing::JComponent *);
public:  // actually protected
  virtual void paintDisabledText (::javax::swing::JLabel *, ::java::awt::Graphics *, ::java::lang::String *, jint, jint);
  static ::javax::swing::plaf::metal::MetalLabelUI *metalLabelUI;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_plaf_metal_MetalLabelUI__ */

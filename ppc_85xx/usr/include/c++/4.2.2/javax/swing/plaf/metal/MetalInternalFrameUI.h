// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_metal_MetalInternalFrameUI__
#define __javax_swing_plaf_metal_MetalInternalFrameUI__

#pragma interface

#include <javax/swing/plaf/basic/BasicInternalFrameUI.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace plaf
      {
        namespace metal
        {
          class MetalInternalFrameUI;
        }
        class ComponentUI;
      }
      class JComponent;
      class JInternalFrame;
    }
  }
  namespace java
  {
    namespace beans
    {
      class PropertyChangeListener;
    }
  }
}

class javax::swing::plaf::metal::MetalInternalFrameUI : public ::javax::swing::plaf::basic::BasicInternalFrameUI
{
public:
  MetalInternalFrameUI (::javax::swing::JInternalFrame *);
  static ::javax::swing::plaf::ComponentUI *createUI (::javax::swing::JComponent *);
  virtual void installUI (::javax::swing::JComponent *);
public:  // actually protected
  virtual ::javax::swing::JComponent *createNorthPane (::javax::swing::JInternalFrame *);
public:
  virtual void setPalette (jboolean);
public:  // actually protected
  virtual void installListeners ();
  virtual void uninstallListeners ();
  virtual void installKeyboardActions ();
  static ::java::lang::String *IS_PALETTE;
private:
  ::java::beans::PropertyChangeListener * __attribute__((aligned(__alignof__( ::javax::swing::plaf::basic::BasicInternalFrameUI )))) paletteListener;

  friend class javax_swing_plaf_metal_MetalInternalFrameUI$1;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_plaf_metal_MetalInternalFrameUI__ */
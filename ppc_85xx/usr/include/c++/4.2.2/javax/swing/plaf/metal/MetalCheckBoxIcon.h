// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_metal_MetalCheckBoxIcon__
#define __javax_swing_plaf_metal_MetalCheckBoxIcon__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class Graphics;
      class Component;
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
          class MetalCheckBoxIcon;
          class MetalBorders$ButtonBorder;
        }
      }
    }
  }
}

class javax::swing::plaf::metal::MetalCheckBoxIcon : public ::java::lang::Object
{
public:
  MetalCheckBoxIcon ();
public:  // actually protected
  virtual void drawCheck (::java::awt::Component *, ::java::awt::Graphics *, jint, jint);
  virtual jint getControlSize ();
public:
  virtual jint getIconWidth ();
  virtual jint getIconHeight ();
  virtual void paintIcon (::java::awt::Component *, ::java::awt::Graphics *, jint, jint);
public: // actually package-private
  ::javax::swing::plaf::metal::MetalBorders$ButtonBorder * __attribute__((aligned(__alignof__( ::java::lang::Object )))) border;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_plaf_metal_MetalCheckBoxIcon__ */

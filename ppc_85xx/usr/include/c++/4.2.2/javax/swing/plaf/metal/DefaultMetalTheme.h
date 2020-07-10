// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_metal_DefaultMetalTheme__
#define __javax_swing_plaf_metal_DefaultMetalTheme__

#pragma interface

#include <javax/swing/plaf/metal/MetalTheme.h>

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
          class DefaultMetalTheme;
        }
        class FontUIResource;
        class ColorUIResource;
      }
    }
  }
}

class javax::swing::plaf::metal::DefaultMetalTheme : public ::javax::swing::plaf::metal::MetalTheme
{
public:
  DefaultMetalTheme ();
  virtual ::java::lang::String *getName ();
public:  // actually protected
  virtual ::javax::swing::plaf::ColorUIResource *getPrimary1 ();
  virtual ::javax::swing::plaf::ColorUIResource *getPrimary2 ();
  virtual ::javax::swing::plaf::ColorUIResource *getPrimary3 ();
  virtual ::javax::swing::plaf::ColorUIResource *getSecondary1 ();
  virtual ::javax::swing::plaf::ColorUIResource *getSecondary2 ();
  virtual ::javax::swing::plaf::ColorUIResource *getSecondary3 ();
public:
  virtual ::javax::swing::plaf::FontUIResource *getControlTextFont ();
  virtual ::javax::swing::plaf::FontUIResource *getMenuTextFont ();
  virtual ::javax::swing::plaf::FontUIResource *getSubTextFont ();
  virtual ::javax::swing::plaf::FontUIResource *getSystemTextFont ();
  virtual ::javax::swing::plaf::FontUIResource *getUserTextFont ();
  virtual ::javax::swing::plaf::FontUIResource *getWindowTitleFont ();
private:
  static ::javax::swing::plaf::ColorUIResource *PRIMARY1;
  static ::javax::swing::plaf::ColorUIResource *PRIMARY2;
  static ::javax::swing::plaf::ColorUIResource *PRIMARY3;
  static ::javax::swing::plaf::ColorUIResource *SECONDARY1;
  static ::javax::swing::plaf::ColorUIResource *SECONDARY2;
  static ::javax::swing::plaf::ColorUIResource *SECONDARY3;
  static ::javax::swing::plaf::FontUIResource *CONTROL_TEXT_FONT;
  static ::javax::swing::plaf::FontUIResource *MENU_TEXT_FONT;
  static ::javax::swing::plaf::FontUIResource *SUB_TEXT_FONT;
  static ::javax::swing::plaf::FontUIResource *SYSTEM_TEXT_FONT;
  static ::javax::swing::plaf::FontUIResource *USER_TEXT_FONT;
  static ::javax::swing::plaf::FontUIResource *WINDOW_TITLE_FONT;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_plaf_metal_DefaultMetalTheme__ */

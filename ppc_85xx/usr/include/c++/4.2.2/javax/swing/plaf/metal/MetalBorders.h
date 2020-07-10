// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_metal_MetalBorders__
#define __javax_swing_plaf_metal_MetalBorders__

#pragma interface

#include <java/lang/Object.h>

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
          class MetalBorders;
        }
        namespace basic
        {
          class BasicBorders$MarginBorder;
        }
      }
      namespace border
      {
        class Border;
      }
    }
  }
}

class javax::swing::plaf::metal::MetalBorders : public ::java::lang::Object
{
public:
  static ::javax::swing::border::Border *getButtonBorder ();
  static ::javax::swing::border::Border *getToggleButtonBorder ();
  static ::javax::swing::border::Border *getDesktopIconBorder ();
  static ::javax::swing::border::Border *getTextFieldBorder ();
  static ::javax::swing::border::Border *getTextBorder ();
public: // actually package-private
  static ::javax::swing::border::Border *getToolbarButtonBorder ();
  static ::javax::swing::border::Border *getMarginBorder ();
  static ::javax::swing::border::Border *getRolloverBorder ();
public:
  MetalBorders ();
private:
  static ::javax::swing::border::Border *buttonBorder;
  static ::javax::swing::border::Border *toggleButtonBorder;
  static ::javax::swing::border::Border *desktopIconBorder;
  static ::javax::swing::border::Border *toolbarButtonBorder;
  static ::javax::swing::border::Border *textFieldBorder;
  static ::javax::swing::border::Border *textBorder;
  static ::javax::swing::border::Border *rolloverBorder;
  static ::javax::swing::plaf::basic::BasicBorders$MarginBorder *marginBorder;

  friend class javax_swing_plaf_metal_MetalBorders$TableHeaderBorder;
  friend class javax_swing_plaf_metal_MetalBorders$ToolBarBorder;
  friend class javax_swing_plaf_metal_MetalBorders$ToggleButtonBorder;
  friend class javax_swing_plaf_metal_MetalBorders$PopupMenuBorder;
  friend class javax_swing_plaf_metal_MetalBorders$RolloverMarginBorder;
  friend class javax_swing_plaf_metal_MetalBorders$RolloverButtonBorder;
  friend class javax_swing_plaf_metal_MetalBorders$ScrollPaneBorder;
  friend class javax_swing_plaf_metal_MetalBorders$MenuBarBorder;
  friend class javax_swing_plaf_metal_MetalBorders$MenuItemBorder;
  friend class javax_swing_plaf_metal_MetalBorders$OptionDialogBorder;
  friend class javax_swing_plaf_metal_MetalBorders$InternalFrameBorder;
  friend class javax_swing_plaf_metal_MetalBorders$TextFieldBorder;
  friend class javax_swing_plaf_metal_MetalBorders$PaletteBorder;
  friend class javax_swing_plaf_metal_MetalBorders$Flush3DBorder;
  friend class javax_swing_plaf_metal_MetalBorders$DesktopIconBorder;
  friend class javax_swing_plaf_metal_MetalBorders$ButtonBorder;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_plaf_metal_MetalBorders__ */
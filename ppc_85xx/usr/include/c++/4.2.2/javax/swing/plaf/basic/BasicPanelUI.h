// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_basic_BasicPanelUI__
#define __javax_swing_plaf_basic_BasicPanelUI__

#pragma interface

#include <javax/swing/plaf/PanelUI.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      class JPanel;
      class JComponent;
      namespace plaf
      {
        class ComponentUI;
        namespace basic
        {
          class BasicPanelUI;
        }
      }
    }
  }
}

class javax::swing::plaf::basic::BasicPanelUI : public ::javax::swing::plaf::PanelUI
{
public:
  static ::javax::swing::plaf::ComponentUI *createUI (::javax::swing::JComponent *);
  virtual void installUI (::javax::swing::JComponent *);
public:  // actually protected
  virtual void installDefaults (::javax::swing::JPanel *);
public:
  virtual void uninstallUI (::javax::swing::JComponent *);
public:  // actually protected
  virtual void uninstallDefaults (::javax::swing::JPanel *);
public:
  BasicPanelUI ();
public: // actually package-private
  static ::javax::swing::plaf::basic::BasicPanelUI *sharedUI;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_plaf_basic_BasicPanelUI__ */
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_basic_BasicSpinnerUI__
#define __javax_swing_plaf_basic_BasicSpinnerUI__

#pragma interface

#include <javax/swing/plaf/SpinnerUI.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class Component;
      class LayoutManager;
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
      namespace plaf
      {
        namespace basic
        {
          class BasicSpinnerUI;
        }
        class ComponentUI;
      }
      class JComponent;
      class JSpinner;
    }
  }
}

class javax::swing::plaf::basic::BasicSpinnerUI : public ::javax::swing::plaf::SpinnerUI
{
public:
  static ::javax::swing::plaf::ComponentUI *createUI (::javax::swing::JComponent *);
public:  // actually protected
  virtual ::javax::swing::JComponent *createEditor ();
  virtual ::java::awt::LayoutManager *createLayout ();
  virtual ::java::awt::Component *createNextButton ();
  virtual ::java::awt::Component *createPreviousButton ();
  virtual ::java::beans::PropertyChangeListener *createPropertyChangeListener ();
  virtual void installDefaults ();
  virtual void installListeners ();
  virtual void installNextButtonListeners (::java::awt::Component *);
  virtual void installPreviousButtonListeners (::java::awt::Component *);
public:
  virtual void installUI (::javax::swing::JComponent *);
public:  // actually protected
  virtual void replaceEditor (::javax::swing::JComponent *, ::javax::swing::JComponent *);
  virtual void uninstallDefaults ();
  virtual void uninstallListeners ();
public:
  virtual void uninstallUI (::javax::swing::JComponent *);
  BasicSpinnerUI ();
public:  // actually protected
  ::javax::swing::JSpinner * __attribute__((aligned(__alignof__( ::javax::swing::plaf::SpinnerUI )))) spinner;
private:
  ::java::beans::PropertyChangeListener *listener;

  friend class javax_swing_plaf_basic_BasicSpinnerUI$DefaultLayoutManager;
  friend class javax_swing_plaf_basic_BasicSpinnerUI$4;
  friend class javax_swing_plaf_basic_BasicSpinnerUI$2;
  friend class javax_swing_plaf_basic_BasicSpinnerUI$1;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_plaf_basic_BasicSpinnerUI__ */

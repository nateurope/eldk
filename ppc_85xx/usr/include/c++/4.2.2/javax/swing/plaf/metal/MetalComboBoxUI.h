// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_metal_MetalComboBoxUI__
#define __javax_swing_plaf_metal_MetalComboBoxUI__

#pragma interface

#include <javax/swing/plaf/basic/BasicComboBoxUI.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class Container;
      class Dimension;
      class LayoutManager;
      class Graphics;
    }
    namespace beans
    {
      class PropertyChangeEvent;
      class PropertyChangeListener;
    }
  }
  namespace javax
  {
    namespace swing
    {
      class JButton;
      class ComboBoxEditor;
      namespace plaf
      {
        namespace metal
        {
          class MetalComboBoxUI;
          class MetalComboBoxUI$MetalComboBoxLayoutManager;
        }
        namespace basic
        {
          class ComboPopup;
        }
        class ComponentUI;
      }
      class JComponent;
    }
  }
}

class javax::swing::plaf::metal::MetalComboBoxUI : public ::javax::swing::plaf::basic::BasicComboBoxUI
{
public:
  MetalComboBoxUI ();
  static ::javax::swing::plaf::ComponentUI *createUI (::javax::swing::JComponent *);
public:  // actually protected
  virtual ::javax::swing::ComboBoxEditor *createEditor ();
  virtual ::javax::swing::plaf::basic::ComboPopup *createPopup ();
  virtual ::javax::swing::JButton *createArrowButton ();
public:
  virtual ::java::beans::PropertyChangeListener *createPropertyChangeListener ();
  virtual void paint (::java::awt::Graphics *, ::javax::swing::JComponent *) { }
public:  // actually protected
  virtual void editablePropertyChanged (::java::beans::PropertyChangeEvent *);
  virtual ::java::awt::LayoutManager *createLayoutManager ();
  virtual void removeListeners () { }
public:
  virtual ::java::awt::Dimension *getMinimumSize (::javax::swing::JComponent *);
  virtual void configureEditor ();
  virtual void unconfigureEditor ();
  virtual void layoutComboBox (::java::awt::Container *, ::javax::swing::plaf::metal::MetalComboBoxUI$MetalComboBoxLayoutManager *);

  friend class javax_swing_plaf_metal_MetalComboBoxUI$MetalComboPopup;
  friend class javax_swing_plaf_metal_MetalComboBoxUI$MetalPropertyChangeListener;
  friend class javax_swing_plaf_metal_MetalComboBoxUI$MetalComboBoxLayoutManager;

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_plaf_metal_MetalComboBoxUI__ */
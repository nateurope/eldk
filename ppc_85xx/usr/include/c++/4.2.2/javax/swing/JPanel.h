// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_JPanel__
#define __javax_swing_JPanel__

#pragma interface

#include <javax/swing/JComponent.h>

extern "Java"
{
  namespace javax
  {
    namespace accessibility
    {
      class AccessibleContext;
    }
    namespace swing
    {
      class JPanel;
      namespace plaf
      {
        class PanelUI;
      }
    }
  }
  namespace java
  {
    namespace awt
    {
      class LayoutManager;
    }
  }
}

class javax::swing::JPanel : public ::javax::swing::JComponent
{
public:
  JPanel ();
  JPanel (jboolean);
  JPanel (::java::awt::LayoutManager *);
  JPanel (::java::awt::LayoutManager *, jboolean);
  virtual ::java::lang::String *getUIClassID ();
  virtual void setUI (::javax::swing::plaf::PanelUI *);
  virtual ::javax::swing::plaf::PanelUI *getUI ();
  virtual void updateUI ();
  virtual ::javax::accessibility::AccessibleContext *getAccessibleContext ();
public:  // actually protected
  virtual ::java::lang::String *paramString ();

  friend class javax_swing_JPanel$AccessibleJPanel;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_JPanel__ */

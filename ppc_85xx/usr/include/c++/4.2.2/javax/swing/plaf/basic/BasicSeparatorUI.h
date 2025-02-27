// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_basic_BasicSeparatorUI__
#define __javax_swing_plaf_basic_BasicSeparatorUI__

#pragma interface

#include <javax/swing/plaf/SeparatorUI.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      class JSeparator;
      namespace plaf
      {
        namespace basic
        {
          class BasicSeparatorUI;
        }
        class ComponentUI;
      }
      class JComponent;
    }
  }
  namespace java
  {
    namespace awt
    {
      class Dimension;
      class Graphics;
      class Color;
    }
  }
}

class javax::swing::plaf::basic::BasicSeparatorUI : public ::javax::swing::plaf::SeparatorUI
{
public:
  static ::javax::swing::plaf::ComponentUI *createUI (::javax::swing::JComponent *);
  virtual void installUI (::javax::swing::JComponent *);
  virtual void uninstallUI (::javax::swing::JComponent *);
public:  // actually protected
  virtual void installDefaults (::javax::swing::JSeparator *);
  virtual void uninstallDefaults (::javax::swing::JSeparator *);
  virtual void installListeners (::javax::swing::JSeparator *) { }
  virtual void uninstallListeners (::javax::swing::JSeparator *) { }
public:
  virtual void paint (::java::awt::Graphics *, ::javax::swing::JComponent *);
  virtual ::java::awt::Dimension *getPreferredSize (::javax::swing::JComponent *);
  virtual ::java::awt::Dimension *getMinimumSize (::javax::swing::JComponent *);
  virtual ::java::awt::Dimension *getMaximumSize (::javax::swing::JComponent *);
  BasicSeparatorUI ();
public:  // actually protected
  ::java::awt::Color * __attribute__((aligned(__alignof__( ::javax::swing::plaf::SeparatorUI )))) shadow;
  ::java::awt::Color *highlight;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_plaf_basic_BasicSeparatorUI__ */

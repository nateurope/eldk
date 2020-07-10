// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_multi_MultiListUI__
#define __javax_swing_plaf_multi_MultiListUI__

#pragma interface

#include <javax/swing/plaf/ListUI.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class Rectangle;
      class Point;
      class Dimension;
      class Graphics;
    }
  }
  namespace javax
  {
    namespace accessibility
    {
      class Accessible;
    }
    namespace swing
    {
      class JList;
      namespace plaf
      {
        namespace multi
        {
          class MultiListUI;
        }
        class ComponentUI;
      }
      class JComponent;
    }
  }
}

class javax::swing::plaf::multi::MultiListUI : public ::javax::swing::plaf::ListUI
{
public:
  MultiListUI ();
  static ::javax::swing::plaf::ComponentUI *createUI (::javax::swing::JComponent *);
  virtual void installUI (::javax::swing::JComponent *);
  virtual void uninstallUI (::javax::swing::JComponent *);
  virtual JArray< ::javax::swing::plaf::ComponentUI *> *getUIs ();
  virtual jboolean contains (::javax::swing::JComponent *, jint, jint);
  virtual void update (::java::awt::Graphics *, ::javax::swing::JComponent *);
  virtual void paint (::java::awt::Graphics *, ::javax::swing::JComponent *);
  virtual ::java::awt::Dimension *getPreferredSize (::javax::swing::JComponent *);
  virtual ::java::awt::Dimension *getMinimumSize (::javax::swing::JComponent *);
  virtual ::java::awt::Dimension *getMaximumSize (::javax::swing::JComponent *);
  virtual jint getAccessibleChildrenCount (::javax::swing::JComponent *);
  virtual ::javax::accessibility::Accessible *getAccessibleChild (::javax::swing::JComponent *, jint);
  virtual jint locationToIndex (::javax::swing::JList *, ::java::awt::Point *);
  virtual ::java::awt::Point *indexToLocation (::javax::swing::JList *, jint);
  virtual ::java::awt::Rectangle *getCellBounds (::javax::swing::JList *, jint, jint);
public:  // actually protected
  ::java::util::Vector * __attribute__((aligned(__alignof__( ::javax::swing::plaf::ListUI )))) uis;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_plaf_multi_MultiListUI__ */

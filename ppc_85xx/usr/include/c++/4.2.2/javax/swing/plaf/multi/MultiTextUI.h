// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_multi_MultiTextUI__
#define __javax_swing_plaf_multi_MultiTextUI__

#pragma interface

#include <javax/swing/plaf/TextUI.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class Point;
      class Rectangle;
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
      namespace text
      {
        class View;
        class EditorKit;
        class Position$Bias;
        class JTextComponent;
      }
      namespace plaf
      {
        namespace multi
        {
          class MultiTextUI;
        }
        class ComponentUI;
      }
      class JComponent;
    }
  }
}

class javax::swing::plaf::multi::MultiTextUI : public ::javax::swing::plaf::TextUI
{
public:
  MultiTextUI ();
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
  virtual ::java::awt::Rectangle *modelToView (::javax::swing::text::JTextComponent *, jint);
  virtual ::java::awt::Rectangle *modelToView (::javax::swing::text::JTextComponent *, jint, ::javax::swing::text::Position$Bias *);
  virtual jint viewToModel (::javax::swing::text::JTextComponent *, ::java::awt::Point *);
  virtual jint viewToModel (::javax::swing::text::JTextComponent *, ::java::awt::Point *, JArray< ::javax::swing::text::Position$Bias *> *);
  virtual jint getNextVisualPositionFrom (::javax::swing::text::JTextComponent *, jint, ::javax::swing::text::Position$Bias *, jint, JArray< ::javax::swing::text::Position$Bias *> *);
  virtual void damageRange (::javax::swing::text::JTextComponent *, jint, jint);
  virtual void damageRange (::javax::swing::text::JTextComponent *, jint, jint, ::javax::swing::text::Position$Bias *, ::javax::swing::text::Position$Bias *);
  virtual ::javax::swing::text::EditorKit *getEditorKit (::javax::swing::text::JTextComponent *);
  virtual ::javax::swing::text::View *getRootView (::javax::swing::text::JTextComponent *);
public:  // actually protected
  ::java::util::Vector * __attribute__((aligned(__alignof__( ::javax::swing::plaf::TextUI )))) uis;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_plaf_multi_MultiTextUI__ */

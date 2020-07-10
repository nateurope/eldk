// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_metal_MetalTabbedPaneUI__
#define __javax_swing_plaf_metal_MetalTabbedPaneUI__

#pragma interface

#include <javax/swing/plaf/basic/BasicTabbedPaneUI.h>
#include <gcj/array.h>

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
          class MetalTabbedPaneUI;
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
      class Rectangle;
      class LayoutManager;
      class Graphics;
      class Color;
    }
  }
}

class javax::swing::plaf::metal::MetalTabbedPaneUI : public ::javax::swing::plaf::basic::BasicTabbedPaneUI
{
public:
  MetalTabbedPaneUI ();
  static ::javax::swing::plaf::ComponentUI *createUI (::javax::swing::JComponent *);
public:  // actually protected
  virtual ::java::awt::LayoutManager *createLayoutManager ();
  virtual void paintTabBorder (::java::awt::Graphics *, jint, jint, jint, jint, jint, jint, jboolean);
  virtual void paintTopTabBorder (jint, ::java::awt::Graphics *, jint, jint, jint, jint, jint, jint, jboolean);
  virtual void paintLeftTabBorder (jint, ::java::awt::Graphics *, jint, jint, jint, jint, jint, jint, jboolean);
  virtual void paintRightTabBorder (jint, ::java::awt::Graphics *, jint, jint, jint, jint, jint, jint, jboolean);
  virtual void paintBottomTabBorder (jint, ::java::awt::Graphics *, jint, jint, jint, jint, jint, jint, jboolean);
  virtual void paintTabBackground (::java::awt::Graphics *, jint, jint, jint, jint, jint, jint, jboolean);
  virtual void paintFocusIndicator (::java::awt::Graphics *, jint, JArray< ::java::awt::Rectangle *> *, jint, ::java::awt::Rectangle *, ::java::awt::Rectangle *, jboolean);
  virtual jboolean shouldPadTabRun (jint, jint);
  virtual void installDefaults ();
  virtual ::java::awt::Color *getColorForGap (jint, jint, jint);
  virtual jboolean shouldFillGap (jint, jint, jint, jint);
  virtual void paintHighlightBelowTab ();
  virtual jboolean shouldRotateTabRuns (jint, jint);
  virtual jint calculateMaxTabHeight (jint);
  virtual jint getTabRunOverlay (jint);
  virtual void paintContentBorderTopEdge (::java::awt::Graphics *, jint, jint, jint, jint, jint, jint);
  virtual void paintContentBorderBottomEdge (::java::awt::Graphics *, jint, jint, jint, jint, jint, jint);
  virtual void paintContentBorderLeftEdge (::java::awt::Graphics *, jint, jint, jint, jint, jint, jint);
  virtual void paintContentBorderRightEdge (::java::awt::Graphics *, jint, jint, jint, jint, jint, jint);
private:
  jboolean isLastTabInRun (jint);
  ::java::awt::Color *getUnselectedBackground (jint);
public:  // actually protected
  virtual jint getTabLabelShiftX (jint, jint, jboolean);
  virtual jint getTabLabelShiftY (jint, jint, jboolean);
  jint __attribute__((aligned(__alignof__( ::javax::swing::plaf::basic::BasicTabbedPaneUI ))))  minTabWidth;
  ::java::awt::Color *selectColor;
  ::java::awt::Color *selectHighlight;
  ::java::awt::Color *tabAreaBackground;
private:
  ::java::awt::Graphics *hg;
  jboolean tabsOpaque;

  friend class javax_swing_plaf_metal_MetalTabbedPaneUI$TabbedPaneLayout;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_plaf_metal_MetalTabbedPaneUI__ */
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_metal_MetalSliderUI__
#define __javax_swing_plaf_metal_MetalSliderUI__

#pragma interface

#include <javax/swing/plaf/basic/BasicSliderUI.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      class JSlider;
      namespace plaf
      {
        namespace metal
        {
          class MetalSliderUI;
        }
        class ComponentUI;
      }
      class JComponent;
      class Icon;
    }
  }
  namespace java
  {
    namespace beans
    {
      class PropertyChangeListener;
    }
    namespace awt
    {
      class Rectangle;
      class Dimension;
      class Graphics;
      class Color;
    }
  }
}

class javax::swing::plaf::metal::MetalSliderUI : public ::javax::swing::plaf::basic::BasicSliderUI
{
public:
  MetalSliderUI ();
  static ::javax::swing::plaf::ComponentUI *createUI (::javax::swing::JComponent *);
  virtual void installUI (::javax::swing::JComponent *);
public:  // actually protected
  virtual ::java::beans::PropertyChangeListener *createPropertyChangeListener (::javax::swing::JSlider *);
public:
  virtual void paintThumb (::java::awt::Graphics *);
  virtual void paintTrack (::java::awt::Graphics *);
  virtual void paintFocus (::java::awt::Graphics *);
public:  // actually protected
  virtual ::java::awt::Dimension *getThumbSize ();
public:
  virtual jint getTickLength ();
public:  // actually protected
  virtual jint getTrackWidth ();
  virtual jint getTrackLength ();
  virtual jint getThumbOverhang ();
  virtual void scrollDueToClickInTrack (jint);
  virtual void paintMinorTickForHorizSlider (::java::awt::Graphics *, ::java::awt::Rectangle *, jint);
  virtual void paintMajorTickForHorizSlider (::java::awt::Graphics *, ::java::awt::Rectangle *, jint);
  virtual void paintMinorTickForVertSlider (::java::awt::Graphics *, ::java::awt::Rectangle *, jint);
  virtual void paintMajorTickForVertSlider (::java::awt::Graphics *, ::java::awt::Rectangle *, jint);
  static ::java::awt::Color *thumbColor;
  static ::java::awt::Color *highlightColor;
  static ::java::awt::Color *darkShadowColor;
  static jint trackWidth;
  static jint tickLength;
  static ::javax::swing::Icon *horizThumbIcon;
  static ::javax::swing::Icon *vertThumbIcon;
  jint __attribute__((aligned(__alignof__( ::javax::swing::plaf::basic::BasicSliderUI ))))  TICK_BUFFER;
  ::java::lang::String *SLIDER_FILL;
  jboolean filledSlider;

  friend class javax_swing_plaf_metal_MetalSliderUI$MetalPropertyListener;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_plaf_metal_MetalSliderUI__ */

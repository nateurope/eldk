// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_basic_BasicSliderUI__
#define __javax_swing_plaf_basic_BasicSliderUI__

#pragma interface

#include <javax/swing/plaf/SliderUI.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class Graphics;
      class Component;
      class Dimension;
      class Color;
      class Rectangle;
      class Insets;
      namespace event
      {
        class FocusListener;
        class ComponentListener;
      }
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
      class ActionMap;
      class InputMap;
      class JComponent;
      class JSlider;
      class Timer;
      namespace plaf
      {
        class ComponentUI;
        namespace basic
        {
          class BasicSliderUI;
          class BasicSliderUI$TrackListener;
          class BasicSliderUI$ScrollListener;
        }
      }
      namespace event
      {
        class ChangeListener;
      }
    }
  }
}

class javax::swing::plaf::basic::BasicSliderUI : public ::javax::swing::plaf::SliderUI
{
public:
  BasicSliderUI (::javax::swing::JSlider *);
public:  // actually protected
  virtual jboolean isDragging () { return dragging; }
  virtual ::java::awt::Color *getShadowColor () { return shadowColor; }
  virtual ::java::awt::Color *getHighlightColor () { return highlightColor; }
  virtual ::java::awt::Color *getFocusColor () { return focusColor; }
public:
  static ::javax::swing::plaf::ComponentUI *createUI (::javax::swing::JComponent *);
  virtual void installUI (::javax::swing::JComponent *);
  virtual void uninstallUI (::javax::swing::JComponent *);
public:  // actually protected
  virtual void installDefaults (::javax::swing::JSlider *);
  virtual ::javax::swing::plaf::basic::BasicSliderUI$TrackListener *createTrackListener (::javax::swing::JSlider *);
  virtual ::javax::swing::event::ChangeListener *createChangeListener (::javax::swing::JSlider *);
  virtual ::java::awt::event::ComponentListener *createComponentListener (::javax::swing::JSlider *);
  virtual ::java::awt::event::FocusListener *createFocusListener (::javax::swing::JSlider *);
  virtual ::javax::swing::plaf::basic::BasicSliderUI$ScrollListener *createScrollListener (::javax::swing::JSlider *);
  virtual ::java::beans::PropertyChangeListener *createPropertyChangeListener (::javax::swing::JSlider *);
  virtual void installListeners (::javax::swing::JSlider *);
  virtual void uninstallListeners (::javax::swing::JSlider *);
  virtual void installKeyboardActions (::javax::swing::JSlider *);
  virtual void uninstallKeyboardActions (::javax::swing::JSlider *);
public:
  virtual ::java::awt::Dimension *getPreferredHorizontalSize ();
  virtual ::java::awt::Dimension *getPreferredVerticalSize ();
  virtual ::java::awt::Dimension *getMinimumHorizontalSize ();
  virtual ::java::awt::Dimension *getMinimumVerticalSize ();
  virtual ::java::awt::Dimension *getPreferredSize (::javax::swing::JComponent *);
  virtual ::java::awt::Dimension *getMinimumSize (::javax::swing::JComponent *);
  virtual ::java::awt::Dimension *getMaximumSize (::javax::swing::JComponent *);
public:  // actually protected
  virtual void calculateGeometry ();
  virtual void calculateFocusRect ();
  virtual void calculateThumbSize ();
  virtual void calculateContentRect ();
  virtual void calculateThumbLocation ();
  virtual void calculateTrackBuffer ();
  virtual ::java::awt::Dimension *getThumbSize ();
  virtual void calculateTrackRect ();
  virtual jint getTickLength ();
  virtual void calculateTickRect ();
  virtual void calculateLabelRect ();
  virtual jint getWidthOfWidestLabel ();
  virtual jint getHeightOfTallestLabel ();
  virtual jint getWidthOfHighValueLabel ();
  virtual jint getWidthOfLowValueLabel ();
  virtual jint getHeightOfHighValueLabel ();
  virtual jint getHeightOfLowValueLabel ();
  virtual jboolean drawInverted ();
  virtual ::java::awt::Component *getLowestValueLabel ();
  virtual ::java::awt::Component *getHighestValueLabel ();
public:
  virtual void paint (::java::awt::Graphics *, ::javax::swing::JComponent *);
public:  // actually protected
  virtual void recalculateIfInsetsChanged ();
  virtual void recalculateIfOrientationChanged ();
public:
  virtual void paintFocus (::java::awt::Graphics *);
  virtual void paintTrack (::java::awt::Graphics *);
  virtual void paintTicks (::java::awt::Graphics *);
public:  // actually protected
  virtual void paintMinorTickForHorizSlider (::java::awt::Graphics *, ::java::awt::Rectangle *, jint);
  virtual void paintMajorTickForHorizSlider (::java::awt::Graphics *, ::java::awt::Rectangle *, jint);
  virtual void paintMinorTickForVertSlider (::java::awt::Graphics *, ::java::awt::Rectangle *, jint);
  virtual void paintMajorTickForVertSlider (::java::awt::Graphics *, ::java::awt::Rectangle *, jint);
public:
  virtual void paintLabels (::java::awt::Graphics *);
public:  // actually protected
  virtual void paintHorizontalLabel (::java::awt::Graphics *, jint, ::java::awt::Component *);
  virtual void paintVerticalLabel (::java::awt::Graphics *, jint, ::java::awt::Component *);
public:
  virtual void paintThumb (::java::awt::Graphics *);
  virtual void setThumbLocation (jint, jint);
  virtual void scrollByBlock (jint);
  virtual void scrollByUnit (jint);
public:  // actually protected
  virtual void scrollDueToClickInTrack (jint);
  virtual jint xPositionForValue (jint);
  virtual jint yPositionForValue (jint);
public:
  virtual jint valueForYPosition (jint);
  virtual jint valueForXPosition (jint);
public: // actually package-private
  virtual jint findClosestTick (jint);
  virtual ::javax::swing::InputMap *getInputMap (jint);
  virtual ::javax::swing::ActionMap *getActionMap ();
  virtual ::javax::swing::ActionMap *createActionMap ();
public:  // actually protected
  ::javax::swing::event::ChangeListener * __attribute__((aligned(__alignof__( ::javax::swing::plaf::SliderUI )))) changeListener;
  ::java::beans::PropertyChangeListener *propertyChangeListener;
  ::javax::swing::plaf::basic::BasicSliderUI$ScrollListener *scrollListener;
  ::java::awt::event::ComponentListener *componentListener;
  ::java::awt::event::FocusListener *focusListener;
  ::javax::swing::plaf::basic::BasicSliderUI$TrackListener *trackListener;
  ::java::awt::Insets *focusInsets;
  ::java::awt::Insets *insetCache;
  ::java::awt::Rectangle *contentRect;
  ::java::awt::Rectangle *focusRect;
  ::java::awt::Rectangle *thumbRect;
  ::java::awt::Rectangle *tickRect;
  ::java::awt::Rectangle *labelRect;
  ::java::awt::Rectangle *trackRect;
public:
  static const jint MAX_SCROLL = 2L;
  static const jint MIN_SCROLL = -2L;
  static const jint NEGATIVE_SCROLL = -1L;
  static const jint POSITIVE_SCROLL = 1L;
public:  // actually protected
  jint trackBuffer;
  jboolean leftToRightCache;
  ::javax::swing::Timer *scrollTimer;
  ::javax::swing::JSlider *slider;
private:
  ::java::awt::Color *shadowColor;
  ::java::awt::Color *highlightColor;
  ::java::awt::Color *focusColor;
  jboolean hasFocus;
public: // actually package-private
  jboolean dragging;

  friend class javax_swing_plaf_basic_BasicSliderUI$6;
  friend class javax_swing_plaf_basic_BasicSliderUI$5;
  friend class javax_swing_plaf_basic_BasicSliderUI$4;
  friend class javax_swing_plaf_basic_BasicSliderUI$3;
  friend class javax_swing_plaf_basic_BasicSliderUI$2;
  friend class javax_swing_plaf_basic_BasicSliderUI$1;
  friend class javax_swing_plaf_basic_BasicSliderUI$ActionScroller;
  friend class javax_swing_plaf_basic_BasicSliderUI$TrackListener;
  friend class javax_swing_plaf_basic_BasicSliderUI$ScrollListener;
  friend class javax_swing_plaf_basic_BasicSliderUI$PropertyChangeHandler;
  friend class javax_swing_plaf_basic_BasicSliderUI$FocusHandler;
  friend class javax_swing_plaf_basic_BasicSliderUI$ComponentHandler;
  friend class javax_swing_plaf_basic_BasicSliderUI$ChangeHandler;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_plaf_basic_BasicSliderUI__ */
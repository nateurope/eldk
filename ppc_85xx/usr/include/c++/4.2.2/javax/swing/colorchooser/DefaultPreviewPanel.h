// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_colorchooser_DefaultPreviewPanel__
#define __javax_swing_colorchooser_DefaultPreviewPanel__

#pragma interface

#include <javax/swing/JPanel.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace colorchooser
      {
        class DefaultPreviewPanel;
      }
    }
  }
  namespace java
  {
    namespace awt
    {
      class Dimension;
      class Color;
      class Graphics;
    }
  }
}

class javax::swing::colorchooser::DefaultPreviewPanel : public ::javax::swing::JPanel
{
public: // actually package-private
  DefaultPreviewPanel ();
public:
  virtual void paint (::java::awt::Graphics *);
private:
  void paintSquare (::java::awt::Graphics *, jint, jint, ::java::awt::Color *, ::java::awt::Color *, ::java::awt::Color *, jint, jint, jint);
public:
  virtual ::java::awt::Dimension *getPreferredSize ();
private:
  static jint largeGap;
  static jint smallGap;
  static jint squareSize;
  static jint textPadding;
  static jint rightSideRectWidth;
  static ::java::lang::String *sample;

  friend class javax_swing_colorchooser_DefaultPreviewPanel$PreviewBorder;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_colorchooser_DefaultPreviewPanel__ */

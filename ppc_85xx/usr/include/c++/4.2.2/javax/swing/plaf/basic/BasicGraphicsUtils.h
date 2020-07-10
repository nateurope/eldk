// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_basic_BasicGraphicsUtils__
#define __javax_swing_plaf_basic_BasicGraphicsUtils__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace plaf
      {
        namespace basic
        {
          class BasicGraphicsUtils;
        }
      }
      class AbstractButton;
      class JComponent;
    }
  }
  namespace java
  {
    namespace awt
    {
      class Dimension;
      class Insets;
      class Color;
      class Graphics;
    }
  }
}

class javax::swing::plaf::basic::BasicGraphicsUtils : public ::java::lang::Object
{
public:
  BasicGraphicsUtils ();
  static void drawEtchedRect (::java::awt::Graphics *, jint, jint, jint, jint, ::java::awt::Color *, ::java::awt::Color *, ::java::awt::Color *, ::java::awt::Color *);
  static ::java::awt::Insets *getEtchedInsets ();
  static void drawGroove (::java::awt::Graphics *, jint, jint, jint, jint, ::java::awt::Color *, ::java::awt::Color *);
  static ::java::awt::Insets *getGrooveInsets ();
  static void drawBezel (::java::awt::Graphics *, jint, jint, jint, jint, jboolean, jboolean, ::java::awt::Color *, ::java::awt::Color *, ::java::awt::Color *, ::java::awt::Color *);
  static void drawLoweredBezel (::java::awt::Graphics *, jint, jint, jint, jint, ::java::awt::Color *, ::java::awt::Color *, ::java::awt::Color *, ::java::awt::Color *);
  static void drawString (::java::awt::Graphics *, ::java::lang::String *, jint, jint, jint);
  static void drawStringUnderlineCharAt (::java::awt::Graphics *, ::java::lang::String *, jint, jint, jint);
public: // actually package-private
  static void drawString (::javax::swing::JComponent *, ::java::awt::Graphics *, ::java::lang::String *, jint, jint, jint);
  static void drawStringUnderlineCharAt (::javax::swing::JComponent *, ::java::awt::Graphics *, ::java::lang::String *, jint, jint, jint);
public:
  static void drawDashedRect (::java::awt::Graphics *, jint, jint, jint, jint);
  static ::java::awt::Dimension *getPreferredButtonSize (::javax::swing::AbstractButton *, jint);
public: // actually package-private
  static ::java::lang::String *CACHED_TEXT_LAYOUT;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_plaf_basic_BasicGraphicsUtils__ */

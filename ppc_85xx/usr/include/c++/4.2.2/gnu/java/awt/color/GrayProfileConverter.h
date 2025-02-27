// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_awt_color_GrayProfileConverter__
#define __gnu_java_awt_color_GrayProfileConverter__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace color
      {
        class ICC_ProfileGray;
      }
    }
  }
  namespace gnu
  {
    namespace java
    {
      namespace awt
      {
        namespace color
        {
          class GrayProfileConverter;
          class ColorLookUpTable;
          class ToneReproductionCurve;
          class GrayScaleConverter;
        }
      }
    }
  }
}

class gnu::java::awt::color::GrayProfileConverter : public ::java::lang::Object
{
public:
  GrayProfileConverter (::java::awt::color::ICC_ProfileGray *);
  virtual jfloatArray toCIEXYZ (jfloatArray);
  virtual jfloatArray toRGB (jfloatArray);
  virtual jfloatArray fromRGB (jfloatArray);
  virtual jfloatArray fromCIEXYZ (jfloatArray);
private:
  ::gnu::java::awt::color::GrayScaleConverter * __attribute__((aligned(__alignof__( ::java::lang::Object )))) gc;
  ::gnu::java::awt::color::ToneReproductionCurve *trc;
  ::gnu::java::awt::color::ColorLookUpTable *toPCS;
  ::gnu::java::awt::color::ColorLookUpTable *fromPCS;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_awt_color_GrayProfileConverter__ */

// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_color_ICC_ProfileGray__
#define __java_awt_color_ICC_ProfileGray__

#pragma interface

#include <java/awt/color/ICC_Profile.h>
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
}

class java::awt::color::ICC_ProfileGray : public ::java::awt::color::ICC_Profile
{
public: // actually package-private
  ICC_ProfileGray (jint);
  ICC_ProfileGray (jbyteArray);
public:
  virtual jfloatArray getMediaWhitePoint ();
  virtual jfloat getGamma ();
  virtual jshortArray getTRC ();
private:
  static const jlong serialVersionUID = -1124721290732002649LL;
  jfloatArray __attribute__((aligned(__alignof__( ::java::awt::color::ICC_Profile ))))  whitePoint;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_awt_color_ICC_ProfileGray__ */

// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_image_ShortLookupTable__
#define __java_awt_image_ShortLookupTable__

#pragma interface

#include <java/awt/image/LookupTable.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace image
      {
        class ShortLookupTable;
      }
    }
  }
}

class java::awt::image::ShortLookupTable : public ::java::awt::image::LookupTable
{
public:
  ShortLookupTable (jint, JArray<jshortArray> *);
  ShortLookupTable (jint, jshortArray);
  virtual JArray<jshortArray> * getTable () { return data; }
  virtual jintArray lookupPixel (jintArray, jintArray);
  virtual jshortArray lookupPixel (jshortArray, jshortArray);
private:
  JArray<jshortArray> * __attribute__((aligned(__alignof__( ::java::awt::image::LookupTable ))))  data;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_awt_image_ShortLookupTable__ */

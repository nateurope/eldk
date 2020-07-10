// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_image_ByteLookupTable__
#define __java_awt_image_ByteLookupTable__

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
        class ByteLookupTable;
      }
    }
  }
}

class java::awt::image::ByteLookupTable : public ::java::awt::image::LookupTable
{
public:
  ByteLookupTable (jint, JArray<jbyteArray> *);
  ByteLookupTable (jint, jbyteArray);
  virtual JArray<jbyteArray> * getTable () { return data; }
  virtual jintArray lookupPixel (jintArray, jintArray);
  virtual jbyteArray lookupPixel (jbyteArray, jbyteArray);
private:
  JArray<jbyteArray> * __attribute__((aligned(__alignof__( ::java::awt::image::LookupTable ))))  data;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_awt_image_ByteLookupTable__ */
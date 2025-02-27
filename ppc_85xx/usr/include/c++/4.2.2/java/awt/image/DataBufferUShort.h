// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_image_DataBufferUShort__
#define __java_awt_image_DataBufferUShort__

#pragma interface

#include <java/awt/image/DataBuffer.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace image
      {
        class DataBufferUShort;
      }
    }
  }
}

class java::awt::image::DataBufferUShort : public ::java::awt::image::DataBuffer
{
public:
  DataBufferUShort (jint);
  DataBufferUShort (jint, jint);
  DataBufferUShort (jshortArray, jint);
  DataBufferUShort (jshortArray, jint, jint);
  DataBufferUShort (JArray<jshortArray> *, jint);
  DataBufferUShort (JArray<jshortArray> *, jint, jintArray);
  virtual jshortArray getData () { return data; }
  virtual jshortArray getData (jint);
  virtual JArray<jshortArray> * getBankData () { return bankData; }
  virtual jint getElem (jint);
  virtual jint getElem (jint, jint);
  virtual void setElem (jint, jint);
  virtual void setElem (jint, jint, jint);
private:
  jshortArray __attribute__((aligned(__alignof__( ::java::awt::image::DataBuffer ))))  data;
  JArray<jshortArray> * bankData;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_awt_image_DataBufferUShort__ */

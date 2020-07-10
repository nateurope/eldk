// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_image_DataBufferInt__
#define __java_awt_image_DataBufferInt__

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
        class DataBufferInt;
      }
    }
  }
}

class java::awt::image::DataBufferInt : public ::java::awt::image::DataBuffer
{
public:
  DataBufferInt (jint);
  DataBufferInt (jint, jint);
  DataBufferInt (jintArray, jint);
  DataBufferInt (jintArray, jint, jint);
  DataBufferInt (JArray<jintArray> *, jint);
  DataBufferInt (JArray<jintArray> *, jint, jintArray);
  virtual jintArray getData () { return data; }
  virtual jintArray getData (jint);
  virtual JArray<jintArray> * getBankData () { return bankData; }
  virtual jint getElem (jint);
  virtual jint getElem (jint, jint);
  virtual void setElem (jint, jint);
  virtual void setElem (jint, jint, jint);
private:
  jintArray __attribute__((aligned(__alignof__( ::java::awt::image::DataBuffer ))))  data;
  JArray<jintArray> * bankData;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_awt_image_DataBufferInt__ */
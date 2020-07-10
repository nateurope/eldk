// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_image_DataBufferDouble__
#define __java_awt_image_DataBufferDouble__

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
        class DataBufferDouble;
      }
    }
  }
}

class java::awt::image::DataBufferDouble : public ::java::awt::image::DataBuffer
{
public:
  DataBufferDouble (jint);
  DataBufferDouble (jint, jint);
  DataBufferDouble (jdoubleArray, jint);
  DataBufferDouble (jdoubleArray, jint, jint);
  DataBufferDouble (JArray<jdoubleArray> *, jint);
  DataBufferDouble (JArray<jdoubleArray> *, jint, jintArray);
  virtual jdoubleArray getData () { return data; }
  virtual jdoubleArray getData (jint);
  virtual JArray<jdoubleArray> * getBankData () { return bankData; }
  virtual jint getElem (jint);
  virtual jint getElem (jint, jint);
  virtual void setElem (jint, jint);
  virtual void setElem (jint, jint, jint);
  virtual jfloat getElemFloat (jint);
  virtual jfloat getElemFloat (jint, jint);
  virtual void setElemFloat (jint, jfloat);
  virtual void setElemFloat (jint, jint, jfloat);
  virtual jdouble getElemDouble (jint);
  virtual jdouble getElemDouble (jint, jint);
  virtual void setElemDouble (jint, jdouble);
  virtual void setElemDouble (jint, jint, jdouble);
private:
  jdoubleArray __attribute__((aligned(__alignof__( ::java::awt::image::DataBuffer ))))  data;
  JArray<jdoubleArray> * bankData;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_awt_image_DataBufferDouble__ */
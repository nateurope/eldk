// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_SizeRequirements__
#define __javax_swing_SizeRequirements__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      class SizeRequirements;
    }
  }
}

class javax::swing::SizeRequirements : public ::java::lang::Object
{
public:
  SizeRequirements ();
  SizeRequirements (jint, jint, jint, jfloat);
  virtual ::java::lang::String *toString ();
  static ::javax::swing::SizeRequirements *getTiledSizeRequirements (JArray< ::javax::swing::SizeRequirements *> *);
  static ::javax::swing::SizeRequirements *getAlignedSizeRequirements (JArray< ::javax::swing::SizeRequirements *> *);
  static void calculateTiledPositions (jint, ::javax::swing::SizeRequirements *, JArray< ::javax::swing::SizeRequirements *> *, jintArray, jintArray);
  static void calculateTiledPositions (jint, ::javax::swing::SizeRequirements *, JArray< ::javax::swing::SizeRequirements *> *, jintArray, jintArray, jboolean);
private:
  static void adjustSmaller (jint, JArray< ::javax::swing::SizeRequirements *> *, jintArray, jint);
  static void adjustGreater (jint, JArray< ::javax::swing::SizeRequirements *> *, jintArray, jint);
public:
  static void calculateAlignedPositions (jint, ::javax::swing::SizeRequirements *, JArray< ::javax::swing::SizeRequirements *> *, jintArray, jintArray);
  static void calculateAlignedPositions (jint, ::javax::swing::SizeRequirements *, JArray< ::javax::swing::SizeRequirements *> *, jintArray, jintArray, jboolean);
private:
  static void adjustFromRight (::javax::swing::SizeRequirements *, jfloat, jint, jintArray);
  static void adjustFromLeft (::javax::swing::SizeRequirements *, jfloat, jint, jintArray);
public:
  static jintArray adjustSizes (jint, JArray< ::javax::swing::SizeRequirements *> *) { return 0; }
private:
  static const jlong serialVersionUID = 9217749429906736553LL;
public:
  jint __attribute__((aligned(__alignof__( ::java::lang::Object ))))  minimum;
  jint preferred;
  jint maximum;
  jfloat alignment;

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_SizeRequirements__ */

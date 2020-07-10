// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_lang_Math__
#define __java_lang_Math__

#pragma interface

#include <java/lang/Object.h>

class java::lang::Math : public ::java::lang::Object
{
private:
  Math ();
public:
  static jint abs (jint);
  static jlong abs (jlong);
  static jfloat abs (jfloat);
  static jdouble abs (jdouble);
  static jint min (jint, jint);
  static jlong min (jlong, jlong);
  static jfloat min (jfloat, jfloat);
  static jdouble min (jdouble, jdouble);
  static jint max (jint, jint);
  static jlong max (jlong, jlong);
  static jfloat max (jfloat, jfloat);
  static jdouble max (jdouble, jdouble);
  static jdouble sin (jdouble);
  static jdouble cos (jdouble);
  static jdouble tan (jdouble);
  static jdouble asin (jdouble);
  static jdouble acos (jdouble);
  static jdouble atan (jdouble);
  static jdouble atan2 (jdouble, jdouble);
  static jdouble exp (jdouble);
  static jdouble log (jdouble);
  static jdouble sqrt (jdouble);
  static jdouble pow (jdouble, jdouble);
  static jdouble IEEEremainder (jdouble, jdouble);
  static jdouble ceil (jdouble);
  static jdouble floor (jdouble);
  static jdouble rint (jdouble);
  static jint round (jfloat);
  static jlong round (jdouble);
  static jdouble random ();
  static jdouble toRadians (jdouble);
  static jdouble toDegrees (jdouble);
  static jdouble cbrt (jdouble);
  static jdouble cosh (jdouble);
  static jdouble expm1 (jdouble);
  static jdouble hypot (jdouble, jdouble);
  static jdouble log10 (jdouble);
  static jdouble log1p (jdouble);
  static jdouble signum (jdouble);
  static jfloat signum (jfloat);
  static jdouble sinh (jdouble);
  static jdouble tanh (jdouble);
  static jdouble ulp (jdouble);
  static jfloat ulp (jfloat);
private:
  static ::java::util::Random *rand;
public:
  static const jdouble E;
  static const jdouble PI;

  static ::java::lang::Class class$;
};

#endif /* __java_lang_Math__ */
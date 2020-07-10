// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_lang_StrictMath__
#define __java_lang_StrictMath__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

class java::lang::StrictMath : public ::java::lang::Object
{
private:
  StrictMath ();
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
  static jdouble cosh (jdouble);
private:
  static jint getLowDWord (jlong);
  static jint getHighDWord (jlong);
  static jdouble buildDouble (jint, jint);
public:
  static jdouble cbrt (jdouble);
  static jdouble exp (jdouble);
  static jdouble expm1 (jdouble);
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
private:
  static jint remPiOver2 (jdouble, jdoubleArray);
  static jint remPiOver2 (jdoubleArray, jdoubleArray, jint, jint);
  static jdouble scale (jdouble, jint);
  static jdouble sin (jdouble, jdouble);
  static jdouble cos (jdouble, jdouble);
  static jdouble tan (jdouble, jdouble, jboolean);
public:
  static jdouble signum (jdouble);
  static jfloat signum (jfloat);
  static jdouble ulp (jdouble);
  static jfloat ulp (jfloat);
private:
  static ::java::util::Random *rand;
public:
  static const jdouble E;
  static const jdouble PI;
private:
  static const jdouble TWO_16;
  static const jdouble TWO_20;
  static const jdouble TWO_24;
  static const jdouble TWO_27;
  static const jdouble TWO_28;
  static const jdouble TWO_29;
  static const jdouble TWO_31;
  static const jdouble TWO_49;
  static const jdouble TWO_52;
  static const jdouble TWO_54;
  static const jdouble TWO_57;
  static const jdouble TWO_60;
  static const jdouble TWO_64;
  static const jdouble TWO_66;
  static const jdouble TWO_1023;
  static jintArray TWO_OVER_PI;
  static jdoubleArray PI_OVER_TWO;
  static const jdouble PI_L;
  static const jdouble PIO2_1;
  static const jdouble PIO2_1L;
  static const jdouble PIO2_2;
  static const jdouble PIO2_2L;
  static const jdouble PIO2_3;
  static const jdouble PIO2_3L;
  static const jdouble SQRT_1_5;
  static const jdouble SQRT_2;
  static const jdouble SQRT_3;
  static const jdouble EXP_LIMIT_H;
  static const jdouble EXP_LIMIT_L;
  static const jdouble CP;
  static const jdouble CP_H;
  static const jdouble CP_L;
  static const jdouble LN2;
  static const jdouble LN2_H;
  static const jdouble LN2_L;
  static const jdouble INV_LN2;
  static const jdouble INV_LN2_H;
  static const jdouble INV_LN2_L;
  static const jdouble LG1;
  static const jdouble LG2;
  static const jdouble LG3;
  static const jdouble LG4;
  static const jdouble LG5;
  static const jdouble LG6;
  static const jdouble LG7;
  static const jdouble L1;
  static const jdouble L2;
  static const jdouble L3;
  static const jdouble L4;
  static const jdouble L5;
  static const jdouble L6;
  static const jdouble P1;
  static const jdouble P2;
  static const jdouble P3;
  static const jdouble P4;
  static const jdouble P5;
  static const jdouble DP_H;
  static const jdouble DP_L;
  static const jdouble OVT;
  static const jdouble S1;
  static const jdouble S2;
  static const jdouble S3;
  static const jdouble S4;
  static const jdouble S5;
  static const jdouble S6;
  static const jdouble C1;
  static const jdouble C2;
  static const jdouble C3;
  static const jdouble C4;
  static const jdouble C5;
  static const jdouble C6;
  static const jdouble T0;
  static const jdouble T1;
  static const jdouble T2;
  static const jdouble T3;
  static const jdouble T4;
  static const jdouble T5;
  static const jdouble T6;
  static const jdouble T7;
  static const jdouble T8;
  static const jdouble T9;
  static const jdouble T10;
  static const jdouble T11;
  static const jdouble T12;
  static const jdouble PS0;
  static const jdouble PS1;
  static const jdouble PS2;
  static const jdouble PS3;
  static const jdouble PS4;
  static const jdouble PS5;
  static const jdouble QS1;
  static const jdouble QS2;
  static const jdouble QS3;
  static const jdouble QS4;
  static const jdouble ATAN_0_5H;
  static const jdouble ATAN_0_5L;
  static const jdouble ATAN_1_5H;
  static const jdouble ATAN_1_5L;
  static const jdouble AT0;
  static const jdouble AT1;
  static const jdouble AT2;
  static const jdouble AT3;
  static const jdouble AT4;
  static const jdouble AT5;
  static const jdouble AT6;
  static const jdouble AT7;
  static const jdouble AT8;
  static const jdouble AT9;
  static const jdouble AT10;
  static const jint CBRT_B1 = 715094163L;
  static const jint CBRT_B2 = 696219795L;
  static const jdouble CBRT_C;
  static const jdouble CBRT_D;
  static const jdouble CBRT_E;
  static const jdouble CBRT_F;
  static const jdouble CBRT_G;
  static const jdouble EXPM1_Q1;
  static const jdouble EXPM1_Q2;
  static const jdouble EXPM1_Q3;
  static const jdouble EXPM1_Q4;
  static const jdouble EXPM1_Q5;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_lang_StrictMath__ */
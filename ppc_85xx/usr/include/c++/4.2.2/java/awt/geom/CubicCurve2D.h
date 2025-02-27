// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_geom_CubicCurve2D__
#define __java_awt_geom_CubicCurve2D__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class Rectangle;
      namespace geom
      {
        class PathIterator;
        class AffineTransform;
        class Rectangle2D;
        class CubicCurve2D;
        class Point2D;
      }
    }
  }
}

class java::awt::geom::CubicCurve2D : public ::java::lang::Object
{
public:  // actually protected
  CubicCurve2D ();
public:
  virtual jdouble getX1 () = 0;
  virtual jdouble getY1 () = 0;
  virtual ::java::awt::geom::Point2D *getP1 () = 0;
  virtual jdouble getCtrlX1 () = 0;
  virtual jdouble getCtrlY1 () = 0;
  virtual ::java::awt::geom::Point2D *getCtrlP1 () = 0;
  virtual jdouble getCtrlX2 () = 0;
  virtual jdouble getCtrlY2 () = 0;
  virtual ::java::awt::geom::Point2D *getCtrlP2 () = 0;
  virtual jdouble getX2 () = 0;
  virtual jdouble getY2 () = 0;
  virtual ::java::awt::geom::Point2D *getP2 () = 0;
  virtual void setCurve (jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble) = 0;
  virtual void setCurve (jdoubleArray, jint);
  virtual void setCurve (::java::awt::geom::Point2D *, ::java::awt::geom::Point2D *, ::java::awt::geom::Point2D *, ::java::awt::geom::Point2D *);
  virtual void setCurve (JArray< ::java::awt::geom::Point2D *> *, jint);
  virtual void setCurve (::java::awt::geom::CubicCurve2D *);
  static jdouble getFlatnessSq (jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
  static jdouble getFlatness (jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
  static jdouble getFlatnessSq (jdoubleArray, jint);
  static jdouble getFlatness (jdoubleArray, jint);
  virtual jdouble getFlatnessSq ();
  virtual jdouble getFlatness ();
  virtual void subdivide (::java::awt::geom::CubicCurve2D *, ::java::awt::geom::CubicCurve2D *);
  static void subdivide (::java::awt::geom::CubicCurve2D *, ::java::awt::geom::CubicCurve2D *, ::java::awt::geom::CubicCurve2D *);
  static void subdivide (jdoubleArray, jint, jdoubleArray, jint, jdoubleArray, jint);
  static jint solveCubic (jdoubleArray);
  static jint solveCubic (jdoubleArray, jdoubleArray);
  virtual jboolean contains (jdouble, jdouble);
  virtual jboolean contains (::java::awt::geom::Point2D *);
  virtual jboolean intersects (jdouble, jdouble, jdouble, jdouble);
  virtual jboolean intersects (::java::awt::geom::Rectangle2D *);
  virtual jboolean contains (jdouble, jdouble, jdouble, jdouble);
  virtual jboolean contains (::java::awt::geom::Rectangle2D *);
  virtual ::java::awt::Rectangle *getBounds ();
  virtual ::java::awt::geom::PathIterator *getPathIterator (::java::awt::geom::AffineTransform *);
  virtual ::java::awt::geom::PathIterator *getPathIterator (::java::awt::geom::AffineTransform *, jdouble);
  virtual ::java::lang::Object *clone ();
private:
  jint getAxisIntersections (jdouble, jdouble, jboolean, jdouble);
  static const jdouble BIG_VALUE;
  static const jdouble EPSILON;

  friend class java_awt_geom_CubicCurve2D$Float;
  friend class java_awt_geom_CubicCurve2D$Double;
  friend class java_awt_geom_CubicCurve2D$1;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_awt_geom_CubicCurve2D__ */

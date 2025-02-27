// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_geom_Line2D__
#define __java_awt_geom_Line2D__

#pragma interface

#include <java/lang/Object.h>

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
        class Line2D;
        class Point2D;
      }
    }
  }
}

class java::awt::geom::Line2D : public ::java::lang::Object
{
public:  // actually protected
  Line2D ();
public:
  virtual jdouble getX1 () = 0;
  virtual jdouble getY1 () = 0;
  virtual ::java::awt::geom::Point2D *getP1 () = 0;
  virtual jdouble getX2 () = 0;
  virtual jdouble getY2 () = 0;
  virtual ::java::awt::geom::Point2D *getP2 () = 0;
  virtual void setLine (jdouble, jdouble, jdouble, jdouble) = 0;
  virtual void setLine (::java::awt::geom::Point2D *, ::java::awt::geom::Point2D *);
  virtual void setLine (::java::awt::geom::Line2D *);
  static jint relativeCCW (jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
  virtual jint relativeCCW (jdouble, jdouble);
  virtual jint relativeCCW (::java::awt::geom::Point2D *);
private:
  static jdouble area2 (jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
  static jboolean between (jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
public:
  static jboolean linesIntersect (jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
  virtual jboolean intersectsLine (jdouble, jdouble, jdouble, jdouble);
  virtual jboolean intersectsLine (::java::awt::geom::Line2D *);
  static jdouble ptSegDistSq (jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
  static jdouble ptSegDist (jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
  virtual jdouble ptSegDistSq (jdouble, jdouble);
  virtual jdouble ptSegDistSq (::java::awt::geom::Point2D *);
  virtual jdouble ptSegDist (jdouble, jdouble);
  virtual jdouble ptSegDist (::java::awt::geom::Point2D *);
  static jdouble ptLineDistSq (jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
  static jdouble ptLineDist (jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
  virtual jdouble ptLineDistSq (jdouble, jdouble);
  virtual jdouble ptLineDistSq (::java::awt::geom::Point2D *);
  virtual jdouble ptLineDist (jdouble, jdouble);
  virtual jdouble ptLineDist (::java::awt::geom::Point2D *);
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

  friend class java_awt_geom_Line2D$Float;
  friend class java_awt_geom_Line2D$Double;
  friend class java_awt_geom_Line2D$1;

  static ::java::lang::Class class$;
};

#endif /* __java_awt_geom_Line2D__ */

// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_awt_java2d_LineSegment__
#define __gnu_java_awt_java2d_LineSegment__

#pragma interface

#include <gnu/java/awt/java2d/Segment.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace awt
      {
        namespace java2d
        {
          class LineSegment;
          class Segment;
        }
      }
    }
  }
  namespace java
  {
    namespace awt
    {
      namespace geom
      {
        class Point2D;
      }
    }
  }
}

class gnu::java::awt::java2d::LineSegment : public ::gnu::java::awt::java2d::Segment
{
public:
  LineSegment (jdouble, jdouble, jdouble, jdouble);
  LineSegment (::java::awt::geom::Point2D *, ::java::awt::geom::Point2D *);
  virtual ::java::lang::Object *clone ();
  virtual JArray< ::gnu::java::awt::java2d::Segment *> *getDisplacedSegments (jdouble);
  virtual void reverse ();
  virtual jdoubleArray cp1 ();
  virtual jdoubleArray cp2 ();

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_awt_java2d_LineSegment__ */
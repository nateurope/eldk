// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_GridBagLayout__
#define __java_awt_GridBagLayout__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class GridBagLayout;
      class Rectangle;
      class Point;
      class Dimension;
      class Container;
      class Component;
      class GridBagConstraints;
      class GridBagLayoutInfo;
    }
  }
}

class java::awt::GridBagLayout : public ::java::lang::Object
{
public:
  GridBagLayout ();
private:
  jint sumIntArray (jintArray, jint);
  jint sumIntArray (jintArray);
  jdouble sumDoubleArray (jdoubleArray);
public:
  virtual void addLayoutComponent (::java::lang::String *, ::java::awt::Component *) { }
  virtual void removeLayoutComponent (::java::awt::Component *) { }
  virtual void addLayoutComponent (::java::awt::Component *, ::java::lang::Object *);
  virtual ::java::awt::Dimension *preferredLayoutSize (::java::awt::Container *);
  virtual ::java::awt::Dimension *minimumLayoutSize (::java::awt::Container *);
  virtual ::java::awt::Dimension *maximumLayoutSize (::java::awt::Container *);
  virtual void layoutContainer (::java::awt::Container *);
  virtual jfloat getLayoutAlignmentX (::java::awt::Container *);
  virtual jfloat getLayoutAlignmentY (::java::awt::Container *);
  virtual void invalidateLayout (::java::awt::Container *);
  virtual void setConstraints (::java::awt::Component *, ::java::awt::GridBagConstraints *);
  virtual ::java::awt::GridBagConstraints *getConstraints (::java::awt::Component *);
public:  // actually protected
  virtual ::java::awt::GridBagConstraints *lookupConstraints (::java::awt::Component *);
private:
  ::java::awt::GridBagConstraints *lookupInternalConstraints (::java::awt::Component *);
public:
  virtual ::java::awt::Point *getLayoutOrigin ();
  virtual JArray<jintArray> * getLayoutDimensions ();
  virtual JArray<jdoubleArray> * getLayoutWeights ();
  virtual ::java::awt::Point *location (jint, jint);
public:  // actually protected
  virtual void AdjustForGravity (::java::awt::GridBagConstraints *, ::java::awt::Rectangle *);
  virtual void ArrangeGrid (::java::awt::Container *);
  virtual ::java::awt::GridBagLayoutInfo *GetLayoutInfo (::java::awt::Container *, jint);
  virtual ::java::awt::Dimension *GetMinSize (::java::awt::Container *, ::java::awt::GridBagLayoutInfo *);
  virtual ::java::awt::Dimension *getMinSize (::java::awt::Container *, ::java::awt::GridBagLayoutInfo *);
private:
  void sortBySpan (::java::awt::Component *, jint, ::java::util::ArrayList *, jboolean);
  void distributeSizeAndWeight (jint, jdouble, jint, jint, jintArray, jdoubleArray);
  void calcCellWeights (jdouble, jdoubleArray, jint, jint);
  void calcCellSizes (jintArray, jdoubleArray, jint);
  void dumpLayoutInfo (::java::awt::GridBagLayoutInfo *);
  void dumpArray (jintArray);
  void dumpArray (jdoubleArray);
public:  // actually protected
  virtual void arrangeGrid (::java::awt::Container *);
  virtual ::java::awt::GridBagLayoutInfo *getLayoutInfo (::java::awt::Container *, jint);
  virtual void adjustForGravity (::java::awt::GridBagConstraints *, ::java::awt::Rectangle *);
private:
  static const jlong serialVersionUID = 8838754796412211005LL;
public:  // actually protected
  static const jint MINSIZE = 1L;
  static const jint PREFERREDSIZE = 2L;
  static const jint MAXGRIDSIZE = 512L;
  ::java::util::Hashtable * __attribute__((aligned(__alignof__( ::java::lang::Object )))) comptable;
private:
  ::java::util::Hashtable *internalcomptable;
public:  // actually protected
  ::java::awt::GridBagLayoutInfo *layoutInfo;
  ::java::awt::GridBagConstraints *defaultConstraints;
public:
  jdoubleArray columnWeights;
  jintArray columnWidths;
  jdoubleArray rowWeights;
  jintArray rowHeights;

  static ::java::lang::Class class$;
};

#endif /* __java_awt_GridBagLayout__ */

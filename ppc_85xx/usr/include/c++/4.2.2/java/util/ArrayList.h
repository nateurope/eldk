// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_ArrayList__
#define __java_util_ArrayList__

#pragma interface

#include <java/util/AbstractList.h>
#include <gcj/array.h>

class java::util::ArrayList : public ::java::util::AbstractList
{
public:
  ArrayList (jint);
  ArrayList ();
  ArrayList (::java::util::Collection *);
  virtual void trimToSize ();
  virtual void ensureCapacity (jint);
  virtual jint size () { return size__; }
  virtual jboolean isEmpty ();
  virtual jboolean contains (::java::lang::Object *);
  virtual jint indexOf (::java::lang::Object *);
  virtual jint lastIndexOf (::java::lang::Object *);
  virtual ::java::lang::Object *clone ();
  virtual JArray< ::java::lang::Object *> *toArray ();
  virtual JArray< ::java::lang::Object *> *toArray (JArray< ::java::lang::Object *> *);
  virtual ::java::lang::Object *get (jint);
  virtual ::java::lang::Object *set (jint, ::java::lang::Object *);
  virtual jboolean add (::java::lang::Object *);
  virtual void add (jint, ::java::lang::Object *);
  virtual ::java::lang::Object *remove (jint);
  virtual void clear ();
  virtual jboolean addAll (::java::util::Collection *);
  virtual jboolean addAll (jint, ::java::util::Collection *);
public:  // actually protected
  virtual void removeRange (jint, jint);
private:
  void checkBoundInclusive (jint);
  void checkBoundExclusive (jint);
public: // actually package-private
  virtual jboolean removeAllInternal (::java::util::Collection *);
  virtual jboolean retainAllInternal (::java::util::Collection *);
private:
  void writeObject (::java::io::ObjectOutputStream *);
  void readObject (::java::io::ObjectInputStream *);
  static const jlong serialVersionUID = 8683452581122892189LL;
  static const jint DEFAULT_CAPACITY = 10L;
  jint __attribute__((aligned(__alignof__( ::java::util::AbstractList ))))  size__;
  JArray< ::java::lang::Object *> *data;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_util_ArrayList__ */

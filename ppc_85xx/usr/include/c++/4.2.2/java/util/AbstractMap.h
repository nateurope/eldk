// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_AbstractMap__
#define __java_util_AbstractMap__

#pragma interface

#include <java/lang/Object.h>

class java::util::AbstractMap : public ::java::lang::Object
{
public:  // actually protected
  AbstractMap ();
public:
  virtual ::java::util::Set *entrySet () = 0;
  virtual void clear ();
public:  // actually protected
  virtual ::java::lang::Object *clone ();
public:
  virtual jboolean containsKey (::java::lang::Object *);
  virtual jboolean containsValue (::java::lang::Object *);
  virtual jboolean equals (::java::lang::Object *);
  virtual ::java::lang::Object *get (::java::lang::Object *);
  virtual jint hashCode ();
  virtual jboolean isEmpty ();
  virtual ::java::util::Set *keySet ();
  virtual ::java::lang::Object *put (::java::lang::Object *, ::java::lang::Object *);
  virtual void putAll (::java::util::Map *);
  virtual ::java::lang::Object *remove (::java::lang::Object *);
  virtual jint size ();
  virtual ::java::lang::String *toString ();
  virtual ::java::util::Collection *values ();
public: // actually package-private
  static jboolean equals (::java::lang::Object *, ::java::lang::Object *);
  static jint hashCode (::java::lang::Object *);
  static const jint KEYS = 0L;
  static const jint VALUES = 1L;
  static const jint ENTRIES = 2L;
  ::java::util::Set * __attribute__((aligned(__alignof__( ::java::lang::Object )))) keys;
  ::java::util::Collection *values__;

  friend class java_util_AbstractMap$BasicMapEntry;
  friend class java_util_AbstractMap$3;
  friend class java_util_AbstractMap$1;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_util_AbstractMap__ */

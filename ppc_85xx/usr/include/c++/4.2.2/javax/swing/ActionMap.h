// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_ActionMap__
#define __javax_swing_ActionMap__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      class Action;
      class ActionMap;
    }
  }
}

class javax::swing::ActionMap : public ::java::lang::Object
{
public:
  ActionMap ();
  virtual ::javax::swing::Action *get (::java::lang::Object *);
  virtual void put (::java::lang::Object *, ::javax::swing::Action *);
  virtual void remove (::java::lang::Object *);
  virtual ::javax::swing::ActionMap *getParent () { return parent; }
  virtual void setParent (::javax::swing::ActionMap *);
  virtual jint size ();
  virtual void clear ();
  virtual JArray< ::java::lang::Object *> *keys ();
  virtual JArray< ::java::lang::Object *> *allKeys ();
private:
  static const jlong serialVersionUID = -6277518704513986346LL;
  ::java::util::Map * __attribute__((aligned(__alignof__( ::java::lang::Object )))) actionMap;
  ::javax::swing::ActionMap *parent;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_ActionMap__ */

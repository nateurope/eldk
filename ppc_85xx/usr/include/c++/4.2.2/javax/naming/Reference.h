// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_naming_Reference__
#define __javax_naming_Reference__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace naming
    {
      class Reference;
      class RefAddr;
    }
  }
}

class javax::naming::Reference : public ::java::lang::Object
{
public:
  Reference (::java::lang::String *);
  Reference (::java::lang::String *, ::javax::naming::RefAddr *);
  Reference (::java::lang::String *, ::java::lang::String *, ::java::lang::String *);
  Reference (::java::lang::String *, ::javax::naming::RefAddr *, ::java::lang::String *, ::java::lang::String *);
  virtual void add (jint, ::javax::naming::RefAddr *);
  virtual void add (::javax::naming::RefAddr *);
  virtual void clear ();
  virtual ::java::lang::Object *clone ();
private:
  jboolean equals (::java::lang::String *, ::java::lang::String *);
public:
  virtual jboolean equals (::java::lang::Object *);
  virtual ::javax::naming::RefAddr *get (jint);
  virtual ::javax::naming::RefAddr *get (::java::lang::String *);
  virtual ::java::util::Enumeration *getAll ();
  virtual ::java::lang::String *getClassName () { return className; }
  virtual ::java::lang::String *getFactoryClassLocation () { return classFactoryLocation; }
  virtual ::java::lang::String *getFactoryClassName () { return classFactory; }
  virtual jint hashCode ();
  virtual ::java::lang::Object *remove (jint);
  virtual jint size ();
  virtual ::java::lang::String *toString ();
private:
  static const jlong serialVersionUID = -1673475790065791735LL;
public:  // actually protected
  ::java::util::Vector * __attribute__((aligned(__alignof__( ::java::lang::Object )))) addrs;
  ::java::lang::String *classFactory;
  ::java::lang::String *classFactoryLocation;
  ::java::lang::String *className;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_naming_Reference__ */

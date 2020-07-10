// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_management_openmbean_OpenType__
#define __javax_management_openmbean_OpenType__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace management
    {
      namespace openmbean
      {
        class OpenType;
      }
    }
  }
}

class javax::management::openmbean::OpenType : public ::java::lang::Object
{
public:  // actually protected
  OpenType (::java::lang::String *, ::java::lang::String *, ::java::lang::String *);
public:
  virtual jboolean equals (::java::lang::Object *) = 0;
  virtual ::java::lang::String *getClassName () { return className; }
  virtual ::java::lang::String *getDescription () { return description; }
  virtual ::java::lang::String *getTypeName () { return typeName; }
  virtual jint hashCode () = 0;
  virtual jboolean isArray ();
  virtual jboolean isValue (::java::lang::Object *) = 0;
  virtual ::java::lang::String *toString () = 0;
private:
  static const jlong serialVersionUID = -9195195325186646468LL;
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::lang::Object )))) className;
  ::java::lang::String *typeName;
  ::java::lang::String *description;
public:
  static JArray< ::java::lang::String *> *ALLOWED_CLASSNAMES;

  static ::java::lang::Class class$;
};

#endif /* __javax_management_openmbean_OpenType__ */

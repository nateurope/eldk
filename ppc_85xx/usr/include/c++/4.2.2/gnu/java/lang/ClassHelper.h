// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_lang_ClassHelper__
#define __gnu_java_lang_ClassHelper__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace lang
      {
        class ClassHelper;
      }
    }
  }
}

class gnu::java::lang::ClassHelper : public ::java::lang::Object
{
public:
  static ::java::lang::String *getTruncatedClassName (::java::lang::Class *);
  static ::java::lang::String *getTruncatedName (::java::lang::String *);
  static ::java::lang::String *getUserName (::java::lang::Class *);
  static JArray< ::java::lang::reflect::Method *> *getAllMethods (::java::lang::Class *);
  static JArray< ::java::lang::reflect::Field *> *getAllFields (::java::lang::Class *);
  ClassHelper ();
private:
  static ::java::util::Map *allMethods;
  static ::java::util::Map *allFields;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_lang_ClassHelper__ */

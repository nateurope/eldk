// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_naming_directory_SearchResult__
#define __javax_naming_directory_SearchResult__

#pragma interface

#include <javax/naming/Binding.h>

extern "Java"
{
  namespace javax
  {
    namespace naming
    {
      namespace directory
      {
        class SearchResult;
        class Attributes;
      }
    }
  }
}

class javax::naming::directory::SearchResult : public ::javax::naming::Binding
{
public:
  SearchResult (::java::lang::String *, ::java::lang::Object *, ::javax::naming::directory::Attributes *);
  SearchResult (::java::lang::String *, ::java::lang::Object *, ::javax::naming::directory::Attributes *, jboolean);
  SearchResult (::java::lang::String *, ::java::lang::String *, ::java::lang::Object *, ::javax::naming::directory::Attributes *);
  SearchResult (::java::lang::String *, ::java::lang::String *, ::java::lang::Object *, ::javax::naming::directory::Attributes *, jboolean);
  virtual ::javax::naming::directory::Attributes *getAttributes () { return attrs; }
  virtual void setAttributes (::javax::naming::directory::Attributes *);
  virtual ::java::lang::String *toString ();
private:
  static const jlong serialVersionUID = -9158063327699723172LL;
  ::javax::naming::directory::Attributes * __attribute__((aligned(__alignof__( ::javax::naming::Binding )))) attrs;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_naming_directory_SearchResult__ */

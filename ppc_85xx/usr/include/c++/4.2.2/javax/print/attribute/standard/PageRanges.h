// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_print_attribute_standard_PageRanges__
#define __javax_print_attribute_standard_PageRanges__

#pragma interface

#include <javax/print/attribute/SetOfIntegerSyntax.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace print
    {
      namespace attribute
      {
        namespace standard
        {
          class PageRanges;
        }
      }
    }
  }
}

class javax::print::attribute::standard::PageRanges : public ::javax::print::attribute::SetOfIntegerSyntax
{
public:
  PageRanges (jint);
  PageRanges (JArray<jintArray> *);
  PageRanges (jint, jint);
  PageRanges (::java::lang::String *);
  virtual jboolean equals (::java::lang::Object *);
  virtual ::java::lang::Class *getCategory ();
  virtual ::java::lang::String *getName ();
private:
  static const jlong serialVersionUID = 8639895197656148392LL;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_print_attribute_standard_PageRanges__ */
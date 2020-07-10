// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_print_ipp_attribute_defaults_OrientationRequestedDefault__
#define __gnu_javax_print_ipp_attribute_defaults_OrientationRequestedDefault__

#pragma interface

#include <javax/print/attribute/EnumSyntax.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace print
    {
      namespace attribute
      {
        class Attribute;
        class EnumSyntax;
      }
    }
  }
  namespace gnu
  {
    namespace javax
    {
      namespace print
      {
        namespace ipp
        {
          namespace attribute
          {
            namespace defaults
            {
              class OrientationRequestedDefault;
            }
          }
        }
      }
    }
  }
}

class gnu::javax::print::ipp::attribute::defaults::OrientationRequestedDefault : public ::javax::print::attribute::EnumSyntax
{
public:  // actually protected
  OrientationRequestedDefault (jint);
public:
  virtual ::java::lang::Class *getCategory ();
  virtual ::java::lang::String *getName ();
public:  // actually protected
  virtual JArray< ::java::lang::String *> *getStringTable ();
  virtual JArray< ::javax::print::attribute::EnumSyntax *> *getEnumValueTable ();
  virtual jint getOffset ();
public:
  virtual ::javax::print::attribute::Attribute *getAssociatedAttribute ();
  static ::gnu::javax::print::ipp::attribute::defaults::OrientationRequestedDefault *PORTRAIT;
  static ::gnu::javax::print::ipp::attribute::defaults::OrientationRequestedDefault *LANDSCAPE;
  static ::gnu::javax::print::ipp::attribute::defaults::OrientationRequestedDefault *REVERSE_LANDSCAPE;
  static ::gnu::javax::print::ipp::attribute::defaults::OrientationRequestedDefault *REVERSE_PORTRAIT;
private:
  static JArray< ::java::lang::String *> *stringTable;
  static JArray< ::gnu::javax::print::ipp::attribute::defaults::OrientationRequestedDefault *> *enumValueTable;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_print_ipp_attribute_defaults_OrientationRequestedDefault__ */
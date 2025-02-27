// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_print_ipp_attribute_supported_FinishingsSupported__
#define __gnu_javax_print_ipp_attribute_supported_FinishingsSupported__

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
        namespace standard
        {
          class Finishings;
        }
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
            namespace supported
            {
              class FinishingsSupported;
            }
          }
        }
      }
    }
  }
}

class gnu::javax::print::ipp::attribute::supported::FinishingsSupported : public ::javax::print::attribute::EnumSyntax
{
public:  // actually protected
  FinishingsSupported (jint);
public:
  virtual ::java::lang::Class *getCategory ();
  virtual ::java::lang::String *getName ();
public:  // actually protected
  virtual JArray< ::java::lang::String *> *getStringTable ();
  virtual JArray< ::javax::print::attribute::EnumSyntax *> *getEnumValueTable ();
  virtual jint getOffset ();
public:
  virtual ::javax::print::attribute::standard::Finishings *getAssociatedAttribute ();
  static JArray< ::javax::print::attribute::standard::Finishings *> *getAssociatedAttributeArray (::java::util::Set *);
  static ::gnu::javax::print::ipp::attribute::supported::FinishingsSupported *NONE;
  static ::gnu::javax::print::ipp::attribute::supported::FinishingsSupported *STAPLE;
  static ::gnu::javax::print::ipp::attribute::supported::FinishingsSupported *COVER;
  static ::gnu::javax::print::ipp::attribute::supported::FinishingsSupported *BIND;
  static ::gnu::javax::print::ipp::attribute::supported::FinishingsSupported *SADDLE_STITCH;
  static ::gnu::javax::print::ipp::attribute::supported::FinishingsSupported *EDGE_STITCH;
  static ::gnu::javax::print::ipp::attribute::supported::FinishingsSupported *STAPLE_TOP_LEFT;
  static ::gnu::javax::print::ipp::attribute::supported::FinishingsSupported *STAPLE_BOTTOM_LEFT;
  static ::gnu::javax::print::ipp::attribute::supported::FinishingsSupported *STAPLE_TOP_RIGHT;
  static ::gnu::javax::print::ipp::attribute::supported::FinishingsSupported *STAPLE_BOTTOM_RIGHT;
  static ::gnu::javax::print::ipp::attribute::supported::FinishingsSupported *EDGE_STITCH_LEFT;
  static ::gnu::javax::print::ipp::attribute::supported::FinishingsSupported *EDGE_STITCH_TOP;
  static ::gnu::javax::print::ipp::attribute::supported::FinishingsSupported *EDGE_STITCH_RIGHT;
  static ::gnu::javax::print::ipp::attribute::supported::FinishingsSupported *EDGE_STITCH_BOTTOM;
  static ::gnu::javax::print::ipp::attribute::supported::FinishingsSupported *STAPLE_DUAL_LEFT;
  static ::gnu::javax::print::ipp::attribute::supported::FinishingsSupported *STAPLE_DUAL_TOP;
  static ::gnu::javax::print::ipp::attribute::supported::FinishingsSupported *STAPLE_DUAL_RIGHT;
  static ::gnu::javax::print::ipp::attribute::supported::FinishingsSupported *STAPLE_DUAL_BOTTOM;
private:
  static JArray< ::java::lang::String *> *stringTable;
  static JArray< ::gnu::javax::print::ipp::attribute::supported::FinishingsSupported *> *enumValueTable;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_print_ipp_attribute_supported_FinishingsSupported__ */

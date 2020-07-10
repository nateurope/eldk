// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_print_attribute_standard_Finishings__
#define __javax_print_attribute_standard_Finishings__

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
        class EnumSyntax;
        namespace standard
        {
          class Finishings;
        }
      }
    }
  }
}

class javax::print::attribute::standard::Finishings : public ::javax::print::attribute::EnumSyntax
{
public:  // actually protected
  Finishings (jint);
public:
  virtual ::java::lang::Class *getCategory ();
  virtual ::java::lang::String *getName ();
public:  // actually protected
  virtual JArray< ::java::lang::String *> *getStringTable ();
  virtual JArray< ::javax::print::attribute::EnumSyntax *> *getEnumValueTable ();
  virtual jint getOffset ();
private:
  static const jlong serialVersionUID = -627840419548391754LL;
public:
  static ::javax::print::attribute::standard::Finishings *NONE;
  static ::javax::print::attribute::standard::Finishings *STAPLE;
  static ::javax::print::attribute::standard::Finishings *COVER;
  static ::javax::print::attribute::standard::Finishings *BIND;
  static ::javax::print::attribute::standard::Finishings *SADDLE_STITCH;
  static ::javax::print::attribute::standard::Finishings *EDGE_STITCH;
  static ::javax::print::attribute::standard::Finishings *STAPLE_TOP_LEFT;
  static ::javax::print::attribute::standard::Finishings *STAPLE_BOTTOM_LEFT;
  static ::javax::print::attribute::standard::Finishings *STAPLE_TOP_RIGHT;
  static ::javax::print::attribute::standard::Finishings *STAPLE_BOTTOM_RIGHT;
  static ::javax::print::attribute::standard::Finishings *EDGE_STITCH_LEFT;
  static ::javax::print::attribute::standard::Finishings *EDGE_STITCH_TOP;
  static ::javax::print::attribute::standard::Finishings *EDGE_STITCH_RIGHT;
  static ::javax::print::attribute::standard::Finishings *EDGE_STITCH_BOTTOM;
  static ::javax::print::attribute::standard::Finishings *STAPLE_DUAL_LEFT;
  static ::javax::print::attribute::standard::Finishings *STAPLE_DUAL_TOP;
  static ::javax::print::attribute::standard::Finishings *STAPLE_DUAL_RIGHT;
  static ::javax::print::attribute::standard::Finishings *STAPLE_DUAL_BOTTOM;
private:
  static JArray< ::java::lang::String *> *stringTable;
  static JArray< ::javax::print::attribute::standard::Finishings *> *enumValueTable;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_print_attribute_standard_Finishings__ */

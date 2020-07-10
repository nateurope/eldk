// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_print_attribute_standard_MediaTray__
#define __javax_print_attribute_standard_MediaTray__

#pragma interface

#include <javax/print/attribute/standard/Media.h>
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
          class MediaTray;
        }
      }
    }
  }
}

class javax::print::attribute::standard::MediaTray : public ::javax::print::attribute::standard::Media
{
public:  // actually protected
  MediaTray (jint);
  virtual JArray< ::java::lang::String *> *getStringTable ();
  virtual JArray< ::javax::print::attribute::EnumSyntax *> *getEnumValueTable ();
private:
  static const jlong serialVersionUID = -982503611095214703LL;
public:
  static ::javax::print::attribute::standard::MediaTray *TOP;
  static ::javax::print::attribute::standard::MediaTray *MIDDLE;
  static ::javax::print::attribute::standard::MediaTray *BOTTOM;
  static ::javax::print::attribute::standard::MediaTray *ENVELOPE;
  static ::javax::print::attribute::standard::MediaTray *MANUAL;
  static ::javax::print::attribute::standard::MediaTray *LARGE_CAPACITY;
  static ::javax::print::attribute::standard::MediaTray *MAIN;
  static ::javax::print::attribute::standard::MediaTray *SIDE;
private:
  static JArray< ::java::lang::String *> *stringTable;
  static JArray< ::javax::print::attribute::standard::MediaTray *> *enumValueTable;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_print_attribute_standard_MediaTray__ */

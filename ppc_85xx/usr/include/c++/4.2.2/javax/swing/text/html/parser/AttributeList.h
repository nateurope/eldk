// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_html_parser_AttributeList__
#define __javax_swing_text_html_parser_AttributeList__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace text
      {
        namespace html
        {
          namespace parser
          {
            class AttributeList;
          }
        }
      }
    }
  }
  namespace gnu
  {
    namespace javax
    {
      namespace swing
      {
        namespace text
        {
          namespace html
          {
            namespace parser
            {
              namespace support
              {
                class gnuStringIntMapper;
              }
            }
          }
        }
      }
    }
  }
}

class javax::swing::text::html::parser::AttributeList : public ::java::lang::Object
{
public:
  AttributeList (::java::lang::String *);
  AttributeList (::java::lang::String *, jint, jint, ::java::lang::String *, ::java::util::Vector *, ::javax::swing::text::html::parser::AttributeList *);
  virtual jint getModifier () { return modifier; }
  virtual ::java::lang::String *getName () { return name; }
  virtual ::javax::swing::text::html::parser::AttributeList *getNext () { return next; }
  virtual jint getType () { return type; }
  virtual ::java::lang::String *getValue () { return value; }
  virtual ::java::util::Enumeration *getValues ();
  static jint name2type (::java::lang::String *);
  virtual ::java::lang::String *toString () { return name; }
  static ::java::lang::String *type2name (jint);
private:
  static ::gnu::javax::swing::text::html::parser::support::gnuStringIntMapper *mapper;
  static const jlong serialVersionUID = -1361214058742015233LL;
public:
  ::javax::swing::text::html::parser::AttributeList * __attribute__((aligned(__alignof__( ::java::lang::Object )))) next;
  ::java::lang::String *name;
  ::java::lang::String *value;
  ::java::util::Vector *values;
  jint modifier;
  jint type;

  friend class javax_swing_text_html_parser_AttributeList$1;

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_text_html_parser_AttributeList__ */

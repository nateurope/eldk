// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_swing_text_html_parser_htmlAttributeSet__
#define __gnu_javax_swing_text_html_parser_htmlAttributeSet__

#pragma interface

#include <javax/swing/text/SimpleAttributeSet.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace text
      {
        class AttributeSet;
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
              class htmlAttributeSet;
            }
          }
        }
      }
    }
  }
}

class gnu::javax::swing::text::html::parser::htmlAttributeSet : public ::javax::swing::text::SimpleAttributeSet
{
public:
  virtual ::java::lang::Object *getAttribute (::java::lang::Object *);
  virtual ::java::util::Enumeration *getAttributeNames ();
  virtual void setResolveParent (::javax::swing::text::AttributeSet *);
  virtual ::javax::swing::text::AttributeSet *getResolveParent () { return parent; }
  virtual void addAttribute (::java::lang::Object *, ::java::lang::Object *);
  virtual ::javax::swing::text::AttributeSet *copyAttributes ();
  virtual ::java::lang::Object *clone ();
  htmlAttributeSet ();
  static ::gnu::javax::swing::text::html::parser::htmlAttributeSet *EMPTY_HTML_ATTRIBUTE_SET;
public: // actually package-private
  ::javax::swing::text::AttributeSet * __attribute__((aligned(__alignof__( ::javax::swing::text::SimpleAttributeSet )))) parent;

  friend class gnu_javax_swing_text_html_parser_htmlAttributeSet$1;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_swing_text_html_parser_htmlAttributeSet__ */

// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_html_parser_ContentModel__
#define __javax_swing_text_html_parser_ContentModel__

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
            class Element;
            class ContentModel;
          }
        }
      }
    }
  }
}

class javax::swing::text::html::parser::ContentModel : public ::java::lang::Object
{
public:
  ContentModel ();
  ContentModel (::javax::swing::text::html::parser::Element *);
  ContentModel (jint, ::javax::swing::text::html::parser::ContentModel *);
  ContentModel (jint, ::java::lang::Object *, ::javax::swing::text::html::parser::ContentModel *);
  virtual void getElements (::java::util::Vector *);
  virtual jboolean empty ();
  virtual ::javax::swing::text::html::parser::Element *first ();
  virtual jboolean first (::java::lang::Object *);
  virtual ::java::lang::String *toString ();
private:
  static const jlong serialVersionUID = -1130825523866321257LL;
public:
  ::javax::swing::text::html::parser::ContentModel * __attribute__((aligned(__alignof__( ::java::lang::Object )))) next;
  ::java::lang::Object *content;
  jint type;

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_text_html_parser_ContentModel__ */

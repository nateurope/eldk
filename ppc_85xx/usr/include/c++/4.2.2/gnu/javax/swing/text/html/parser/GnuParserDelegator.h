// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_swing_text_html_parser_GnuParserDelegator__
#define __gnu_javax_swing_text_html_parser_GnuParserDelegator__

#pragma interface

#include <javax/swing/text/html/parser/ParserDelegator.h>

extern "Java"
{
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
              class GnuParserDelegator;
              class GnuParserDelegator$gnuParser;
            }
          }
        }
      }
    }
  }
  namespace javax
  {
    namespace swing
    {
      namespace text
      {
        namespace html
        {
          class HTMLEditorKit$ParserCallback;
          namespace parser
          {
            class DTD;
          }
        }
      }
    }
  }
}

class gnu::javax::swing::text::html::parser::GnuParserDelegator : public ::javax::swing::text::html::parser::ParserDelegator
{
public:
  GnuParserDelegator (::javax::swing::text::html::parser::DTD *);
  virtual void parse (::java::io::Reader *, ::javax::swing::text::html::HTMLEditorKit$ParserCallback *, jboolean);
private:
  static const jlong serialVersionUID = -1276686502624777206LL;
  ::javax::swing::text::html::parser::DTD * __attribute__((aligned(__alignof__( ::javax::swing::text::html::parser::ParserDelegator )))) theDtd;
public: // actually package-private
  ::javax::swing::text::html::HTMLEditorKit$ParserCallback *callBack;
  ::gnu::javax::swing::text::html::parser::GnuParserDelegator$gnuParser *gnu;

  friend class gnu_javax_swing_text_html_parser_GnuParserDelegator$gnuParser;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_swing_text_html_parser_GnuParserDelegator__ */
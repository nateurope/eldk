// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_html_parser_ParserDelegator__
#define __javax_swing_text_html_parser_ParserDelegator__

#pragma interface

#include <javax/swing/text/html/HTMLEditorKit$Parser.h>

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
          class HTMLEditorKit$ParserCallback;
          namespace parser
          {
            class ParserDelegator;
            class ParserDelegator$gnuParser;
            class DTD;
          }
        }
      }
    }
  }
}

class javax::swing::text::html::parser::ParserDelegator : public ::javax::swing::text::html::HTMLEditorKit$Parser
{
public:
  virtual void parse (::java::io::Reader *, ::javax::swing::text::html::HTMLEditorKit$ParserCallback *, jboolean);
public:  // actually protected
  static void setDefaultDTD ();
  static ::javax::swing::text::html::parser::DTD *createDTD (::javax::swing::text::html::parser::DTD *, ::java::lang::String *);
public:
  ParserDelegator ();
private:
  static const jlong serialVersionUID = -1276686502624777206LL;
  static ::javax::swing::text::html::parser::DTD *dtd;
public: // actually package-private
  ::javax::swing::text::html::HTMLEditorKit$ParserCallback * __attribute__((aligned(__alignof__( ::javax::swing::text::html::HTMLEditorKit$Parser )))) callBack;
  ::javax::swing::text::html::parser::ParserDelegator$gnuParser *gnu;

  friend class javax_swing_text_html_parser_ParserDelegator$gnuParser;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_text_html_parser_ParserDelegator__ */

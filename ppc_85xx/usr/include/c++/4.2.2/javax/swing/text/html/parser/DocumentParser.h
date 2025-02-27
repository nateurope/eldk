// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_html_parser_DocumentParser__
#define __javax_swing_text_html_parser_DocumentParser__

#pragma interface

#include <javax/swing/text/html/parser/Parser.h>
#include <gcj/array.h>

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
            class TagElement;
            class DTD;
            class DocumentParser$gnuParser;
            class DocumentParser;
          }
        }
      }
    }
  }
}

class javax::swing::text::html::parser::DocumentParser : public ::javax::swing::text::html::parser::Parser
{
public:
  DocumentParser (::javax::swing::text::html::parser::DTD *);
  virtual void parse (::java::io::Reader *, ::javax::swing::text::html::HTMLEditorKit$ParserCallback *, jboolean);
public:  // actually protected
  virtual void handleComment (jcharArray) { }
  virtual void handleEmptyTag (::javax::swing::text::html::parser::TagElement *) { }
  virtual void handleEndTag (::javax::swing::text::html::parser::TagElement *) { }
  virtual void handleError (jint, ::java::lang::String *) { }
  virtual void handleStartTag (::javax::swing::text::html::parser::TagElement *) { }
  virtual void handleText (jcharArray) { }
public: // actually package-private
  ::javax::swing::text::html::parser::DocumentParser * __attribute__((aligned(__alignof__( ::javax::swing::text::html::parser::Parser )))) parser;
  ::javax::swing::text::html::HTMLEditorKit$ParserCallback *callBack;
  ::javax::swing::text::html::parser::DocumentParser$gnuParser *gnu;

  friend class javax_swing_text_html_parser_DocumentParser$gnuParser;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_text_html_parser_DocumentParser__ */

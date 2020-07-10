// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_swing_text_html_parser_support_Parser__
#define __gnu_javax_swing_text_html_parser_support_Parser__

#pragma interface

#include <gnu/javax/swing/text/html/parser/support/low/ReaderTokenizer.h>
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
          namespace parser
          {
            class Element;
            class TagElement;
            class DTD;
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
              class htmlValidator;
              class htmlAttributeSet;
              namespace support
              {
                class Parser;
                class textPreProcessor;
                class parameterDefaulter;
                namespace low
                {
                  class pattern;
                  class Token;
                }
              }
            }
          }
        }
      }
    }
  }
}

class gnu::javax::swing::text::html::parser::support::Parser : public ::gnu::javax::swing::text::html::parser::support::low::ReaderTokenizer
{
public:
  Parser (::javax::swing::text::html::parser::DTD *);
  virtual ::gnu::javax::swing::text::html::parser::htmlAttributeSet *getAttributes () { return attributes; }
  virtual void error (::java::lang::String *);
  virtual void error (::java::lang::String *, ::gnu::javax::swing::text::html::parser::support::low::Token *);
  virtual void error (::java::lang::String *, ::java::lang::String *);
  virtual void error (::java::lang::String *, ::java::lang::String *, ::java::lang::String *);
  virtual void error (::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *);
  virtual void flushAttributes () { }
  virtual void parse (::java::io::Reader *);
  virtual ::java::lang::String *parseDTDMarkup () { return 0; }
  virtual jboolean parseMarkupDeclarations (::java::lang::StringBuffer *);
public:  // actually protected
  virtual jint getCurrentLine ();
  virtual void CDATA (jboolean);
  virtual void Comment ();
  virtual void Script ();
  virtual void Sgml ();
  virtual void Style ();
  virtual void Tag ();
  virtual void _handleText ();
  virtual void append (::gnu::javax::swing::text::html::parser::support::low::Token *);
  virtual void consume (::gnu::javax::swing::text::html::parser::support::low::pattern *);
  virtual void endTag (jboolean) { }
  virtual void handleComment (jcharArray) { }
  virtual void handleEOFInComment ();
  virtual void handleEmptyTag (::javax::swing::text::html::parser::TagElement *) { }
  virtual void handleEndTag (::javax::swing::text::html::parser::TagElement *) { }
  virtual void handleError (jint, ::java::lang::String *) { }
  virtual void handleStartTag (::javax::swing::text::html::parser::TagElement *) { }
  virtual void handleText (jcharArray) { }
  virtual void handleTitle (jcharArray) { }
  virtual ::javax::swing::text::html::parser::TagElement *makeTag (::javax::swing::text::html::parser::Element *);
  virtual ::javax::swing::text::html::parser::TagElement *makeTag (::javax::swing::text::html::parser::Element *, jboolean);
  virtual void markFirstTime (::javax::swing::text::html::parser::Element *) { }
  virtual ::gnu::javax::swing::text::html::parser::support::low::Token *mustBe (jint);
  virtual void noValueAttribute (::java::lang::String *, ::java::lang::String *);
  virtual ::gnu::javax::swing::text::html::parser::support::low::Token *optional (jint);
  virtual void parseDocument ();
  virtual void readAttributes (::java::lang::String *);
  virtual ::java::lang::String *resolveNamedEntity (::java::lang::String *);
  virtual jchar resolveNumericEntity (::java::lang::String *);
  virtual void restart ();
  virtual void startTag (::javax::swing::text::html::parser::TagElement *) { }
private:
  void _handleCompleteElement (::javax::swing::text::html::parser::TagElement *);
  void _handleEmptyTag (::javax::swing::text::html::parser::TagElement *);
  void _handleEndTag (::javax::swing::text::html::parser::TagElement *);
public: // actually package-private
  virtual void _handleEndTag_remaining (::javax::swing::text::html::parser::TagElement *);
  virtual void _handleStartTag (::javax::swing::text::html::parser::TagElement *);
private:
  void forciblyCloseTheTag ();
  void handleComment ();
  ::javax::swing::text::html::parser::TagElement *makeTagElement (::java::lang::String *, jboolean);
  void readTillTokenE (jint);
  void resolveAndAppendEntity (::gnu::javax::swing::text::html::parser::support::low::Token *);
  void restOfTag (jboolean, ::gnu::javax::swing::text::html::parser::support::low::Token *, ::gnu::javax::swing::text::html::parser::support::low::Token *);
  void startingTag (::javax::swing::text::html::parser::TagElement *);
  void ws_error ();
public:
  ::gnu::javax::swing::text::html::parser::support::low::Token * __attribute__((aligned(__alignof__( ::gnu::javax::swing::text::html::parser::support::low::ReaderTokenizer )))) hTag;
public:  // actually protected
  ::javax::swing::text::html::parser::DTD *dtd;
  jboolean strict;
  jint preformatted;
private:
  ::java::util::Set *documentTags;
  ::java::lang::StringBuffer *buffer;
  ::java::lang::StringBuffer *title;
  ::gnu::javax::swing::text::html::parser::support::low::Token *t;
  jboolean titleHandled;
  jboolean titleOpen;
public: // actually package-private
  ::gnu::javax::swing::text::html::parser::htmlAttributeSet *attributes;
private:
  ::gnu::javax::swing::text::html::parser::htmlValidator *validator;
  ::gnu::javax::swing::text::html::parser::support::parameterDefaulter *defaulter;
  ::gnu::javax::swing::text::html::parser::support::textPreProcessor *textProcessor;

  friend class gnu_javax_swing_text_html_parser_support_Parser$2;
  friend class gnu_javax_swing_text_html_parser_support_Parser$1;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_swing_text_html_parser_support_Parser__ */
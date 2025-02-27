// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_swing_text_html_parser_support_low_Buffer__
#define __gnu_javax_swing_text_html_parser_support_low_Buffer__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

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
              namespace support
              {
                namespace low
                {
                  class Buffer;
                  class Location;
                }
              }
            }
          }
        }
      }
    }
  }
}

class gnu::javax::swing::text::html::parser::support::low::Buffer : public ::java::lang::Object
{
public:
  Buffer ();
  Buffer (::java::lang::String *);
  virtual void getChars (jint, jint, jcharArray, jint);
  virtual ::java::lang::String *getEndOfLineSequence ();
  virtual void setLength (jint);
  virtual ::gnu::javax::swing::text::html::parser::support::low::Location *getLocation (jint, jint);
  virtual void append (jchar, jint);
  virtual jchar charAt (jint);
  virtual void delete$ (jint, jint);
  virtual void expand ();
  virtual jint length () { return length__; }
  virtual void reset ();
  virtual ::java::lang::String *toString ();
  static jint INITIAL_SIZE;
  jboolean __attribute__((aligned(__alignof__( ::java::lang::Object ))))  n_seen;
  jboolean r_seen;
public: // actually package-private
  jcharArray chr;
  jintArray line;
  jintArray position;
  jint current_line;
  jint length__;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_swing_text_html_parser_support_low_Buffer__ */

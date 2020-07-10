// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_rtf_RTFScanner__
#define __javax_swing_text_rtf_RTFScanner__

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
        namespace rtf
        {
          class RTFScanner;
          class Token;
        }
      }
    }
  }
}

class javax::swing::text::rtf::RTFScanner : public ::java::lang::Object
{
private:
  RTFScanner ();
public:
  RTFScanner (::java::io::InputStream *);
  RTFScanner (::java::io::Reader *);
private:
  ::javax::swing::text::rtf::Token *readTokenImpl ();
public: // actually package-private
  virtual ::javax::swing::text::rtf::Token *peekToken ();
  virtual ::javax::swing::text::rtf::Token *readToken ();
private:
  ::javax::swing::text::rtf::Token *readControlWord ();
  ::javax::swing::text::rtf::Token *readText ();
  ::java::io::Reader * __attribute__((aligned(__alignof__( ::java::lang::Object )))) in;
  ::java::lang::StringBuffer *buffer;
  ::javax::swing::text::rtf::Token *lastToken;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_text_rtf_RTFScanner__ */
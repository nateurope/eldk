// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_BadLocationException__
#define __javax_swing_text_BadLocationException__

#pragma interface

#include <java/lang/Exception.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace text
      {
        class BadLocationException;
      }
    }
  }
}

class javax::swing::text::BadLocationException : public ::java::lang::Exception
{
public:
  BadLocationException (::java::lang::String *, jint);
  virtual jint offsetRequested () { return offset; }
private:
  static const jlong serialVersionUID = -7712259886815656766LL;
public: // actually package-private
  jint __attribute__((aligned(__alignof__( ::java::lang::Exception ))))  offset;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_text_BadLocationException__ */

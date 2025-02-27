// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_ChangedCharSetException__
#define __javax_swing_text_ChangedCharSetException__

#pragma interface

#include <java/io/IOException.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace text
      {
        class ChangedCharSetException;
      }
    }
  }
}

class javax::swing::text::ChangedCharSetException : public ::java::io::IOException
{
public:
  ChangedCharSetException (::java::lang::String *, jboolean);
  virtual ::java::lang::String *getCharSetSpec () { return m_charSetSpec; }
  virtual jboolean keyEqualsCharSet () { return m_charSetKey; }
private:
  static const jlong serialVersionUID = 9119851554465432389LL;
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::io::IOException )))) m_charSetSpec;
  jboolean m_charSetKey;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_text_ChangedCharSetException__ */

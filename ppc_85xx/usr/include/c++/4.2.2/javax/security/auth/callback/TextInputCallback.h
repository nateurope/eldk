// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_security_auth_callback_TextInputCallback__
#define __javax_security_auth_callback_TextInputCallback__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace security
    {
      namespace auth
      {
        namespace callback
        {
          class TextInputCallback;
        }
      }
    }
  }
}

class javax::security::auth::callback::TextInputCallback : public ::java::lang::Object
{
public:
  TextInputCallback (::java::lang::String *);
  TextInputCallback (::java::lang::String *, ::java::lang::String *);
  virtual ::java::lang::String *getPrompt () { return prompt; }
  virtual ::java::lang::String *getDefaultText () { return defaultText; }
  virtual void setText (::java::lang::String *);
  virtual ::java::lang::String *getText () { return inputText; }
private:
  void setPrompt (::java::lang::String *);
  void setDefaultText (::java::lang::String *);
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::lang::Object )))) prompt;
  ::java::lang::String *defaultText;
  ::java::lang::String *inputText;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_security_auth_callback_TextInputCallback__ */
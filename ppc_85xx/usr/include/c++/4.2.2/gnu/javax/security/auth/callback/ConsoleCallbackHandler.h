// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_security_auth_callback_ConsoleCallbackHandler__
#define __gnu_javax_security_auth_callback_ConsoleCallbackHandler__

#pragma interface

#include <gnu/javax/security/auth/callback/AbstractCallbackHandler.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace security
      {
        namespace auth
        {
          namespace callback
          {
            class ConsoleCallbackHandler;
          }
        }
      }
    }
  }
  namespace javax
  {
    namespace security
    {
      namespace auth
      {
        namespace callback
        {
          class TextOutputCallback;
          class TextInputCallback;
          class PasswordCallback;
          class NameCallback;
          class LanguageCallback;
          class ConfirmationCallback;
          class ChoiceCallback;
        }
      }
    }
  }
}

class gnu::javax::security::auth::callback::ConsoleCallbackHandler : public ::gnu::javax::security::auth::callback::AbstractCallbackHandler
{
public:
  ConsoleCallbackHandler ();
  ConsoleCallbackHandler (::java::io::PrintStream *);
public:  // actually protected
  virtual void handleChoice (::javax::security::auth::callback::ChoiceCallback *);
  virtual void handleConfirmation (::javax::security::auth::callback::ConfirmationCallback *);
  virtual void handleLanguage (::javax::security::auth::callback::LanguageCallback *);
  virtual void handleName (::javax::security::auth::callback::NameCallback *);
  virtual void handlePassword (::javax::security::auth::callback::PasswordCallback *);
  virtual void handleTextInput (::javax::security::auth::callback::TextInputCallback *);
  virtual void handleTextOutput (::javax::security::auth::callback::TextOutputCallback *);
private:
  ::java::io::PrintStream * __attribute__((aligned(__alignof__( ::gnu::javax::security::auth::callback::AbstractCallbackHandler )))) out;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_security_auth_callback_ConsoleCallbackHandler__ */

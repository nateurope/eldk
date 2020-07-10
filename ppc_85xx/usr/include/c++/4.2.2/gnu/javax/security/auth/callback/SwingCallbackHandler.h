// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_security_auth_callback_SwingCallbackHandler__
#define __gnu_javax_security_auth_callback_SwingCallbackHandler__

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
            class SwingCallbackHandler;
          }
        }
      }
    }
  }
  namespace javax
  {
    namespace swing
    {
      class JDialog;
    }
    namespace security
    {
      namespace auth
      {
        namespace callback
        {
          class Callback;
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

class gnu::javax::security::auth::callback::SwingCallbackHandler : public ::gnu::javax::security::auth::callback::AbstractCallbackHandler
{
public:
  SwingCallbackHandler ();
public:  // actually protected
  virtual void handleChoice (::javax::security::auth::callback::ChoiceCallback *);
  virtual void handleConfirmation (::javax::security::auth::callback::ConfirmationCallback *);
  virtual void handleLanguage (::javax::security::auth::callback::LanguageCallback *);
  virtual void handleName (::javax::security::auth::callback::NameCallback *);
  virtual void handlePassword (::javax::security::auth::callback::PasswordCallback *);
  virtual void handleTextInput (::javax::security::auth::callback::TextInputCallback *);
  virtual void handleTextOutput (::javax::security::auth::callback::TextOutputCallback *);
private:
  void waitForInput (::javax::swing::JDialog *, ::javax::security::auth::callback::Callback *);

  friend class gnu_javax_security_auth_callback_SwingCallbackHandler$7;
  friend class gnu_javax_security_auth_callback_SwingCallbackHandler$6;
  friend class gnu_javax_security_auth_callback_SwingCallbackHandler$5;
  friend class gnu_javax_security_auth_callback_SwingCallbackHandler$4;
  friend class gnu_javax_security_auth_callback_SwingCallbackHandler$3;
  friend class gnu_javax_security_auth_callback_SwingCallbackHandler$2;
  friend class gnu_javax_security_auth_callback_SwingCallbackHandler$1;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_security_auth_callback_SwingCallbackHandler__ */
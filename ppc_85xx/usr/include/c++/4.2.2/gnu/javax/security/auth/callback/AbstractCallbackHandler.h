// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_security_auth_callback_AbstractCallbackHandler__
#define __gnu_javax_security_auth_callback_AbstractCallbackHandler__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

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
            class AbstractCallbackHandler;
          }
        }
      }
    }
  }
  namespace java
  {
    namespace security
    {
      class Provider;
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
          class Callback;
          class CallbackHandler;
        }
      }
    }
  }
}

class gnu::javax::security::auth::callback::AbstractCallbackHandler : public ::java::lang::Object
{
public:  // actually protected
  AbstractCallbackHandler (::java::lang::String *);
public:
  static ::javax::security::auth::callback::CallbackHandler *getInstance (::java::lang::String *);
  static ::javax::security::auth::callback::CallbackHandler *getInstance (::java::lang::String *, ::java::lang::String *);
  static ::javax::security::auth::callback::CallbackHandler *getInstance (::java::lang::String *, ::java::security::Provider *);
  virtual void handle (JArray< ::javax::security::auth::callback::Callback *> *);
  virtual ::java::lang::String *getName () { return name; }
public:  // actually protected
  virtual void handleChoice (::javax::security::auth::callback::ChoiceCallback *) = 0;
  virtual void handleConfirmation (::javax::security::auth::callback::ConfirmationCallback *) = 0;
  virtual void handleLanguage (::javax::security::auth::callback::LanguageCallback *) = 0;
  virtual void handleName (::javax::security::auth::callback::NameCallback *) = 0;
  virtual void handlePassword (::javax::security::auth::callback::PasswordCallback *) = 0;
  virtual void handleTextInput (::javax::security::auth::callback::TextInputCallback *) = 0;
  virtual void handleTextOutput (::javax::security::auth::callback::TextOutputCallback *) = 0;
  virtual void handleOther (::javax::security::auth::callback::Callback *);
private:
  static ::java::lang::String *SERVICE;
public:  // actually protected
  ::java::util::ResourceBundle * __attribute__((aligned(__alignof__( ::java::lang::Object )))) messages;
private:
  ::java::lang::String *name;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_security_auth_callback_AbstractCallbackHandler__ */
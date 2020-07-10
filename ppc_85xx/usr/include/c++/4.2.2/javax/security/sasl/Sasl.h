// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_security_sasl_Sasl__
#define __javax_security_sasl_Sasl__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace security
    {
      namespace sasl
      {
        class Sasl;
        class SaslServer;
        class SaslClient;
      }
      namespace auth
      {
        namespace callback
        {
          class CallbackHandler;
        }
      }
    }
  }
}

class javax::security::sasl::Sasl : public ::java::lang::Object
{
private:
  Sasl ();
public:
  static ::javax::security::sasl::SaslClient *createSaslClient (JArray< ::java::lang::String *> *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::java::util::Map *, ::javax::security::auth::callback::CallbackHandler *);
  static ::java::util::Enumeration *getSaslClientFactories ();
  static ::javax::security::sasl::SaslServer *createSaslServer (::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::java::util::Map *, ::javax::security::auth::callback::CallbackHandler *);
  static ::java::util::Enumeration *getSaslServerFactories ();
  static ::java::lang::String *QOP;
  static ::java::lang::String *STRENGTH;
  static ::java::lang::String *SERVER_AUTH;
  static ::java::lang::String *MAX_BUFFER;
  static ::java::lang::String *RAW_SEND_SIZE;
  static ::java::lang::String *POLICY_NOPLAINTEXT;
  static ::java::lang::String *POLICY_NOACTIVE;
  static ::java::lang::String *POLICY_NODICTIONARY;
  static ::java::lang::String *POLICY_NOANONYMOUS;
  static ::java::lang::String *POLICY_FORWARD_SECRECY;
  static ::java::lang::String *POLICY_PASS_CREDENTIALS;
  static ::java::lang::String *REUSE;
private:
  static ::java::lang::String *CLIENT_FACTORY_SVC;
  static ::java::lang::String *SERVER_FACTORY_SVC;
  static ::java::lang::String *ALIAS;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_security_sasl_Sasl__ */

// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_sasl_ClientFactory__
#define __gnu_javax_crypto_sasl_ClientFactory__

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
  namespace gnu
  {
    namespace javax
    {
      namespace crypto
      {
        namespace sasl
        {
          class ClientFactory;
          class ClientMechanism;
        }
      }
    }
  }
}

class gnu::javax::crypto::sasl::ClientFactory : public ::java::lang::Object
{
public:
  static ::java::util::Set *getNames ();
private:
  static JArray< ::java::lang::String *> *getNamesInternal (::java::util::Map *);
public:
  static ::gnu::javax::crypto::sasl::ClientMechanism *getInstance (::java::lang::String *);
  virtual ::javax::security::sasl::SaslClient *createSaslClient (JArray< ::java::lang::String *> *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::java::util::Map *, ::javax::security::auth::callback::CallbackHandler *);
  virtual JArray< ::java::lang::String *> *getMechanismNames (::java::util::Map *);
private:
  static jboolean hasPolicy (::java::lang::String *, ::java::util::Map *);
public:
  ClientFactory ();

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_crypto_sasl_ClientFactory__ */

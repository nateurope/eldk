// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_sasl_ServerFactory__
#define __gnu_javax_crypto_sasl_ServerFactory__

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
        class SaslServer;
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
          class ServerFactory;
          class ServerMechanism;
        }
      }
    }
  }
}

class gnu::javax::crypto::sasl::ServerFactory : public ::java::lang::Object
{
public:
  static ::java::util::Set *getNames ();
private:
  static JArray< ::java::lang::String *> *getNamesInternal (::java::util::Map *);
public:
  static ::gnu::javax::crypto::sasl::ServerMechanism *getInstance (::java::lang::String *);
  virtual ::javax::security::sasl::SaslServer *createSaslServer (::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::java::util::Map *, ::javax::security::auth::callback::CallbackHandler *);
  virtual JArray< ::java::lang::String *> *getMechanismNames (::java::util::Map *);
private:
  static jboolean hasPolicy (::java::lang::String *, ::java::util::Map *);
public:
  ServerFactory ();

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_crypto_sasl_ServerFactory__ */

// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_security_auth_login_AppConfigurationEntry__
#define __javax_security_auth_login_AppConfigurationEntry__

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
        namespace login
        {
          class AppConfigurationEntry;
          class AppConfigurationEntry$LoginModuleControlFlag;
        }
      }
    }
  }
}

class javax::security::auth::login::AppConfigurationEntry : public ::java::lang::Object
{
public:
  AppConfigurationEntry (::java::lang::String *, ::javax::security::auth::login::AppConfigurationEntry$LoginModuleControlFlag *, ::java::util::Map *);
  virtual ::javax::security::auth::login::AppConfigurationEntry$LoginModuleControlFlag *getControlFlag () { return controlFlag; }
  virtual ::java::lang::String *getLoginModuleName () { return loginModuleName; }
  virtual ::java::util::Map *getOptions () { return options; }
  virtual ::java::lang::String *toString ();
private:
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::lang::Object )))) loginModuleName;
  ::javax::security::auth::login::AppConfigurationEntry$LoginModuleControlFlag *controlFlag;
  ::java::util::Map *options;

  friend class javax_security_auth_login_AppConfigurationEntry$LoginModuleControlFlag;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_security_auth_login_AppConfigurationEntry__ */

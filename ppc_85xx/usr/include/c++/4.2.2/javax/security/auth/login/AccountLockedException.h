// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_security_auth_login_AccountLockedException__
#define __javax_security_auth_login_AccountLockedException__

#pragma interface

#include <javax/security/auth/login/AccountException.h>

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
          class AccountLockedException;
        }
      }
    }
  }
}

class javax::security::auth::login::AccountLockedException : public ::javax::security::auth::login::AccountException
{
public:
  AccountLockedException ();
  AccountLockedException (::java::lang::String *);
private:
  static const jlong serialVersionUID = 8280345554014066334LL;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_security_auth_login_AccountLockedException__ */

// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_util_prefs_GConfBasedPreferences__
#define __gnu_java_util_prefs_GConfBasedPreferences__

#pragma interface

#include <java/util/prefs/AbstractPreferences.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace util
      {
        namespace prefs
        {
          class GConfBasedPreferences;
          namespace gconf
          {
            class GConfNativePeer;
          }
        }
      }
    }
  }
  namespace java
  {
    namespace security
    {
      class Permission;
    }
  }
}

class gnu::java::util::prefs::GConfBasedPreferences : public ::java::util::prefs::AbstractPreferences
{
public:
  GConfBasedPreferences ();
  GConfBasedPreferences (jboolean);
  GConfBasedPreferences (::java::util::prefs::AbstractPreferences *, ::java::lang::String *, jboolean);
public:  // actually protected
  virtual ::java::util::prefs::AbstractPreferences *childSpi (::java::lang::String *);
  virtual JArray< ::java::lang::String *> *childrenNamesSpi ();
public:
  virtual void flush ();
public:  // actually protected
  virtual void flushSpi ();
  virtual JArray< ::java::lang::String *> *keysSpi ();
private:
  void postorderRemove (::java::lang::String *);
public:  // actually protected
  virtual void putSpi (::java::lang::String *, ::java::lang::String *);
  virtual void removeNodeSpi ();
  virtual void removeSpi (::java::lang::String *);
public:
  virtual void sync ();
public:  // actually protected
  virtual void syncSpi ();
  virtual ::java::lang::String *getSpi (::java::lang::String *);
public:
  virtual jboolean isUserNode () { return isUser; }
private:
  ::java::lang::String *getGConfKey (::java::lang::String *);
  ::java::lang::String *getRealRoot (jboolean);
  static ::java::security::Permission *PERMISSION;
  static ::gnu::java::util::prefs::gconf::GConfNativePeer *backend;
  static ::java::lang::String *DEFAULT_USER_ROOT;
  static ::java::lang::String *DEFAULT_SYSTEM_ROOT;
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::util::prefs::AbstractPreferences )))) node;
  jboolean isUser;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_util_prefs_GConfBasedPreferences__ */

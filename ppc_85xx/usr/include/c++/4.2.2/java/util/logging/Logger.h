// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_logging_Logger__
#define __java_util_logging_Logger__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

class java::util::logging::Logger : public ::java::lang::Object
{
public:  // actually protected
  Logger (::java::lang::String *, ::java::lang::String *);
public:
  static ::java::util::logging::Logger *getLogger (::java::lang::String *);
  static ::java::util::logging::Logger *getLogger (::java::lang::String *, ::java::lang::String *);
  static ::java::util::logging::Logger *getAnonymousLogger ();
  static ::java::util::logging::Logger *getAnonymousLogger (::java::lang::String *);
  virtual ::java::lang::String *getResourceBundleName ();
  virtual ::java::util::ResourceBundle *getResourceBundle ();
  virtual ::java::util::logging::Level *getLevel ();
  virtual jboolean isLoggable (::java::util::logging::Level *);
  virtual void setLevel (::java::util::logging::Level *);
  virtual ::java::util::logging::Filter *getFilter ();
  virtual void setFilter (::java::util::logging::Filter *);
  virtual ::java::lang::String *getName () { return name; }
  virtual void log (::java::util::logging::LogRecord *);
  virtual void log (::java::util::logging::Level *, ::java::lang::String *);
  virtual void log (::java::util::logging::Level *, ::java::lang::String *, ::java::lang::Object *);
  virtual void log (::java::util::logging::Level *, ::java::lang::String *, JArray< ::java::lang::Object *> *);
  virtual void log (::java::util::logging::Level *, ::java::lang::String *, ::java::lang::Throwable *);
  virtual void logp (::java::util::logging::Level *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *);
  virtual void logp (::java::util::logging::Level *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::java::lang::Object *);
private:
  ::java::util::ResourceBundle *findResourceBundle ();
  void logImpl (::java::util::logging::Level *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *, JArray< ::java::lang::Object *> *);
public:
  virtual void logp (::java::util::logging::Level *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *, JArray< ::java::lang::Object *> *);
  virtual void logp (::java::util::logging::Level *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::java::lang::Throwable *);
  virtual void logrb (::java::util::logging::Level *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *);
  virtual void logrb (::java::util::logging::Level *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::java::lang::Object *);
  virtual void logrb (::java::util::logging::Level *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *, JArray< ::java::lang::Object *> *);
  virtual void logrb (::java::util::logging::Level *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::java::lang::Throwable *);
  virtual void entering (::java::lang::String *, ::java::lang::String *);
  virtual void entering (::java::lang::String *, ::java::lang::String *, ::java::lang::Object *);
  virtual void entering (::java::lang::String *, ::java::lang::String *, JArray< ::java::lang::Object *> *);
  virtual void exiting (::java::lang::String *, ::java::lang::String *);
  virtual void exiting (::java::lang::String *, ::java::lang::String *, ::java::lang::Object *);
  virtual void throwing (::java::lang::String *, ::java::lang::String *, ::java::lang::Throwable *);
  virtual void severe (::java::lang::String *);
  virtual void warning (::java::lang::String *);
  virtual void info (::java::lang::String *);
  virtual void config (::java::lang::String *);
  virtual void fine (::java::lang::String *);
  virtual void finer (::java::lang::String *);
  virtual void finest (::java::lang::String *);
  virtual void addHandler (::java::util::logging::Handler *);
  virtual void removeHandler (::java::util::logging::Handler *);
  virtual JArray< ::java::util::logging::Handler *> *getHandlers ();
  virtual jboolean getUseParentHandlers ();
  virtual void setUseParentHandlers (jboolean);
  virtual ::java::util::logging::Logger *getParent ();
  virtual void setParent (::java::util::logging::Logger *);
private:
  ::java::lang::StackTraceElement *getCallerStackFrame ();
public: // actually package-private
  virtual void resetLogger ();
  static ::java::util::logging::Logger *root;
public:
  static ::java::util::logging::Logger *global;
private:
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::lang::Object )))) name;
  ::java::lang::String *resourceBundleName;
  ::java::util::ResourceBundle *resourceBundle;
  ::java::util::logging::Filter *filter;
  ::java::util::List *handlerList;
  JArray< ::java::util::logging::Handler *> *handlers;
  jboolean anonymous;
  jboolean useParentHandlers;
  ::java::util::logging::Level *level;
  ::java::util::logging::Logger *parent;

  friend class java_util_logging_Logger$1;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_util_logging_Logger__ */

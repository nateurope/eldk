// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_print_attribute_standard_JobState__
#define __javax_print_attribute_standard_JobState__

#pragma interface

#include <javax/print/attribute/EnumSyntax.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace print
    {
      namespace attribute
      {
        class EnumSyntax;
        namespace standard
        {
          class JobState;
        }
      }
    }
  }
}

class javax::print::attribute::standard::JobState : public ::javax::print::attribute::EnumSyntax
{
public:  // actually protected
  JobState (jint);
public:
  virtual ::java::lang::Class *getCategory ();
  virtual ::java::lang::String *getName ();
public:  // actually protected
  virtual JArray< ::java::lang::String *> *getStringTable ();
  virtual JArray< ::javax::print::attribute::EnumSyntax *> *getEnumValueTable ();
private:
  static const jlong serialVersionUID = 400465010094018920LL;
public:
  static ::javax::print::attribute::standard::JobState *UNKNOWN;
  static ::javax::print::attribute::standard::JobState *PENDING;
  static ::javax::print::attribute::standard::JobState *PENDING_HELD;
  static ::javax::print::attribute::standard::JobState *PROCESSING;
  static ::javax::print::attribute::standard::JobState *PROCESSING_STOPPED;
  static ::javax::print::attribute::standard::JobState *CANCELED;
  static ::javax::print::attribute::standard::JobState *ABORTED;
  static ::javax::print::attribute::standard::JobState *COMPLETED;
private:
  static JArray< ::java::lang::String *> *stringTable;
  static JArray< ::javax::print::attribute::standard::JobState *> *enumValueTable;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_print_attribute_standard_JobState__ */

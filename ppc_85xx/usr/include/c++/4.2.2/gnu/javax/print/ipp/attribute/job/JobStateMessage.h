// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_print_ipp_attribute_job_JobStateMessage__
#define __gnu_javax_print_ipp_attribute_job_JobStateMessage__

#pragma interface

#include <javax/print/attribute/TextSyntax.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace print
      {
        namespace ipp
        {
          namespace attribute
          {
            namespace job
            {
              class JobStateMessage;
            }
          }
        }
      }
    }
  }
}

class gnu::javax::print::ipp::attribute::job::JobStateMessage : public ::javax::print::attribute::TextSyntax
{
public:
  JobStateMessage (::java::lang::String *, ::java::util::Locale *);
  virtual ::java::lang::Class *getCategory ();
  virtual ::java::lang::String *getName ();

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_print_ipp_attribute_job_JobStateMessage__ */
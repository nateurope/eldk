// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_classpath_jdwp_event_filters_ClassExcludeFilter__
#define __gnu_classpath_jdwp_event_filters_ClassExcludeFilter__

#pragma interface

#include <gnu/classpath/jdwp/event/filters/ClassMatchFilter.h>

extern "Java"
{
  namespace gnu
  {
    namespace classpath
    {
      namespace jdwp
      {
        namespace event
        {
          namespace filters
          {
            class ClassExcludeFilter;
          }
          class Event;
        }
      }
    }
  }
}

class gnu::classpath::jdwp::event::filters::ClassExcludeFilter : public ::gnu::classpath::jdwp::event::filters::ClassMatchFilter
{
public:
  ClassExcludeFilter (::java::lang::String *);
  virtual jboolean matches (::gnu::classpath::jdwp::event::Event *);

  static ::java::lang::Class class$;
};

#endif /* __gnu_classpath_jdwp_event_filters_ClassExcludeFilter__ */

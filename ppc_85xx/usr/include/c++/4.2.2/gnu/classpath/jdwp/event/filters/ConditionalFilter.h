// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_classpath_jdwp_event_filters_ConditionalFilter__
#define __gnu_classpath_jdwp_event_filters_ConditionalFilter__

#pragma interface

#include <java/lang/Object.h>

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
            class ConditionalFilter;
          }
          class Event;
        }
      }
    }
  }
}

class gnu::classpath::jdwp::event::filters::ConditionalFilter : public ::java::lang::Object
{
public:
  ConditionalFilter (::java::lang::Object *);
  virtual jboolean matches (::gnu::classpath::jdwp::event::Event *);

  static ::java::lang::Class class$;
};

#endif /* __gnu_classpath_jdwp_event_filters_ConditionalFilter__ */

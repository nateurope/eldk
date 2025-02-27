// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_classpath_jdwp_event_filters_StepFilter__
#define __gnu_classpath_jdwp_event_filters_StepFilter__

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
            class StepFilter;
          }
          class Event;
        }
        namespace id
        {
          class ThreadId;
        }
      }
    }
  }
}

class gnu::classpath::jdwp::event::filters::StepFilter : public ::java::lang::Object
{
public:
  StepFilter (::gnu::classpath::jdwp::id::ThreadId *, jint, jint);
  virtual ::gnu::classpath::jdwp::id::ThreadId *getThread () { return _tid; }
  virtual jint getSize () { return _size; }
  virtual jint getDepth () { return _depth; }
  virtual jboolean matches (::gnu::classpath::jdwp::event::Event *);
private:
  ::gnu::classpath::jdwp::id::ThreadId * __attribute__((aligned(__alignof__( ::java::lang::Object )))) _tid;
  jint _size;
  jint _depth;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_classpath_jdwp_event_filters_StepFilter__ */

// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_classpath_jdwp_event_filters_FieldOnlyFilter__
#define __gnu_classpath_jdwp_event_filters_FieldOnlyFilter__

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
            class FieldOnlyFilter;
          }
          class Event;
        }
        namespace id
        {
          class ReferenceTypeId;
        }
      }
    }
  }
}

class gnu::classpath::jdwp::event::filters::FieldOnlyFilter : public ::java::lang::Object
{
public:
  FieldOnlyFilter (::gnu::classpath::jdwp::id::ReferenceTypeId *, ::gnu::classpath::jdwp::id::ReferenceTypeId *);
  virtual ::gnu::classpath::jdwp::id::ReferenceTypeId *getType () { return _refId; }
  virtual ::gnu::classpath::jdwp::id::ReferenceTypeId *getField () { return _fieldId; }
  virtual jboolean matches (::gnu::classpath::jdwp::event::Event *);
private:
  ::gnu::classpath::jdwp::id::ReferenceTypeId * __attribute__((aligned(__alignof__( ::java::lang::Object )))) _refId;
  ::gnu::classpath::jdwp::id::ReferenceTypeId *_fieldId;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_classpath_jdwp_event_filters_FieldOnlyFilter__ */

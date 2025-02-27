// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_classpath_jdwp_processor_ClassLoaderReferenceCommandSet__
#define __gnu_classpath_jdwp_processor_ClassLoaderReferenceCommandSet__

#pragma interface

#include <gnu/classpath/jdwp/processor/CommandSet.h>

extern "Java"
{
  namespace gnu
  {
    namespace classpath
    {
      namespace jdwp
      {
        namespace processor
        {
          class ClassLoaderReferenceCommandSet;
        }
      }
    }
  }
  namespace java
  {
    namespace nio
    {
      class ByteBuffer;
    }
  }
}

class gnu::classpath::jdwp::processor::ClassLoaderReferenceCommandSet : public ::gnu::classpath::jdwp::processor::CommandSet
{
public:
  virtual jboolean runCommand (::java::nio::ByteBuffer *, ::java::io::DataOutputStream *, jbyte);
  virtual void executeVisibleClasses (::java::nio::ByteBuffer *, ::java::io::DataOutputStream *);
  ClassLoaderReferenceCommandSet ();

  static ::java::lang::Class class$;
};

#endif /* __gnu_classpath_jdwp_processor_ClassLoaderReferenceCommandSet__ */

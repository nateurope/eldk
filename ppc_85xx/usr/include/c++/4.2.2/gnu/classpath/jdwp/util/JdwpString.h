// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_classpath_jdwp_util_JdwpString__
#define __gnu_classpath_jdwp_util_JdwpString__

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
        namespace util
        {
          class JdwpString;
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

class gnu::classpath::jdwp::util::JdwpString : public ::java::lang::Object
{
public:
  static void writeString (::java::io::DataOutputStream *, ::java::lang::String *);
  static ::java::lang::String *readString (::java::nio::ByteBuffer *);
  JdwpString ();

  static ::java::lang::Class class$;
};

#endif /* __gnu_classpath_jdwp_util_JdwpString__ */
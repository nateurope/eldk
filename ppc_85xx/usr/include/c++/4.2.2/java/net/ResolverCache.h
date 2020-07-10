// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_net_ResolverCache__
#define __java_net_ResolverCache__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace net
    {
      class ResolverCache;
      class ResolverCache$Entry;
    }
  }
}

class java::net::ResolverCache : public ::java::lang::Object
{
private:
  static jint getTTL (::java::lang::String *, jint);
public:
  static ::java::lang::String *getHostByAddr (jbyteArray);
  static JArray<jbyteArray> * getHostByName (::java::lang::String *);
private:
  static ::java::lang::Object *makeHashableAddress (jbyteArray);
  static ::java::net::ResolverCache$Entry *get (::java::lang::Object *);
  static void put (::java::net::ResolverCache$Entry *);
  static void reap ();
public: // actually package-private
  ResolverCache ();
private:
  static jint POSITIVE_TTL;
  static jint NEGATIVE_TTL;
  static ::java::util::HashMap *cache;
  static ::java::util::LinkedList *killqueue;

  friend class java_net_ResolverCache$Entry;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_net_ResolverCache__ */

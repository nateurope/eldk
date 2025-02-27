// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_gcj_runtime_PersistentByteMap__
#define __gnu_gcj_runtime_PersistentByteMap__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace gcj
    {
      namespace runtime
      {
        class PersistentByteMap;
        class PersistentByteMap$AccessMode;
      }
    }
  }
  namespace java
  {
    namespace nio
    {
      namespace channels
      {
        class FileChannel;
      }
      class MappedByteBuffer;
    }
  }
}

class gnu::gcj::runtime::PersistentByteMap : public ::java::lang::Object
{
private:
  PersistentByteMap (::java::io::File *);
public:
  PersistentByteMap (::java::lang::String *, ::gnu::gcj::runtime::PersistentByteMap$AccessMode *);
  PersistentByteMap (::java::io::File *, ::gnu::gcj::runtime::PersistentByteMap$AccessMode *);
private:
  void init (::gnu::gcj::runtime::PersistentByteMap *, ::java::io::File *, jint, jint);
public:
  static ::gnu::gcj::runtime::PersistentByteMap *emptyPersistentByteMap (::java::io::File *, jint, jint);
private:
  jint getWord (jint);
  void putWord (jint, jint);
public:
  virtual ::java::util::Set *entrySet () { return 0; }
private:
  jint getBucket (jint);
  jint getKeyPos (jint);
  jint getValuePos (jint);
  void putKeyPos (jint, jint);
  void putValuePos (jint, jint);
  jbyteArray getBytes (jint);
  jint hash (jbyteArray);
public:
  virtual jbyteArray get (jbyteArray);
  virtual void put (jbyteArray, jbyteArray);
private:
  jint addBytes (jbyteArray);
public:
  virtual ::java::util::Iterator *iterator (jint);
  virtual jint size () { return elements; }
  virtual jint stringTableSize () { return string_size; }
  virtual jint capacity ();
  virtual void force ();
  virtual ::java::io::File *getFile () { return name; }
  virtual void close ();
  virtual void putAll (::gnu::gcj::runtime::PersistentByteMap *);
private:
  ::java::nio::MappedByteBuffer * __attribute__((aligned(__alignof__( ::java::lang::Object )))) buf;
  static const jint MAGIC = 0L;
  static const jint VERSION = 4L;
  static const jint CAPACITY = 8L;
  static const jint TABLE_BASE = 12L;
  static const jint STRING_BASE = 16L;
  static const jint STRING_SIZE = 20L;
  static const jint FILE_SIZE = 24L;
  static const jint ELEMENTS = 28L;
  static const jint INT_SIZE = 4L;
  static const jint TABLE_ENTRY_SIZE = 8L;
  jint capacity__;
  jint table_base;
  jint string_base;
  jint string_size;
  jint file_size;
  jint elements;
  jlong length;
  ::java::io::File *name;
  static const jint UNUSED_ENTRY = -1L;
public:
  static const jint KEYS = 0L;
  static const jint VALUES = 1L;
  static const jint ENTRIES = 2L;
private:
  ::java::util::HashMap *values;
public: // actually package-private
  ::java::nio::channels::FileChannel *fc;

  friend class gnu_gcj_runtime_PersistentByteMap$ByteWrapper;
  friend class gnu_gcj_runtime_PersistentByteMap$MapEntry;
  friend class gnu_gcj_runtime_PersistentByteMap$HashIterator;
  friend class gnu_gcj_runtime_PersistentByteMap$AccessMode;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_gcj_runtime_PersistentByteMap__ */

// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_sql_RowSetListener__
#define __javax_sql_RowSetListener__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace sql
    {
      class RowSetListener;
      class RowSetEvent;
    }
  }
}

class javax::sql::RowSetListener : public ::java::lang::Object
{
public:
  virtual void rowSetChanged (::javax::sql::RowSetEvent *) = 0;
  virtual void rowChanged (::javax::sql::RowSetEvent *) = 0;
  virtual void cursorMoved (::javax::sql::RowSetEvent *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __javax_sql_RowSetListener__ */
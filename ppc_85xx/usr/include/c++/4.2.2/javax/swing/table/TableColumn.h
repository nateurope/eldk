// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_table_TableColumn__
#define __javax_swing_table_TableColumn__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace beans
    {
      class PropertyChangeListener;
    }
  }
  namespace javax
  {
    namespace swing
    {
      namespace event
      {
        class SwingPropertyChangeSupport;
      }
      namespace table
      {
        class TableColumn;
        class TableCellEditor;
        class TableCellRenderer;
      }
    }
  }
}

class javax::swing::table::TableColumn : public ::java::lang::Object
{
public:
  TableColumn ();
  TableColumn (jint);
  TableColumn (jint, jint);
  TableColumn (jint, jint, ::javax::swing::table::TableCellRenderer *, ::javax::swing::table::TableCellEditor *);
  virtual void setModelIndex (jint);
  virtual jint getModelIndex () { return modelIndex; }
  virtual void setIdentifier (::java::lang::Object *);
  virtual ::java::lang::Object *getIdentifier ();
  virtual void setHeaderValue (::java::lang::Object *);
  virtual ::java::lang::Object *getHeaderValue () { return headerValue; }
  virtual void setHeaderRenderer (::javax::swing::table::TableCellRenderer *);
  virtual ::javax::swing::table::TableCellRenderer *getHeaderRenderer () { return headerRenderer; }
  virtual void setCellRenderer (::javax::swing::table::TableCellRenderer *);
  virtual ::javax::swing::table::TableCellRenderer *getCellRenderer () { return cellRenderer; }
  virtual void setCellEditor (::javax::swing::table::TableCellEditor *);
  virtual ::javax::swing::table::TableCellEditor *getCellEditor () { return cellEditor; }
  virtual void setWidth (jint);
  virtual jint getWidth () { return width; }
  virtual void setPreferredWidth (jint);
  virtual jint getPreferredWidth () { return preferredWidth; }
  virtual void setMinWidth (jint);
  virtual jint getMinWidth () { return minWidth; }
  virtual void setMaxWidth (jint);
  virtual jint getMaxWidth () { return maxWidth; }
  virtual void setResizable (jboolean);
  virtual jboolean getResizable () { return isResizable; }
  virtual void sizeWidthToFit ();
  virtual void disableResizedPosting () { }
  virtual void enableResizedPosting () { }
  virtual void addPropertyChangeListener (::java::beans::PropertyChangeListener *);
  virtual void removePropertyChangeListener (::java::beans::PropertyChangeListener *);
  virtual JArray< ::java::beans::PropertyChangeListener *> *getPropertyChangeListeners ();
public:  // actually protected
  virtual ::javax::swing::table::TableCellRenderer *createDefaultHeaderRenderer ();
public: // actually package-private
  static const jlong serialVersionUID = -6113660025878112608LL;
public:
  static ::java::lang::String *COLUMN_WIDTH_PROPERTY;
  static ::java::lang::String *HEADER_VALUE_PROPERTY;
  static ::java::lang::String *HEADER_RENDERER_PROPERTY;
  static ::java::lang::String *CELL_RENDERER_PROPERTY;
public:  // actually protected
  jint __attribute__((aligned(__alignof__( ::java::lang::Object ))))  modelIndex;
  ::java::lang::Object *identifier;
  jint width;
  jint minWidth;
private:
  jint preferredWidth;
public:  // actually protected
  jint maxWidth;
  ::javax::swing::table::TableCellRenderer *headerRenderer;
  ::java::lang::Object *headerValue;
  ::javax::swing::table::TableCellRenderer *cellRenderer;
  ::javax::swing::table::TableCellEditor *cellEditor;
  jboolean isResizable;
  jint resizedPostingDisableCount;
private:
  ::javax::swing::event::SwingPropertyChangeSupport *changeSupport;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_table_TableColumn__ */

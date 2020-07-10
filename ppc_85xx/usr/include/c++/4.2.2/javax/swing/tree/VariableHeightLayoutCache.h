// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_tree_VariableHeightLayoutCache__
#define __javax_swing_tree_VariableHeightLayoutCache__

#pragma interface

#include <javax/swing/tree/AbstractLayoutCache.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class Rectangle;
    }
  }
  namespace javax
  {
    namespace swing
    {
      namespace event
      {
        class TreeModelEvent;
      }
      namespace tree
      {
        class VariableHeightLayoutCache;
        class TreeModel;
        class TreePath;
      }
    }
  }
}

class javax::swing::tree::VariableHeightLayoutCache : public ::javax::swing::tree::AbstractLayoutCache
{
public:
  VariableHeightLayoutCache ();
  virtual jint getRowCount ();
private:
  void update ();
  void countRows (::java::lang::Object *, ::java::lang::Object *, jint);
public:
  virtual void invalidatePathBounds (::javax::swing::tree::TreePath *);
  virtual void invalidateSizes ();
  virtual void setExpandedState (::javax::swing::tree::TreePath *, jboolean);
  virtual jboolean isExpanded (::javax::swing::tree::TreePath *);
  virtual ::java::awt::Rectangle *getBounds (::javax::swing::tree::TreePath *, ::java::awt::Rectangle *);
  virtual ::javax::swing::tree::TreePath *getPathForRow (jint);
  virtual jint getRowForPath (::javax::swing::tree::TreePath *);
  virtual ::javax::swing::tree::TreePath *getPathClosestTo (jint, jint);
public: // actually package-private
  virtual jint distance (::java::awt::Rectangle *, jint, jint);
public:
  virtual jint getVisibleChildCount (::javax::swing::tree::TreePath *);
  virtual ::java::util::Enumeration *getVisiblePathsFrom (::javax::swing::tree::TreePath *);
  virtual jboolean getExpandedState (::javax::swing::tree::TreePath *);
  virtual void treeNodesChanged (::javax::swing::event::TreeModelEvent *);
  virtual void treeNodesInserted (::javax::swing::event::TreeModelEvent *);
  virtual void treeNodesRemoved (::javax::swing::event::TreeModelEvent *);
  virtual void treeStructureChanged (::javax::swing::event::TreeModelEvent *);
  virtual void setModel (::javax::swing::tree::TreeModel *);
  virtual void setRootVisible (jboolean);
  virtual jint getPreferredHeight ();
  virtual jint getPreferredWidth (::java::awt::Rectangle *);
public: // actually package-private
  ::java::util::Set * __attribute__((aligned(__alignof__( ::javax::swing::tree::AbstractLayoutCache )))) expanded;
  ::java::util::Hashtable *nodes;
  ::java::util::Hashtable *row2node;
  jboolean dirty;
  jint totalHeight;
  jint maximalWidth;

  friend class javax_swing_tree_VariableHeightLayoutCache$NodeRecord;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_tree_VariableHeightLayoutCache__ */
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_tree_DefaultTreeModel__
#define __javax_swing_tree_DefaultTreeModel__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace event
      {
        class TreeModelListener;
        class EventListenerList;
      }
      namespace tree
      {
        class DefaultTreeModel;
        class MutableTreeNode;
        class TreePath;
        class TreeNode;
      }
    }
  }
}

class javax::swing::tree::DefaultTreeModel : public ::java::lang::Object
{
public:
  DefaultTreeModel (::javax::swing::tree::TreeNode *);
  DefaultTreeModel (::javax::swing::tree::TreeNode *, jboolean);
private:
  void writeObject (::java::io::ObjectOutputStream *) { }
  void readObject (::java::io::ObjectInputStream *) { }
public:
  virtual jboolean asksAllowsChildren () { return asksAllowsChildren__; }
  virtual void setAsksAllowsChildren (jboolean);
  virtual void setRoot (::javax::swing::tree::TreeNode *);
  virtual ::java::lang::Object *getRoot () { return reinterpret_cast< ::java::lang::Object *> (root); }
  virtual jint getIndexOfChild (::java::lang::Object *, ::java::lang::Object *);
  virtual ::java::lang::Object *getChild (::java::lang::Object *, jint);
  virtual jint getChildCount (::java::lang::Object *);
  virtual jboolean isLeaf (::java::lang::Object *);
  virtual void reload ();
  virtual void reload (::javax::swing::tree::TreeNode *);
  virtual void valueForPathChanged (::javax::swing::tree::TreePath *, ::java::lang::Object *);
  virtual void insertNodeInto (::javax::swing::tree::MutableTreeNode *, ::javax::swing::tree::MutableTreeNode *, jint);
  virtual void removeNodeFromParent (::javax::swing::tree::MutableTreeNode *);
  virtual void nodeChanged (::javax::swing::tree::TreeNode *);
  virtual void nodesWereInserted (::javax::swing::tree::TreeNode *, jintArray);
  virtual void nodesWereRemoved (::javax::swing::tree::TreeNode *, jintArray, JArray< ::java::lang::Object *> *);
  virtual void nodesChanged (::javax::swing::tree::TreeNode *, jintArray);
  virtual void nodeStructureChanged (::javax::swing::tree::TreeNode *);
  virtual JArray< ::javax::swing::tree::TreeNode *> *getPathToRoot (::javax::swing::tree::TreeNode *);
public:  // actually protected
  virtual JArray< ::javax::swing::tree::TreeNode *> *getPathToRoot (::javax::swing::tree::TreeNode *, jint);
public:
  virtual void addTreeModelListener (::javax::swing::event::TreeModelListener *);
  virtual void removeTreeModelListener (::javax::swing::event::TreeModelListener *);
  virtual JArray< ::javax::swing::event::TreeModelListener *> *getTreeModelListeners ();
public:  // actually protected
  virtual void fireTreeNodesChanged (::java::lang::Object *, JArray< ::java::lang::Object *> *, jintArray, JArray< ::java::lang::Object *> *);
  virtual void fireTreeNodesInserted (::java::lang::Object *, JArray< ::java::lang::Object *> *, jintArray, JArray< ::java::lang::Object *> *);
  virtual void fireTreeNodesRemoved (::java::lang::Object *, JArray< ::java::lang::Object *> *, jintArray, JArray< ::java::lang::Object *> *);
  virtual void fireTreeStructureChanged (::java::lang::Object *, JArray< ::java::lang::Object *> *, jintArray, JArray< ::java::lang::Object *> *);
public:
  virtual JArray< ::java::util::EventListener *> *getListeners (::java::lang::Class *);
public: // actually package-private
  static const jlong serialVersionUID = -2621068368932566998LL;
public:  // actually protected
  ::javax::swing::tree::TreeNode * __attribute__((aligned(__alignof__( ::java::lang::Object )))) root;
  ::javax::swing::event::EventListenerList *listenerList;
  jboolean asksAllowsChildren__;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_tree_DefaultTreeModel__ */

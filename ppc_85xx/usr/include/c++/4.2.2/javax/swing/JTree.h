// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_JTree__
#define __javax_swing_JTree__

#pragma interface

#include <javax/swing/JComponent.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class Rectangle;
      class Dimension;
    }
  }
  namespace javax
  {
    namespace accessibility
    {
      class AccessibleContext;
    }
    namespace swing
    {
      class JTree;
      namespace text
      {
        class Position$Bias;
      }
      namespace plaf
      {
        class TreeUI;
      }
      class JTree$TreeSelectionRedirector;
      namespace event
      {
        class TreeWillExpandListener;
        class TreeSelectionEvent;
        class TreeSelectionListener;
        class TreeExpansionListener;
        class TreeModelListener;
      }
      namespace tree
      {
        class TreeNode;
        class TreeModel;
        class TreeSelectionModel;
        class TreeCellRenderer;
        class TreeCellEditor;
        class TreePath;
      }
    }
  }
}

class javax::swing::JTree : public ::javax::swing::JComponent
{
public:
  JTree ();
  JTree (::java::util::Hashtable *);
  JTree (JArray< ::java::lang::Object *> *);
  JTree (::javax::swing::tree::TreeModel *);
  JTree (::javax::swing::tree::TreeNode *);
  JTree (::javax::swing::tree::TreeNode *, jboolean);
  JTree (::java::util::Vector *);
  virtual jint getRowForPath (::javax::swing::tree::TreePath *);
  virtual ::javax::swing::tree::TreePath *getPathForRow (jint);
public:  // actually protected
  virtual JArray< ::javax::swing::tree::TreePath *> *getPathBetweenRows (jint, jint);
  static ::javax::swing::tree::TreeModel *createTreeModel (::java::lang::Object *);
public:
  virtual ::javax::swing::plaf::TreeUI *getUI ();
  virtual void setUI (::javax::swing::plaf::TreeUI *);
  virtual void updateUI ();
  virtual ::java::lang::String *getUIClassID ();
  virtual ::javax::accessibility::AccessibleContext *getAccessibleContext ();
  virtual ::java::awt::Dimension *getPreferredScrollableViewportSize ();
  virtual jint getScrollableUnitIncrement (::java::awt::Rectangle *, jint, jint);
  virtual jint getScrollableBlockIncrement (::java::awt::Rectangle *, jint, jint);
  virtual jboolean getScrollableTracksViewportHeight ();
  virtual jboolean getScrollableTracksViewportWidth ();
  virtual void addTreeExpansionListener (::javax::swing::event::TreeExpansionListener *);
  virtual void removeTreeExpansionListener (::javax::swing::event::TreeExpansionListener *);
  virtual JArray< ::javax::swing::event::TreeExpansionListener *> *getTreeExpansionListeners ();
  virtual void fireTreeCollapsed (::javax::swing::tree::TreePath *);
  virtual void fireTreeExpanded (::javax::swing::tree::TreePath *);
  virtual void addTreeSelectionListener (::javax::swing::event::TreeSelectionListener *);
  virtual void removeTreeSelectionListener (::javax::swing::event::TreeSelectionListener *);
  virtual JArray< ::javax::swing::event::TreeSelectionListener *> *getTreeSelectionListeners ();
public:  // actually protected
  virtual void fireValueChanged (::javax::swing::event::TreeSelectionEvent *);
public:
  virtual void addTreeWillExpandListener (::javax::swing::event::TreeWillExpandListener *);
  virtual void removeTreeWillExpandListener (::javax::swing::event::TreeWillExpandListener *);
  virtual JArray< ::javax::swing::event::TreeWillExpandListener *> *getTreeWillExpandListeners ();
  virtual void fireTreeWillCollapse (::javax::swing::tree::TreePath *);
  virtual void fireTreeWillExpand (::javax::swing::tree::TreePath *);
  virtual ::javax::swing::tree::TreeModel *getModel () { return treeModel; }
  virtual void setModel (::javax::swing::tree::TreeModel *);
  virtual jboolean isEditable () { return editable; }
  virtual void setEditable (jboolean);
  virtual jboolean isRootVisible () { return rootVisible; }
  virtual void setRootVisible (jboolean);
  virtual jboolean getShowsRootHandles () { return showsRootHandles; }
  virtual void setShowsRootHandles (jboolean);
  virtual ::javax::swing::tree::TreeCellEditor *getCellEditor () { return cellEditor; }
  virtual void setCellEditor (::javax::swing::tree::TreeCellEditor *);
  virtual ::javax::swing::tree::TreeCellRenderer *getCellRenderer () { return cellRenderer; }
  virtual void setCellRenderer (::javax::swing::tree::TreeCellRenderer *);
  virtual ::javax::swing::tree::TreeSelectionModel *getSelectionModel () { return selectionModel; }
  virtual void setSelectionModel (::javax::swing::tree::TreeSelectionModel *);
  virtual jint getVisibleRowCount () { return visibleRowCount; }
  virtual void setVisibleRowCount (jint);
  virtual jboolean isLargeModel () { return largeModel; }
  virtual void setLargeModel (jboolean);
  virtual jint getRowHeight () { return rowHeight; }
  virtual void setRowHeight (jint);
  virtual jboolean isFixedRowHeight ();
  virtual jboolean getInvokesStopCellEditing () { return invokesStopCellEditing; }
  virtual void setInvokesStopCellEditing (jboolean);
  virtual jint getToggleClickCount () { return toggleClickCount; }
  virtual void setToggleClickCount (jint);
  virtual void scrollPathToVisible (::javax::swing::tree::TreePath *);
  virtual void scrollRowToVisible (jint);
  virtual jboolean getScrollsOnExpand () { return scrollsOnExpand; }
  virtual void setScrollsOnExpand (jboolean);
  virtual void setSelectionPath (::javax::swing::tree::TreePath *);
  virtual void setSelectionPaths (JArray< ::javax::swing::tree::TreePath *> *);
  virtual void setSelectionRow (jint);
  virtual void setSelectionRows (jintArray);
  virtual void setSelectionInterval (jint, jint);
  virtual void addSelectionPath (::javax::swing::tree::TreePath *);
  virtual void addSelectionPaths (JArray< ::javax::swing::tree::TreePath *> *);
  virtual void addSelectionRow (jint);
  virtual void addSelectionRows (jintArray);
  virtual void addSelectionInterval (jint, jint);
  virtual void removeSelectionPath (::javax::swing::tree::TreePath *);
  virtual void removeSelectionPaths (JArray< ::javax::swing::tree::TreePath *> *);
  virtual void removeSelectionRow (jint);
  virtual void removeSelectionRows (jintArray);
  virtual void removeSelectionInterval (jint, jint);
  virtual void clearSelection ();
  virtual ::javax::swing::tree::TreePath *getLeadSelectionPath ();
  virtual void setLeadSelectionPath (::javax::swing::tree::TreePath *);
  virtual ::javax::swing::tree::TreePath *getAnchorSelectionPath () { return anchorSelectionPath; }
  virtual void setAnchorSelectionPath (::javax::swing::tree::TreePath *);
  virtual jint getLeadSelectionRow ();
  virtual jint getMaxSelectionRow ();
  virtual jint getMinSelectionRow ();
  virtual jint getSelectionCount ();
  virtual ::javax::swing::tree::TreePath *getSelectionPath ();
  virtual JArray< ::javax::swing::tree::TreePath *> *getSelectionPaths ();
  virtual jintArray getSelectionRows ();
  virtual jboolean isPathSelected (::javax::swing::tree::TreePath *);
  virtual jboolean isRowSelected (jint);
  virtual jboolean isSelectionEmpty ();
  virtual jboolean getDragEnabled () { return dragEnabled; }
  virtual void setDragEnabled (jboolean);
  virtual jint getRowCount ();
  virtual void collapsePath (::javax::swing::tree::TreePath *);
  virtual void collapseRow (jint);
  virtual void expandPath (::javax::swing::tree::TreePath *);
  virtual void expandRow (jint);
  virtual jboolean isCollapsed (::javax::swing::tree::TreePath *);
  virtual jboolean isCollapsed (jint);
  virtual jboolean isExpanded (::javax::swing::tree::TreePath *);
  virtual jboolean isExpanded (jint);
  virtual jboolean getExpandsSelectedPaths () { return expandsSelectedPaths; }
  virtual void setExpandsSelectedPaths (jboolean);
  virtual ::java::awt::Rectangle *getPathBounds (::javax::swing::tree::TreePath *);
  virtual ::java::awt::Rectangle *getRowBounds (jint);
  virtual jboolean isEditing ();
  virtual jboolean stopEditing ();
  virtual void cancelEditing ();
  virtual void startEditingAtPath (::javax::swing::tree::TreePath *);
  virtual ::javax::swing::tree::TreePath *getEditingPath ();
  virtual ::javax::swing::tree::TreePath *getPathForLocation (jint, jint);
  virtual jint getRowForLocation (jint, jint);
  virtual ::javax::swing::tree::TreePath *getClosestPathForLocation (jint, jint);
  virtual jint getClosestRowForLocation (jint, jint);
  virtual ::java::lang::Object *getLastSelectedPathComponent ();
private:
  void doExpandParents (::javax::swing::tree::TreePath *, jboolean);
public:  // actually protected
  virtual void setExpandedState (::javax::swing::tree::TreePath *, jboolean);
  virtual void clearToggledPaths ();
  virtual ::java::util::Enumeration *getDescendantToggledPaths (::javax::swing::tree::TreePath *);
public:
  virtual jboolean hasBeenExpanded (::javax::swing::tree::TreePath *);
  virtual jboolean isVisible (::javax::swing::tree::TreePath *);
  virtual void makeVisible (::javax::swing::tree::TreePath *);
  virtual jboolean isPathEditable (::javax::swing::tree::TreePath *);
public:  // actually protected
  virtual ::javax::swing::event::TreeModelListener *createTreeModelListener ();
  static ::javax::swing::tree::TreeModel *getDefaultTreeModel ();
public:
  virtual ::java::lang::String *convertValueToText (::java::lang::Object *, jboolean, jboolean, jboolean, jint, jboolean);
public:  // actually protected
  virtual ::java::lang::String *paramString ();
public:
  virtual ::java::util::Enumeration *getExpandedDescendants (::javax::swing::tree::TreePath *);
  virtual ::javax::swing::tree::TreePath *getNextMatch (::java::lang::String *, jint, ::javax::swing::text::Position$Bias *);
public:  // actually protected
  virtual jboolean removeDescendantSelectedPaths (::javax::swing::tree::TreePath *, jboolean);
  virtual void removeDescendantToggledPaths (::java::util::Enumeration *);
public:
  virtual void treeDidChange ();
public: // actually package-private
  virtual void setUIProperty (::java::lang::String *, ::java::lang::Object *);
private:
  static const jlong serialVersionUID = 7559816092864483649LL;
public:
  static ::java::lang::String *CELL_EDITOR_PROPERTY;
  static ::java::lang::String *CELL_RENDERER_PROPERTY;
  static ::java::lang::String *EDITABLE_PROPERTY;
  static ::java::lang::String *INVOKES_STOP_CELL_EDITING_PROPERTY;
  static ::java::lang::String *LARGE_MODEL_PROPERTY;
  static ::java::lang::String *ROOT_VISIBLE_PROPERTY;
  static ::java::lang::String *ROW_HEIGHT_PROPERTY;
  static ::java::lang::String *SCROLLS_ON_EXPAND_PROPERTY;
  static ::java::lang::String *SELECTION_MODEL_PROPERTY;
  static ::java::lang::String *SHOWS_ROOT_HANDLES_PROPERTY;
  static ::java::lang::String *TOGGLE_CLICK_COUNT_PROPERTY;
  static ::java::lang::String *TREE_MODEL_PROPERTY;
  static ::java::lang::String *VISIBLE_ROW_COUNT_PROPERTY;
  static ::java::lang::String *ANCHOR_SELECTION_PATH_PROPERTY;
  static ::java::lang::String *LEAD_SELECTION_PATH_PROPERTY;
  static ::java::lang::String *EXPANDS_SELECTED_PATHS_PROPERTY;
private:
  static ::java::lang::Object *EXPANDED;
  static ::java::lang::Object *COLLAPSED;
  jboolean __attribute__((aligned(__alignof__( ::javax::swing::JComponent ))))  dragEnabled;
  jboolean expandsSelectedPaths;
  ::javax::swing::tree::TreePath *anchorSelectionPath;
  ::java::util::Hashtable *nodeStates;
public:  // actually protected
  ::javax::swing::tree::TreeCellEditor *cellEditor;
  ::javax::swing::tree::TreeCellRenderer *cellRenderer;
  jboolean editable;
  jboolean invokesStopCellEditing;
  jboolean largeModel;
  jboolean rootVisible;
  jint rowHeight;
  jboolean scrollsOnExpand;
  ::javax::swing::tree::TreeSelectionModel *selectionModel;
  jboolean showsRootHandles;
  jint toggleClickCount;
  ::javax::swing::tree::TreeModel *treeModel;
  jint visibleRowCount;
  ::javax::swing::event::TreeModelListener *treeModelListener;
  ::javax::swing::JTree$TreeSelectionRedirector *selectionRedirector;
private:
  jboolean clientRowHeightSet;
  jboolean clientScrollsOnExpandSet;
  jboolean clientShowsRootHandlesSet;

  friend class javax_swing_JTree$EmptySelectionModel;
  friend class javax_swing_JTree$TreeSelectionRedirector;
  friend class javax_swing_JTree$TreeModelHandler;
  friend class javax_swing_JTree$DynamicUtilTreeNode;
  friend class javax_swing_JTree$AccessibleJTree;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_JTree__ */
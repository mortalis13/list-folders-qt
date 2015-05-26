#ifndef TREEVIEWERCONTROLLER_H
#define TREEVIEWERCONTROLLER_H

#include <QObject>
#include <QJsonArray>
#include "Models/treeviewermodel.h"
#include "Views/treeviewer.h"
// #include "Models/treemodel.h"
// #include "Models/tnmodel.h"

class TreeViewer;

class TreeViewerController
{
public:
  TreeViewerController(TreeViewer& view, TreeViewerModel &model);
  
  TreeModel *getTree(const QString& path);
  void test();
  // TNModel *getTree1(const QString &path);
private:
  TreeViewer& m_view;
  TreeViewerModel& m_model;
  
};

#endif // TREEVIEWERCONTROLLER_H

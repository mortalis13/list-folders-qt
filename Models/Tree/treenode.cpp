#include "treenode.h"
#include <QObject>

TreeNode::TreeNode(){
  text="123";
  icon="no";
}

TreeNode::TreeNode(QString text)
{
    this->text=text;
    this->icon = "./lib/images/directory.png";                     // default folder icon
}

QString TreeNode::toString() {
  return text;
}

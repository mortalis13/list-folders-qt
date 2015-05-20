#include "model.h"
#include "Models/scandirectory.h"
#include "Models/test.h"
#include <QDir>

Model::Model(QObject *parent) :
    QObject(parent)
{
}

QString Model::startScan(const QHash<QString, QVariant> &fields)
{
    QString res="";
    ScanDirectory scandir;

    scandir.init(fields);
    scandir.startScan();

//    res=scandir.getText();

    res=scandir.getJson();
    return res;
}

QString Model::processText(const QString &text){
    return "="+text+"=";
}

#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    MapWindow sk;
    w.registerWindows(&sk);
    sk.registerMainWindow(&w);
    w.show();
    return a.exec();
}

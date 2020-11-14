#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mapwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void registerWindows(MapWindow * mw);

private slots:
    void on_skeldButton_clicked();
    void on_miraHQButton_clicked();
    void on_polusButton_clicked();

private:
    Ui::MainWindow *ui;
    MapWindow * mapWindow;
};
#endif // MAINWINDOW_H

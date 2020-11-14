#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::registerWindows(MapWindow * mw)
{
    mapWindow = mw;
}

void MainWindow::on_skeldButton_clicked()
{
    mapWindow->openSkeld();
    mapWindow->show();
    hide();
}

void MainWindow::on_miraHQButton_clicked()
{
    mapWindow->openMiraHQ();
    mapWindow->show();
    hide();
}


void MainWindow::on_polusButton_clicked()
{
    mapWindow->openPolus();
    mapWindow->show();
    hide();
}

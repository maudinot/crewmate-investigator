#include "mapwindow.h"
#include "ui_mapwindow.h"

MapWindow::MapWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MapWindow)
{
    ui->setupUi(this);

}

MapWindow::~MapWindow()
{
    delete ui;
}

void MapWindow::registerMainWindow(QMainWindow *m)
{
    mainWindow = m;
}

void MapWindow::openSkeld()
{
    setWindowTitle("Skeld");
    activeMap = ui->SkeldMap;
    ui->SkeldMap->show();
    ui->MiraHQMap->hide();
    ui->PolusMap->hide();
}

void MapWindow::openMiraHQ()
{
    setWindowTitle("MiraHQ");
    activeMap = ui->MiraHQMap;
    ui->SkeldMap->hide();
    ui->MiraHQMap->show();
    ui->PolusMap->hide();
}

void MapWindow::openPolus()
{
    setWindowTitle("Polus");
    activeMap = ui->PolusMap;
    ui->SkeldMap->hide();
    ui->MiraHQMap->hide();
    ui->PolusMap->show();
}

void MapWindow::closeEvent(QCloseEvent *event)
{
    activeMap->reset();
    mainWindow->show();
    event->accept();
}

void MapWindow::on_exitButton_clicked()
{
    close();
}

void MapWindow::on_blackButton_clicked()
{
    QPixmap blackCursor = QPixmap(":/crewmates/images/amongblack.png");
    blackCursor = blackCursor.scaled(blackCursor.width()/3, blackCursor.height()/3, Qt::KeepAspectRatio);
    QCursor cursor(blackCursor);
    activeMap->setCursor(cursor);
    activeMap->setSelected(black);
    activeMap->setBody(false);
}


void MapWindow::on_blueButton_clicked()
{
    QPixmap blueCursor = QPixmap(":/crewmates/images/amongblue.png");
    blueCursor = blueCursor.scaled(blueCursor.width()/3, blueCursor.height()/3, Qt::KeepAspectRatio);
    QCursor cursor(blueCursor);
    activeMap->setCursor(cursor);
    activeMap->setSelected(blue);
    activeMap->setBody(false);
}

void MapWindow::on_brownButton_clicked()
{
    QPixmap brownCursor = QPixmap(":/crewmates/images/amongbrown.png");
    brownCursor = brownCursor.scaled(brownCursor.width()/3, brownCursor.height()/3, Qt::KeepAspectRatio);
    QCursor cursor(brownCursor);
    activeMap->setCursor(cursor);
    activeMap->setSelected(brown);
    activeMap->setBody(false);
}

void MapWindow::on_cyanButton_clicked()
{
    QPixmap cyanCursor = QPixmap(":/crewmates/images/amongcyan.png");
    cyanCursor = cyanCursor.scaled(cyanCursor.width()/3, cyanCursor.height()/3, Qt::KeepAspectRatio);
    QCursor cursor(cyanCursor);
    activeMap->setCursor(cursor);
    activeMap->setSelected(cyan);
    activeMap->setBody(false);
}

void MapWindow::on_greenButton_clicked()
{
    QPixmap greenCursor = QPixmap(":/crewmates/images/amonggreen.png");
    greenCursor = greenCursor.scaled(greenCursor.width()/3, greenCursor.height()/3, Qt::KeepAspectRatio);
    QCursor cursor(greenCursor);
    activeMap->setCursor(cursor);
    activeMap->setSelected(green);
    activeMap->setBody(false);
}

void MapWindow::on_orangeButton_clicked()
{
    QPixmap orangeCursor = QPixmap(":/crewmates/images/amongorange.png");
    orangeCursor = orangeCursor.scaled(orangeCursor.width()/3, orangeCursor.height()/3, Qt::KeepAspectRatio);
    QCursor cursor(orangeCursor);
    activeMap->setCursor(cursor);
    activeMap->setSelected(orange);
    activeMap->setBody(false);
}

void MapWindow::on_pinkButton_clicked()
{
    QPixmap pinkCursor = QPixmap(":/crewmates/images/amongpink.png");
    pinkCursor = pinkCursor.scaled(pinkCursor.width()/3, pinkCursor.height()/3, Qt::KeepAspectRatio);
    QCursor cursor(pinkCursor);
    activeMap->setCursor(cursor);
    activeMap->setSelected(pink);
    activeMap->setBody(false);
}

void MapWindow::on_purpleButton_clicked()
{
    QPixmap purpleCursor = QPixmap(":/crewmates/images/amongpurple.png");
    purpleCursor = purpleCursor.scaled(purpleCursor.width()/3, purpleCursor.height()/3, Qt::KeepAspectRatio);
    QCursor cursor(purpleCursor);
    activeMap->setCursor(cursor);
    activeMap->setSelected(purple);
    activeMap->setBody(false);
}

void MapWindow::on_redButton_clicked()
{
    QPixmap redCursor = QPixmap(":/crewmates/images/amongred.png");
    redCursor = redCursor.scaled(redCursor.width()/3, redCursor.height()/3, Qt::KeepAspectRatio);
    QCursor cursor(redCursor);
    activeMap->setCursor(cursor);
    activeMap->setSelected(red);
    activeMap->setBody(false);
}

void MapWindow::on_whiteButton_clicked()
{
    QPixmap whiteCursor = QPixmap(":/crewmates/images/amongwhite.png");
    whiteCursor = whiteCursor.scaled(whiteCursor.width()/3, whiteCursor.height()/3, Qt::KeepAspectRatio);
    QCursor cursor(whiteCursor);
    activeMap->setCursor(cursor);
    activeMap->setSelected(white);
    activeMap->setBody(false);
}

void MapWindow::on_yellowButton_clicked()
{
    QPixmap yellowCursor = QPixmap(":/crewmates/images/amongyellow.png");
    yellowCursor = yellowCursor.scaled(yellowCursor.width()/3, yellowCursor.height()/3, Qt::KeepAspectRatio);
    QCursor cursor(yellowCursor);
    activeMap->setCursor(cursor);
    activeMap->setSelected(yellow);
    activeMap->setBody(false);
}

void MapWindow::on_limeButton_clicked()
{
    QPixmap limeCursor = QPixmap(":/crewmates/images/amonglime.png");
    limeCursor = limeCursor.scaled(limeCursor.width()/3, limeCursor.height()/3, Qt::KeepAspectRatio);
    QCursor cursor(limeCursor);
    activeMap->setCursor(cursor);
    activeMap->setSelected(lime);
    activeMap->setBody(false);
}

void MapWindow::on_clearButton_clicked()
{
    activeMap->reset();
}

void MapWindow::on_blackButton_2_clicked()
{
    QPixmap pixmap = QPixmap(":/bodies/images/blackdead.png");
    pixmap = pixmap.scaled(pixmap.width()/15, pixmap.height()/15, Qt::KeepAspectRatio);
    QCursor cursor(pixmap);
    activeMap->setCursor(cursor);
    activeMap->setSelected(black);
    activeMap->setBody(true);
}

void MapWindow::on_blueButton_2_clicked()
{
    QPixmap pixmap = QPixmap(":/bodies/images/bluedead.png");
    pixmap = pixmap.scaled(pixmap.width()/15, pixmap.height()/15, Qt::KeepAspectRatio);
    QCursor cursor(pixmap);
    activeMap->setCursor(cursor);
    activeMap->setSelected(blue);
    activeMap->setBody(true);
}

void MapWindow::on_brownButton_2_clicked()
{
    QPixmap pixmap = QPixmap(":/bodies/images/browndead.png");
    pixmap = pixmap.scaled(pixmap.width()/15, pixmap.height()/15, Qt::KeepAspectRatio);
    QCursor cursor(pixmap);
    activeMap->setCursor(cursor);
    activeMap->setSelected(brown);
    activeMap->setBody(true);
}

void MapWindow::on_cyanButton_2_clicked()
{
    QPixmap pixmap = QPixmap(":/bodies/images/cyandead.png");
    pixmap = pixmap.scaled(pixmap.width()/15, pixmap.height()/15, Qt::KeepAspectRatio);
    QCursor cursor(pixmap);
    activeMap->setCursor(cursor);
    activeMap->setSelected(cyan);
    activeMap->setBody(true);
}

void MapWindow::on_greenButton_2_clicked()
{
    QPixmap pixmap = QPixmap(":/bodies/images/greendead.png");
    pixmap = pixmap.scaled(pixmap.width()/15, pixmap.height()/15, Qt::KeepAspectRatio);
    QCursor cursor(pixmap);
    activeMap->setCursor(cursor);
    activeMap->setSelected(green);
    activeMap->setBody(true);
}

void MapWindow::on_orangeButton_2_clicked()
{
    QPixmap pixmap = QPixmap(":/bodies/images/orangedead.png");
    pixmap = pixmap.scaled(pixmap.width()/15, pixmap.height()/15, Qt::KeepAspectRatio);
    QCursor cursor(pixmap);
    activeMap->setCursor(cursor);
    activeMap->setSelected(orange);
    activeMap->setBody(true);
}

void MapWindow::on_pinkButton_2_clicked()
{
    QPixmap pixmap = QPixmap(":/bodies/images/pinkdead.png");
    pixmap = pixmap.scaled(pixmap.width()/15, pixmap.height()/15, Qt::KeepAspectRatio);
    QCursor cursor(pixmap);
    activeMap->setCursor(cursor);
    activeMap->setSelected(pink);
    activeMap->setBody(true);
}

void MapWindow::on_purpleButton_2_clicked()
{
    QPixmap pixmap = QPixmap(":/bodies/images/purpledead.png");
    pixmap = pixmap.scaled(pixmap.width()/15, pixmap.height()/15, Qt::KeepAspectRatio);
    QCursor cursor(pixmap);
    activeMap->setCursor(cursor);
    activeMap->setSelected(purple);
    activeMap->setBody(true);
}

void MapWindow::on_redButton_2_clicked()
{
    QPixmap pixmap = QPixmap(":/bodies/images/reddead.png");
    pixmap = pixmap.scaled(pixmap.width()/15, pixmap.height()/15, Qt::KeepAspectRatio);
    QCursor cursor(pixmap);
    activeMap->setCursor(cursor);
    activeMap->setSelected(red);
    activeMap->setBody(true);
}

void MapWindow::on_whiteButton_2_clicked()
{
    QPixmap pixmap = QPixmap(":/bodies/images/whitedead.png");
    pixmap = pixmap.scaled(pixmap.width()/15, pixmap.height()/15, Qt::KeepAspectRatio);
    QCursor cursor(pixmap);
    activeMap->setCursor(cursor);
    activeMap->setSelected(white);
    activeMap->setBody(true);
}

void MapWindow::on_yellowButton_2_clicked()
{
    QPixmap pixmap = QPixmap(":/bodies/images/yellowdead.png");
    pixmap = pixmap.scaled(pixmap.width()/15, pixmap.height()/15, Qt::KeepAspectRatio);
    QCursor cursor(pixmap);
    activeMap->setCursor(cursor);
    activeMap->setSelected(yellow);
    activeMap->setBody(true);
}

void MapWindow::on_limeButton_2_clicked()
{
    QPixmap pixmap = QPixmap(":/bodies/images/limedead.png");
    pixmap = pixmap.scaled(pixmap.width()/15, pixmap.height()/15, Qt::KeepAspectRatio);
    QCursor cursor(pixmap);
    activeMap->setCursor(cursor);
    activeMap->setSelected(lime);
    activeMap->setBody(true);
}

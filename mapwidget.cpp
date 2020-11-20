#include "mapwidget.h"

MapWidget::MapWidget(QWidget * parent) : QLabel(parent) {
    for (int col = 0; col<14 ; col++) {
        crew[col].setParent(this);
        dead[col].setParent(this);
    }
    selected = none;
    body = false;
    path = false;
    QPixmap pixmap = QPixmap(":/crewmates/images/amongblack.png");
    pixmap = pixmap.scaled(pixmap.width()/3, pixmap.height()/3, Qt::KeepAspectRatio);
    crew[black].setPixmap(pixmap);
    crew[black].hide();
    pixmap = QPixmap(":/crewmates/images/amongblue.png");
    pixmap = pixmap.scaled(pixmap.width()/3, pixmap.height()/3, Qt::KeepAspectRatio);
    crew[blue].setPixmap(pixmap);
    crew[blue].hide();
    pixmap = QPixmap(":/crewmates/images/amongbrown.png");
    pixmap = pixmap.scaled(pixmap.width()/3, pixmap.height()/3, Qt::KeepAspectRatio);
    crew[brown].setPixmap(pixmap);
    crew[brown].hide();
    pixmap = QPixmap(":/crewmates/images/amongcyan.png");
    pixmap = pixmap.scaled(pixmap.width()/3, pixmap.height()/3, Qt::KeepAspectRatio);
    crew[cyan].setPixmap(pixmap);
    crew[cyan].hide();
    pixmap = QPixmap(":/crewmates/images/amonggreen.png");
    pixmap = pixmap.scaled(pixmap.width()/3, pixmap.height()/3, Qt::KeepAspectRatio);
    crew[green].setPixmap(pixmap);
    crew[green].hide();
    pixmap = QPixmap(":/crewmates/images/amongorange.png");
    pixmap = pixmap.scaled(pixmap.width()/3, pixmap.height()/3, Qt::KeepAspectRatio);
    crew[orange].setPixmap(pixmap);
    crew[orange].hide();
    pixmap = QPixmap(":/crewmates/images/amongpink.png");
    pixmap = pixmap.scaled(pixmap.width()/3, pixmap.height()/3, Qt::KeepAspectRatio);
    crew[pink].setPixmap(pixmap);
    crew[pink].hide();
    pixmap = QPixmap(":/crewmates/images/amongpurple.png");
    pixmap = pixmap.scaled(pixmap.width()/3, pixmap.height()/3, Qt::KeepAspectRatio);
    crew[purple].setPixmap(pixmap);
    crew[purple].hide();
    pixmap = QPixmap(":/crewmates/images/amongred.png");
    pixmap = pixmap.scaled(pixmap.width()/3, pixmap.height()/3, Qt::KeepAspectRatio);
    crew[red].setPixmap(pixmap);
    crew[red].hide();
    pixmap = QPixmap(":/crewmates/images/amongwhite.png");
    pixmap = pixmap.scaled(pixmap.width()/3, pixmap.height()/3, Qt::KeepAspectRatio);
    crew[white].setPixmap(pixmap);
    crew[white].hide();
    pixmap = QPixmap(":/crewmates/images/amongyellow.png");
    pixmap = pixmap.scaled(pixmap.width()/3, pixmap.height()/3, Qt::KeepAspectRatio);
    crew[yellow].setPixmap(pixmap);
    crew[yellow].hide();
    pixmap = QPixmap(":/crewmates/images/amonglime.png");
    pixmap = pixmap.scaled(pixmap.width()/3, pixmap.height()/3, Qt::KeepAspectRatio);
    crew[lime].setPixmap(pixmap);
    crew[lime].hide();
    pixmap = QPixmap(":/bodies/images/blackdead.png");
    pixmap = pixmap.scaled(pixmap.width()/15, pixmap.height()/15, Qt::KeepAspectRatio);
    dead[black].setPixmap(pixmap);
    dead[black].hide();
    pixmap = QPixmap(":/bodies/images/bluedead.png");
    pixmap = pixmap.scaled(pixmap.width()/15, pixmap.height()/15, Qt::KeepAspectRatio);
    dead[blue].setPixmap(pixmap);
    dead[blue].hide();
    pixmap = QPixmap(":/bodies/images/browndead.png");
    pixmap = pixmap.scaled(pixmap.width()/15, pixmap.height()/15, Qt::KeepAspectRatio);
    dead[brown].setPixmap(pixmap);
    dead[brown].hide();
    pixmap = QPixmap(":/bodies/images/cyandead.png");
    pixmap = pixmap.scaled(pixmap.width()/15, pixmap.height()/15, Qt::KeepAspectRatio);
    dead[cyan].setPixmap(pixmap);
    dead[cyan].hide();
    pixmap = QPixmap(":/bodies/images/greendead.png");
    pixmap = pixmap.scaled(pixmap.width()/15, pixmap.height()/15, Qt::KeepAspectRatio);
    dead[green].setPixmap(pixmap);
    dead[green].hide();
    pixmap = QPixmap(":/bodies/images/orangedead.png");
    pixmap = pixmap.scaled(pixmap.width()/15, pixmap.height()/15, Qt::KeepAspectRatio);
    dead[orange].setPixmap(pixmap);
    dead[orange].hide();
    pixmap = QPixmap(":/bodies/images/pinkdead.png");
    pixmap = pixmap.scaled(pixmap.width()/15, pixmap.height()/15, Qt::KeepAspectRatio);
    dead[pink].setPixmap(pixmap);
    dead[pink].hide();
    pixmap = QPixmap(":/bodies/images/purpledead.png");
    pixmap = pixmap.scaled(pixmap.width()/15, pixmap.height()/15, Qt::KeepAspectRatio);
    dead[purple].setPixmap(pixmap);
    dead[purple].hide();
    pixmap = QPixmap(":/bodies/images/reddead.png");
    pixmap = pixmap.scaled(pixmap.width()/15, pixmap.height()/15, Qt::KeepAspectRatio);
    dead[red].setPixmap(pixmap);
    dead[red].hide();
    pixmap = QPixmap(":/bodies/images/whitedead.png");
    pixmap = pixmap.scaled(pixmap.width()/15, pixmap.height()/15, Qt::KeepAspectRatio);
    dead[white].setPixmap(pixmap);
    dead[white].hide();
    pixmap = QPixmap(":/bodies/images/yellowdead.png");
    pixmap = pixmap.scaled(pixmap.width()/15, pixmap.height()/15, Qt::KeepAspectRatio);
    dead[yellow].setPixmap(pixmap);
    dead[yellow].hide();
    pixmap = QPixmap(":/bodies/images/limedead.png");
    pixmap = pixmap.scaled(pixmap.width()/15, pixmap.height()/15, Qt::KeepAspectRatio);
    dead[lime].setPixmap(pixmap);
    dead[lime].hide();
}

void MapWidget::mousePressEvent(QMouseEvent *event)
{
    QLabel * selectedLabel = &crew[selected];
    if(body){
        selectedLabel = &dead[selected];
    }
    if(event->button() == Qt::LeftButton && !path && selected!=none){
        selectedLabel->move(event->x() - selectedLabel->pixmap()->width()/2,event->y() - selectedLabel->pixmap()->height()/2);
        if(!selectedLabel->isVisible())
            selectedLabel->show();
        event->accept();
    } else if(event->button() == Qt::LeftButton && path && selected!=none) {
        if(crewPath[selected].isEmpty()) {
            crewPath[selected].addEllipse(event->x(),event->y(),1,1);
        } else {
            crewPath[selected].lineTo(event->x(),event->y());
        }
        update();
        event->accept();
    } else if (event->button() == Qt::RightButton) {
        setCursor(Qt::ArrowCursor);
        selected = none;
        update();
        event->accept();
    } else {
        event->ignore();
    }

}

void MapWidget::paintEvent(QPaintEvent *e)
{
    QLabel::paintEvent(e);
    QPainter painter;
    QPen pen;
    pen.setWidth(5);
    painter.begin(this);
    for (int col = 1; col<14 ; col++) {
        pen.setColor(toQColor(static_cast<crewColor>(col)));
        painter.setPen(pen);
        painter.drawPath(crewPath[col]);
        if(path && selected==col) {
            painter.drawEllipse(crewPath[col].currentPosition(),5,5);
        }
    }
    painter.end();
}

void MapWidget::setCrew()
{
    path = false;
    body = false;
}

void MapWidget::setPath()
{
    path = true;
    body = false;
}

void MapWidget::setBody()
{
    body = true;
    path = false;

}

void MapWidget::setSelected(const crewColor &value)
{
    selected = value;
}

void MapWidget::reset()
{
    for (int col = 1; col<14 ; col++) {
        crew[col].hide();
        dead[col].hide();
        crewPath[col] = QPainterPath();
    }
    update();
    setCursor(Qt::ArrowCursor);
    selected = none;
    setCrew();//just to restore the default state
}

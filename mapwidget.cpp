#include "mapwidget.h"

MapWidget::MapWidget(QWidget * parent) : QLabel(parent), blackCrew(this), blueCrew(this), brownCrew(this), cyanCrew(this), greenCrew(this), orangeCrew(this), pinkCrew(this), purpleCrew(this), redCrew(this), whiteCrew(this), yellowCrew(this), limeCrew(this),
    blackBody(this), blueBody(this), brownBody(this), cyanBody(this), greenBody(this), orangeBody(this), pinkBody(this), purpleBody(this), redBody(this), whiteBody(this), yellowBody(this), limeBody(this)
{
    selected = none;
    body = false;
    path = false;
    QPixmap pixmap = QPixmap(":/crewmates/images/amongblack.png");
    pixmap = pixmap.scaled(pixmap.width()/3, pixmap.height()/3, Qt::KeepAspectRatio);
    blackCrew.setPixmap(pixmap);
    blackCrew.hide();
    pixmap = QPixmap(":/crewmates/images/amongblue.png");
    pixmap = pixmap.scaled(pixmap.width()/3, pixmap.height()/3, Qt::KeepAspectRatio);
    blueCrew.setPixmap(pixmap);
    blueCrew.hide();
    pixmap = QPixmap(":/crewmates/images/amongbrown.png");
    pixmap = pixmap.scaled(pixmap.width()/3, pixmap.height()/3, Qt::KeepAspectRatio);
    brownCrew.setPixmap(pixmap);
    brownCrew.hide();
    pixmap = QPixmap(":/crewmates/images/amongcyan.png");
    pixmap = pixmap.scaled(pixmap.width()/3, pixmap.height()/3, Qt::KeepAspectRatio);
    cyanCrew.setPixmap(pixmap);
    cyanCrew.hide();
    pixmap = QPixmap(":/crewmates/images/amonggreen.png");
    pixmap = pixmap.scaled(pixmap.width()/3, pixmap.height()/3, Qt::KeepAspectRatio);
    greenCrew.setPixmap(pixmap);
    greenCrew.hide();
    pixmap = QPixmap(":/crewmates/images/amongorange.png");
    pixmap = pixmap.scaled(pixmap.width()/3, pixmap.height()/3, Qt::KeepAspectRatio);
    orangeCrew.setPixmap(pixmap);
    orangeCrew.hide();
    pixmap = QPixmap(":/crewmates/images/amongpink.png");
    pixmap = pixmap.scaled(pixmap.width()/3, pixmap.height()/3, Qt::KeepAspectRatio);
    pinkCrew.setPixmap(pixmap);
    pinkCrew.hide();
    pixmap = QPixmap(":/crewmates/images/amongpurple.png");
    pixmap = pixmap.scaled(pixmap.width()/3, pixmap.height()/3, Qt::KeepAspectRatio);
    purpleCrew.setPixmap(pixmap);
    purpleCrew.hide();
    pixmap = QPixmap(":/crewmates/images/amongred.png");
    pixmap = pixmap.scaled(pixmap.width()/3, pixmap.height()/3, Qt::KeepAspectRatio);
    redCrew.setPixmap(pixmap);
    redCrew.hide();
    pixmap = QPixmap(":/crewmates/images/amongwhite.png");
    pixmap = pixmap.scaled(pixmap.width()/3, pixmap.height()/3, Qt::KeepAspectRatio);
    whiteCrew.setPixmap(pixmap);
    whiteCrew.hide();
    pixmap = QPixmap(":/crewmates/images/amongyellow.png");
    pixmap = pixmap.scaled(pixmap.width()/3, pixmap.height()/3, Qt::KeepAspectRatio);
    yellowCrew.setPixmap(pixmap);
    yellowCrew.hide();
    pixmap = QPixmap(":/crewmates/images/amonglime.png");
    pixmap = pixmap.scaled(pixmap.width()/3, pixmap.height()/3, Qt::KeepAspectRatio);
    limeCrew.setPixmap(pixmap);
    limeCrew.hide();
    pixmap = QPixmap(":/bodies/images/blackdead.png");
    pixmap = pixmap.scaled(pixmap.width()/15, pixmap.height()/15, Qt::KeepAspectRatio);
    blackBody.setPixmap(pixmap);
    blackBody.hide();
    pixmap = QPixmap(":/bodies/images/bluedead.png");
    pixmap = pixmap.scaled(pixmap.width()/15, pixmap.height()/15, Qt::KeepAspectRatio);
    blueBody.setPixmap(pixmap);
    blueBody.hide();
    pixmap = QPixmap(":/bodies/images/browndead.png");
    pixmap = pixmap.scaled(pixmap.width()/15, pixmap.height()/15, Qt::KeepAspectRatio);
    brownBody.setPixmap(pixmap);
    brownBody.hide();
    pixmap = QPixmap(":/bodies/images/cyandead.png");
    pixmap = pixmap.scaled(pixmap.width()/15, pixmap.height()/15, Qt::KeepAspectRatio);
    cyanBody.setPixmap(pixmap);
    cyanBody.hide();
    pixmap = QPixmap(":/bodies/images/greendead.png");
    pixmap = pixmap.scaled(pixmap.width()/15, pixmap.height()/15, Qt::KeepAspectRatio);
    greenBody.setPixmap(pixmap);
    greenBody.hide();
    pixmap = QPixmap(":/bodies/images/orangedead.png");
    pixmap = pixmap.scaled(pixmap.width()/15, pixmap.height()/15, Qt::KeepAspectRatio);
    orangeBody.setPixmap(pixmap);
    orangeBody.hide();
    pixmap = QPixmap(":/bodies/images/pinkdead.png");
    pixmap = pixmap.scaled(pixmap.width()/15, pixmap.height()/15, Qt::KeepAspectRatio);
    pinkBody.setPixmap(pixmap);
    pinkBody.hide();
    pixmap = QPixmap(":/bodies/images/purpledead.png");
    pixmap = pixmap.scaled(pixmap.width()/15, pixmap.height()/15, Qt::KeepAspectRatio);
    purpleBody.setPixmap(pixmap);
    purpleBody.hide();
    pixmap = QPixmap(":/bodies/images/reddead.png");
    pixmap = pixmap.scaled(pixmap.width()/15, pixmap.height()/15, Qt::KeepAspectRatio);
    redBody.setPixmap(pixmap);
    redBody.hide();
    pixmap = QPixmap(":/bodies/images/whitedead.png");
    pixmap = pixmap.scaled(pixmap.width()/15, pixmap.height()/15, Qt::KeepAspectRatio);
    whiteBody.setPixmap(pixmap);
    whiteBody.hide();
    pixmap = QPixmap(":/bodies/images/yellowdead.png");
    pixmap = pixmap.scaled(pixmap.width()/15, pixmap.height()/15, Qt::KeepAspectRatio);
    yellowBody.setPixmap(pixmap);
    yellowBody.hide();
    pixmap = QPixmap(":/bodies/images/limedead.png");
    pixmap = pixmap.scaled(pixmap.width()/15, pixmap.height()/15, Qt::KeepAspectRatio);
    limeBody.setPixmap(pixmap);
    limeBody.hide();
}

void MapWidget::mousePressEvent(QMouseEvent *event)
{
    QLabel * selectedLabel = nullptr;
    if(!body && !path){
        switch (selected) {
        case black:
            selectedLabel = &blackCrew;
            break;
        case brown:
            selectedLabel = &brownCrew;
            break;
        case blue:
            selectedLabel = &blueCrew;
            break;
        case cyan:
            selectedLabel = &cyanCrew;
            break;
        case green:
            selectedLabel = &greenCrew;
            break;
        case orange:
            selectedLabel = &orangeCrew;
            break;
        case pink:
            selectedLabel = &pinkCrew;
            break;
        case purple:
            selectedLabel = &purpleCrew;
            break;
        case red:
            selectedLabel = &redCrew;
            break;
        case white:
            selectedLabel = &whiteCrew;
            break;
        case yellow:
            selectedLabel = &yellowCrew;
            break;
        case lime:
            selectedLabel = &limeCrew;
            break;
        case none:
            event->ignore();
            break;
        }
    } else if(!path) {
        switch (selected) {
        case black:
            selectedLabel = &blackBody;
            break;
        case brown:
            selectedLabel = &brownBody;
            break;
        case blue:
            selectedLabel = &blueBody;
            break;
        case cyan:
            selectedLabel = &cyanBody;
            break;
        case green:
            selectedLabel = &greenBody;
            break;
        case orange:
            selectedLabel = &orangeBody;
            break;
        case pink:
            selectedLabel = &pinkBody;
            break;
        case purple:
            selectedLabel = &purpleBody;
            break;
        case red:
            selectedLabel = &redBody;
            break;
        case white:
            selectedLabel = &whiteBody;
            break;
        case yellow:
            selectedLabel = &yellowBody;
            break;
        case lime:
            selectedLabel = &limeBody;
            break;
        case none:
            event->ignore();
            break;
        }
    }
    if(event->button() == Qt::LeftButton && !path && selectedLabel != nullptr){
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
    update();//to show the last point
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
    blackCrew.hide();
    blueCrew.hide();
    brownCrew.hide();
    cyanCrew.hide();
    greenCrew.hide();
    orangeCrew.hide();
    pinkCrew.hide();
    purpleCrew.hide();
    redCrew.hide();
    whiteCrew.hide();
    yellowCrew.hide();
    limeCrew.hide();
    blackBody.hide();
    blueBody.hide();
    brownBody.hide();
    cyanBody.hide();
    greenBody.hide();
    orangeBody.hide();
    pinkBody.hide();
    purpleBody.hide();
    redBody.hide();
    whiteBody.hide();
    yellowBody.hide();
    limeBody.hide();
    for (int col = 1; col<14 ; col++) {
        crewPath[col] = QPainterPath();
    }
    update();
    setCursor(Qt::ArrowCursor);
    selected = none;
    setCrew();//just to restore the default state
}

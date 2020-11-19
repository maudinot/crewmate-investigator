#ifndef MAPWIDGET_H
#define MAPWIDGET_H

#include <QLabel>
#include <QMouseEvent>
#include <QPixmap>
#include <QPainter>
#include "crewcolor.h"

#include <QDebug>

class MapWidget : public QLabel
{
    Q_OBJECT
public:
    MapWidget(QWidget * parent = nullptr);
    void reset();

    void setSelected(const crewColor &value);

    void setCrew();
    void setBody();
    void setPath();

protected:
    void mousePressEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent *e);

private:
    crewColor selected;
    bool body;
    bool path;
    QLabel blackCrew, blueCrew, brownCrew, cyanCrew, greenCrew, orangeCrew, pinkCrew, purpleCrew, redCrew, whiteCrew, yellowCrew, limeCrew;
    QLabel blackBody, blueBody, brownBody, cyanBody, greenBody, orangeBody, pinkBody, purpleBody, redBody, whiteBody, yellowBody, limeBody;
    QPainterPath crewPath[14];
};

#endif // MAPWIDGET_H

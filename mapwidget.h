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
    QLabel crew[14];
    QLabel dead[14];
    QPainterPath crewPath[14];
    bool pathStarted;
};

#endif // MAPWIDGET_H

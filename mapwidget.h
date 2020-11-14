#ifndef MAPWIDGET_H
#define MAPWIDGET_H

#include <QLabel>
#include <QMouseEvent>
#include <QPixmap>
#include "crewcolor.h"

class MapWidget : public QLabel
{
    Q_OBJECT
public:
    MapWidget(QWidget * parent = nullptr);
    void reset();

    void setSelected(const crewColor &value);

    void setBody(bool value);

protected:
    void mousePressEvent(QMouseEvent *event);

private:
    crewColor selected;
    bool body;
    QLabel blackCrew, blueCrew, brownCrew, cyanCrew, greenCrew, orangeCrew, pinkCrew, purpleCrew, redCrew, whiteCrew, yellowCrew, limeCrew;
    QLabel blackBody, blueBody, brownBody, cyanBody, greenBody, orangeBody, pinkBody, purpleBody, redBody, whiteBody, yellowBody, limeBody;
};

#endif // MAPWIDGET_H

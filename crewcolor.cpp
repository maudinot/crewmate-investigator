#include "crewcolor.h"

QColor toQColor(crewColor col){
    switch (col) {
    case none:
        return Qt::transparent;
    case black:
        return Qt::black;
    case blue:
        return Qt::blue;
    case brown:
        return QColor(102, 51, 0);
    case cyan:
        return Qt::cyan;
    case green:
        return QColor(0, 102, 0);
    case orange:
        return QColor(255, 153, 0);
    case pink:
        return QColor(255, 0, 255);
    case purple:
        return QColor(153, 0, 255);
    case red:
        return Qt::red;
    case white:
        return Qt::white;
    case yellow:
        return Qt::yellow;
    case lime:
        return QColor(102, 255, 51);
    }
    return Qt::transparent;//unreachable
}

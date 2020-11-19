#ifndef CREWCOLOR_H
#define CREWCOLOR_H

#include <QColor>

enum crewColor {
    none=0, black, blue, brown, cyan, green, orange, pink, purple, red, white, yellow, lime
};

QColor toQColor(crewColor col);

#endif // CREWCOLOR_H

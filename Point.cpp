/*
 * Naama Harshoshanim
 * 315783217
 * 4/11/17
 */

#include "Point.h"

Point::Point(int x, int y) {
     this->x = x;
     this->y = y;
}


int Point::getX() const {
    return this->x;
}

int Point::getY() const {
    return this->y;
}

void Point::setX(int newval) {
    this->x = newval;
}

void Point::setY(int newval) {
    this->y = newval;
}
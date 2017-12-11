/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
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

bool Point:: operator ==(const Point &p) const {
    return p.getX() == this->getX() && p.getY() == this->getY();
}
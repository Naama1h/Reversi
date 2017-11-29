/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#ifndef POINT_H
#define POINT_H


class Point {
public:
    /**
     * constructor.
     * @param x
     * @param y
     */
    Point(int x, int y);
    /**
     * destructor.
     */
    ~Point() {};
    /**
     * constructor.
     */
    Point() {};
    /**
     * setting the member x.
     * @param newval
     */
    void setX(int newval);
    /**
     * setting the member y.
     * @param newval
     */
    void setY(int newval);
    /**
     * getting the member x.
     * @return int
     */
    int getX() const ;
    /**
     * getting the member y.
     * @return int
     */
    int getY() const ;
    /**
     * implementing ==.
     * @param p point
     * @return bool
     */
    bool operator ==(const Point &p) const;
private:
    // members.
    int x;
    int y;
};


#endif //POINT_H

#ifndef PLAYER_H
#define PLAYER_H
/*
 * Naama Harshoshanim
 * 315783217
 * 4/11/17
 */
#include <iostream>
#include "Point.h"
#include <string>
#include <vector>
#include "Board.h"
using namespace std;
//enum celltype {Black, White, Empty};

class Player {
public:
    /**
     * destructor.
     */
    virtual ~Player() {};
    /**
     * choosing cell from the vector of the optional cells.
     * @param options
     * @return Point
     */
    virtual Point chooseCell(vector<Point>* options) const = 0;
    /**
     * get the member cellType1.
     * @return cellType
     */
    virtual celltype getCellType() const = 0;
    /**
     * get the member name.
     * @return string
     */
    virtual string getName() const = 0;

private:
    string name;
    celltype celltype1;
};


#endif //PLAYER_H

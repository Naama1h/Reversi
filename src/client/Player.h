/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include "Point.h"
#include <string>
#include <vector>
#include <cstring>
#include "Board.h"
#include "Logic.h"
#include "StandartLogic.h"

using namespace std;

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
    virtual Point chooseCell(vector<Point>* options, StandartLogic* logic) const = 0;
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
    /**
     * if there is client, send to the server.
     * @param p Point
     */
    virtual void sendMove(Point p) {};
    /**
     * no move.
     */
    virtual void noMove() {};
    /**
     * returning true if it is remote player.
     * @return bool
     */
    virtual bool trueIfRemote() {
        return false;
    };
private:
    // members
    string name;
    celltype celltype1;
};


#endif //PLAYER_H
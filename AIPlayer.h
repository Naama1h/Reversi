/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#ifndef ALPLAYER_H
#define ALPLAYER_H
#include "Player.h"
#include "Point.h"
#include "Board.h"
#include <vector>

class AIPlayer : public Player {
public:
    /**
     * constructor.
     */
    AIPlayer() {};
    /**
     * constructor.
     * @param name
     * @param celltype1
     */
    AIPlayer(string name, celltype celltype1);
    /**
     * destructor.
     */
    virtual ~AIPlayer() {};
    /**
     * choosing cell from the vector of the optional cells.
     * @param options
     * @return Point
     */
    virtual Point chooseCell(vector<Point>* options, StandartLogic* logic) const;
    /**
     * get the member cellType1.
     * @return cellType
     */
    virtual celltype getCellType() const;
    /**
     * get the member name.
     * @return string
     */
    virtual string getName() const;

private:
    // members
    string name;
    celltype celltype1;
};


#endif //AIPLAYER_H

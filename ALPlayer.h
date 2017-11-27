//
// Created by naama on 11/23/17.
//

#ifndef ALPLAYER_H
#define ALPLAYER_H
#include "Player.h"
#include "Point.h"
#include "Board.h"
#include <vector>


class ALPlayer : public Player {
public:
    /**
     * constructor.
     */
    ALPlayer() {};
    /**
     * constructor.
     * @param name
     * @param celltype1
     */
    ALPlayer(string name, celltype celltype1);
    /**
     * destructor.
     */
    virtual ~ALPlayer() {};
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


#endif //ALPLAYER_H

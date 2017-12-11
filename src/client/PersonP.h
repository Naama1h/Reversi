/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#ifndef PERSONP_H
#define PERSONP_H
#include "Player.h"
#include "Point.h"
#include "Board.h"
#include "StandartLogic.h"
#include <vector>
#include "PrintConsole.h"

class PersonP : public Player {
public:
    /**
     * constructor.
     */
    PersonP() {};
    /**
     * constructor.
     * @param name
     * @param celltype1
     */
    PersonP(string name, celltype celltype1);
    /**
     * destructor.
     */
    virtual ~PersonP() {};
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
    /**
     * have no move.
     */
    virtual void noMove();
private:
    // members
    string name;
    celltype celltype1;
};


#endif //PERSONP_H
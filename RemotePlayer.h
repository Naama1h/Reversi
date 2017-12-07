//
// Created by naama on 12/6/17.
//

#ifndef REMOTEPLAYER_H
#define REMOTEPLAYER_H

#include "Player.h"
#include "Client.h"

class RemotePlayer : public Player {
public:
    /**
     * constructor.
     */
    RemotePlayer() {};
    /**
     * constructor.
     * @param name
     * @param celltype1
     */
    RemotePlayer(string name, celltype celltype1, Client* client1);
    /**
     * destructor.
     */
    virtual ~RemotePlayer() {};
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
    Client *client;
};


#endif //REMOTEPLAYER_H

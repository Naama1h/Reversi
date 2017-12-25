/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#ifndef PERSONPSERVER_H
#define PERSONPSERVER_H

#include "PersonP.h"
#include "Client.h"
#include <vector>
#include "PrintConsole.h"
#include <limits>

class PersonPServer : public PersonP {
public:
    /**
     * constructor.
     * @param name
     * @param celltype1
     * @param client1
     */
    PersonPServer(string name, celltype celltype1, Client* client1);
    /**
     * discructor.
     */
    ~PersonPServer();
    /**
     * choosing cell.
     * @param options
     * @param logic
     * @return point
     */
    Point chooseCell(vector<Point>* options, StandartLogic* logic) const;
    /**
     * get cellTYpe member.
     * @return cellType
     */
    celltype getCellType() const;
    /**
     * get name.
     * @return name
     */
    string getName() const;
    /**
     * if there is client, send to the server.
     * @param p Point
     */
    virtual void sendMove(Point p);
    /**
     * no move.
     */
    virtual void noMove();
private:
    // members
    Client* client;
    string name;
    celltype celltype1;
    PersonP* personP;
};


#endif //PERSONPSERVER_H

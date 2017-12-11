/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#ifndef EX3_PERSONPSERVER_H
#define EX3_PERSONPSERVER_H

#include "PersonP.h"
#include "Client.h"
#include <vector>
#include "PrintConsole.h"
#include <limits>

class PersonPServer : public PersonP {
public:
    PersonPServer(string name, celltype celltype1, Client* client1);
    ~PersonPServer();
    Point chooseCell(vector<Point>* options, StandartLogic* logic) const;
    celltype getCellType() const;
    string getName() const;
    /**
     * if there is client, send to the server.
     * @param p Point
     */
    virtual void sendMove(Point p);
    virtual void noMove();
private:
    Client* client;
    string name;
    celltype celltype1;
    PersonP* personP;
};


#endif //EX3_PERSONPSERVER_H

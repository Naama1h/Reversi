//
// Created by naama on 12/6/17.
//

#include "PersonPServer.h"

PersonPServer::PersonPServer(string name, celltype celltype1, Client *client1) {
    this->client = client1;
    this->celltype1 = celltype1;
    this->name = name;
}

Point PersonPServer::chooseCell(vector<Point> *options, StandartLogic *logic) const {

}
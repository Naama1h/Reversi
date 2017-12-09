//
// Created by naama on 12/6/17.
//

#include "PersonPServer.h"

PersonPServer::PersonPServer(string name, celltype celltype1, Client *client1) {
    this->client = client1;
    this->celltype1 = celltype1;
    this->name = name;
    this->personP = new PersonP(name, celltype1);
}

PersonPServer::~PersonPServer() {
    delete this->personP;
}

Point PersonPServer::chooseCell(vector<Point> *options, StandartLogic *logic) const {
    PrintConsole printer;
    printer.itsYourMove(this->personP->getName());
    printer.possibleMoves(options);
    printer.enterMove();

    //// no move, end, point


    char x, y, tmp;
    cin >> x >> tmp >> y;
    if (cin.fail()) {
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input
    }
    // user didn't input a number
//    printer.onlyNumbers();;
    cin.clear(); // reset failbit
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input
    Point cell(x - 48, y - 48);
//    char point[7] = {x + 48, ',', y + 48};
    char point[7] = {x, ',', y};
    this->client->sendMove(point);
    return cell;
}

celltype PersonPServer::getCellType() const {
    return this->celltype1;
}

string PersonPServer::getName() const {
    return this->personP->getName();
}
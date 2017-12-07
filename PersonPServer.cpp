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
    PrintConsole printer;
    printer.itsYourMove(this->getName());
    printer.possibleMoves(options);
    printer.enterMove();
    int x, y;
    char tmp;
    cin >> x >> tmp >> y;
    if (cin.fail()) {
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input
    }
    // user didn't input a number
    printer.onlyNumbers();;
    cin.clear(); // reset failbit
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input
    Point cell(x, y);
    char point[3] = {x + 48, ',', y + 48};
    this->client->sendMove(point);
    return cell;
}
/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

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
    char input[12];
    cin >> input;
    if (strcmp(input,"End") == 0) {
        return Point(-1,-1);
    } else if (strcmp(input,"NoMove") == 0) {
        return Point(-2,-2);
    } else {
        char playX;
        char playY;
        cin >> playX;
        cin >> playY;
        Point cell(playX - 48, playY - 48);
        return cell;
    }
}

celltype PersonPServer::getCellType() const {
    return this->celltype1;
}

string PersonPServer::getName() const {
    return this->personP->getName();
}

void PersonPServer::sendMove(Point p){
    if (p == Point(-1,-1)) {
        char message[3] = {'E','n','d'};
        this->client->sendMove(message);
    } else if(p == Point(-2,-2)) {
        char message[6] = {'N','o','M','o','v','e'};
        this->client->sendMove(message);
    } else {
        char move[3] = {(char)(p.getX() + 48), ',', (char)(p.getY() + 48)};
        this->client->sendMove(move);
    }
}

void PersonPServer::noMove() {
    PrintConsole printer;
    printer.itsYourMove(this->getName());
    char in[7];
    do {
        printer.NoPossibleMoves();
        cin >> in;
    } while(strcmp(in,"NoMove") != 0);
    this->sendMove(Point(-2,-2));
}
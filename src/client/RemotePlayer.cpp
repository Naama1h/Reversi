/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#include "RemotePlayer.h"
#include "PrintConsole.h"

RemotePlayer::RemotePlayer(string name, celltype celltype1, Client* client1) {
    this->name = name;
    this->celltype1 = celltype1;
    this->client = client1;
}

string RemotePlayer::getName() const {
    return this->name;
}

celltype RemotePlayer::getCellType() const {
    return this->celltype1;
}

Point RemotePlayer::chooseCell(vector<Point> *options, StandartLogic *logic) const {
    PrintConsole printer;
    printer.waitingForMoveOfRival();
    Point p = this->client->getRivalMove();
    if (p == Point(-1,-1)) {
        return Point(-3,-3);
    } else {
        return p;
    }
}

void RemotePlayer::noMove() {
    PrintConsole printer;
    printer.NoPossibleMovesToRival();
}

bool RemotePlayer::trueIfRemote() {
    return true;
}
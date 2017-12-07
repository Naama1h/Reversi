//
// Created by naama on 12/6/17.
//

#include "RemotePlayer.h"
#include "Board.h"

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
    return this->client->getRivalMove();
}
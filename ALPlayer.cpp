//
// Created by naama on 11/23/17.
//

#include "ALPlayer.h"
#include "BoardConsole.h"
#include "StandartLogic.h"

ALPlayer::ALPlayer(string name, celltype celltype1) {
    this->name = name;
    this->celltype1 = celltype1;
}


Point ALPlayer::chooseCell(vector<Point> *options, StandartLogic* logic) const {
    int maxCounter = 0, minCounter = 0;
    Point move;
    for (int i = 0; i < options->size(); i++) {
        StandartLogic logic1 = *logic;
        logic1.updateBoard(celltype(this->getCellType()), options->at(i));
        vector<Point>* vec;
        celltype other = Empty;
        if (this->celltype1 == Black) {
            other = White;
        } else if (this->celltype1 == White) {
            other = Black;
        }
        vec = logic1.findCells(other);
        for (int j = 0; j < vec->size(); j++) {
            StandartLogic logic2 = logic1;
            logic2.updateBoard(celltype(other), options->at(i));
            if ((logic2.getBoard()->getXCounter() - logic2.getBoard()->getOCounter())
                > maxCounter && other == Black) {
                maxCounter = logic2.getBoard()->getXCounter() - logic2.getBoard()->getOCounter();
            } else if ((logic2.getBoard()->getOCounter() - logic2.getBoard()->getXCounter())
                       > maxCounter && other == White) {
                maxCounter = logic2.getBoard()->getOCounter() - logic2.getBoard()->getXCounter();
            }
//            delete logic2;
        }
        delete vec;
        if (minCounter == 0) {
            minCounter = maxCounter;
            move = options->at(i);
        } else if (maxCounter < minCounter) {
            minCounter = maxCounter;
            move = options->at(i);
        }
//        delete logic1;
    }
    return move;
}

celltype ALPlayer::getCellType() const {
    return this->celltype1;
}

string ALPlayer::getName() const {
    return this->name;
}

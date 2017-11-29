/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#include "AIPlayer.h"
#include "BoardConsole.h"
#include "StandartLogic.h"

AIPlayer::AIPlayer(string name, celltype celltype1) {
    this->name = name;
    this->celltype1 = celltype1;
}


Point AIPlayer::chooseCell(vector<Point> *options, StandartLogic* logic) const {
    int maxCounter = 0, minCounter = 0;
    Point move;
    for (int i = 0; i < options->size(); i++) {
        BoardConsole* b = new BoardConsole(logic->getBoard()->getSize());
        b->setXCounter(logic->getBoard()->getXCounter());
        b->setOCounter(logic->getBoard()->getOCounter());
        StandartLogic* logic1 = new StandartLogic(b);
        for (int k = 0; k < logic->getBoard()->getSize(); k++) {
            for (int j = 0; j < logic->getBoard()->getSize(); j++) {
                logic1->getBoard()->getBoard()[k][j] = logic->getBoard()->getBoard()[k][j];
            }
        }
        logic1->updateBoard(celltype(this->getCellType()), options->at(i));
        vector<Point>* vec;
        celltype other = Empty;
        if (this->celltype1 == Black) {
            other = White;
        } else if (this->celltype1 == White) {
            other = Black;
        }
        vec = logic1->findCells(other);
        for (int j = 0; j < vec->size(); j++) {
            BoardConsole* b2 = new BoardConsole(logic1->getBoard()->getSize());
            b2->setXCounter(logic1->getBoard()->getXCounter());
            b2->setOCounter(logic1->getBoard()->getOCounter());
            StandartLogic* logic2 = new StandartLogic(b2);
            for (int k = 0; k < logic1->getBoard()->getSize(); k++) {
                for (int m = 0; m < logic1->getBoard()->getSize(); m++) {
                    logic2->getBoard()->getBoard()[k][m] = logic1->getBoard()->getBoard()[k][m];
                }
            }
            logic2->updateBoard(celltype(other), vec->at(j));
            if ((logic2->getBoard()->getXCounter() - logic2->getBoard()->getOCounter())
                > maxCounter && other == Black) {
                maxCounter = logic2->getBoard()->getXCounter() - logic2->getBoard()->getOCounter();
            } else if ((logic2->getBoard()->getOCounter() - logic2->getBoard()->getXCounter())
                       > maxCounter && other == White) {
                maxCounter = logic2->getBoard()->getOCounter() - logic2->getBoard()->getXCounter();
            }
            delete logic2;
            delete b2;
        }
        delete vec;
        delete logic1;
        delete b;
        if (minCounter == 0) {
            minCounter = maxCounter;
            move = options->at(i);
        } else if (maxCounter < minCounter) {
            minCounter = maxCounter;
            move = options->at(i);
        }
    }
    return move;
}

celltype AIPlayer::getCellType() const {
    return this->celltype1;
}

string AIPlayer::getName() const {
    return this->name;
}

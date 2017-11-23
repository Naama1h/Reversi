/*
 * Naama Harshoshanim
 * 315783217
 * 4/11/17
 */

#include "StandartLogic.h"
StandartLogic::StandartLogic(Board* board) {
    this->board1 = board;
}

StandartLogic::~StandartLogic() {

}

vector<Point>* StandartLogic::findCells(celltype c) {
    vector<Point>* vector1 = new vector<Point>();
    for (int i = 0; i < this->board1->getSize(); i++) {
        for (int j = 0; j < this->board1->getSize(); j++) {
            Point p(i+1, j+1);
            if (this->board1->getBoard()[i][j] == Empty) {
                if (this->ifCellAnOption(p, 1, 1, c)) {
                    vector1->push_back(p);
                } else if (this->ifCellAnOption(p, 1, 0, c)) {
                    vector1->push_back(p);
                } else if (this->ifCellAnOption(p, 1, -1, c)) {
                    vector1->push_back(p);
                } else if (this->ifCellAnOption(p, -1, 1, c)) {
                    vector1->push_back(p);
                } else if (this->ifCellAnOption(p, -1, 0, c)) {
                    vector1->push_back(p);
                } else if (this->ifCellAnOption(p, -1, -1, c)) {
                    vector1->push_back(p);
                } else if (this->ifCellAnOption(p, 0, 1, c)) {
                    vector1->push_back(p);
                } else if (this->ifCellAnOption(p, 0, -1, c)) {
                    vector1->push_back(p);
                }
            }
        }
    }
    return vector1;
}

bool StandartLogic::ifCellAnOption(Point p, int rowDelta, int columnDelta, celltype c) const {
    int currentRow = p.getX() - 1 + rowDelta;
    int currentColumn = p.getY() - 1 + columnDelta;
    if ((currentColumn >= 0) && (currentRow >= 0) &&
            (currentColumn < this->board1->getSize()) &&
            (currentRow < this->board1->getSize())) {
        while (this->board1->getBoard()[currentRow][currentColumn] != c &&
               this->board1->getBoard()[currentRow][currentColumn] != Empty &&
                currentColumn < this->board1->getSize() &&
                currentRow < this->board1->getSize() &&
                currentColumn >= 0 &&
                currentRow >= 0) {
            currentColumn = currentColumn + columnDelta;
            currentRow = currentRow + rowDelta;
            if (currentColumn < this->board1->getSize() &&
                currentRow < this->board1->getSize() &&
                currentColumn >= 0 &&
                currentRow >= 0) {
                if (this->board1->getBoard()[currentRow][currentColumn] == c) {
                    return true;
                }
            } else {
                break;
            }
        }
    }
    return false;
}

bool StandartLogic::ifCellValid(Point p, vector<Point>* vec) {
    bool ifValid = false;
    if (!p.getX() || !p.getY()) {
        return false;
    }
    for (int i = 0; i < vec->size(); i++) {
        if ((p.getX() == vec->at(i).getX()) &&
            (p.getY() == vec->at(i).getY())) {
            ifValid = true;
            break;
        }
    }
    return ifValid;
}

void StandartLogic::updateBoard(celltype celltype, Point p) {
    if (this->checkCells(p, 1, 0, celltype)) {
        this->makeMove(p, 1, 0, celltype);
    }
    if (this->checkCells(p, 1, 1, celltype)) {
        this->makeMove(p, 1, 1, celltype);
    }
    if (this->checkCells(p, 1, -1, celltype)) {
        this->makeMove(p, 1, -1, celltype);
    }
    if (this->checkCells(p, -1, 0, celltype)) {
        this->makeMove(p, -1, 0, celltype);
    }
    if (this->checkCells(p, -1, 1, celltype)) {
        this->makeMove(p, -1, 1, celltype);
    }
    if (this->checkCells(p, -1, -1, celltype)) {
        this->makeMove(p, -1, -1, celltype);
    }
    if (this->checkCells(p, 0, 1, celltype)) {
        this->makeMove(p, 0, 1, celltype);
    }
    if (this->checkCells(p, 0, -1, celltype)) {
        this->makeMove(p, 0, -1, celltype);
    }
}

bool StandartLogic::checkCells(Point p, int rowDelta, int coulmnDelta, celltype c) const {
    int currentRow = p.getX() - 1 + rowDelta, currentColunm = p.getY() - 1 + coulmnDelta;
    if (currentColunm >= 0 && currentRow >= 0 &&
        currentColunm < this->board1->getSize() &&
        currentRow < this->board1->getSize()) {
        while (this->board1->getBoard()[currentRow][currentColunm] != c &&
               this->board1->getBoard()[currentRow][currentColunm] != Empty &&
               currentColunm < this->board1->getSize() &&
               currentRow < this->board1->getSize() &&
               currentColunm >= 0 &&
               currentRow >= 0) {
            currentColunm = currentColunm + coulmnDelta;
            currentRow = currentRow + rowDelta;
            if (currentColunm < this->board1->getSize() &&
                currentRow < this->board1->getSize() &&
                currentColunm >= 0 &&
                currentRow >= 0) {
                if (this->board1->getBoard()[currentRow][currentColunm] == c) {
                    return true;
                }
            } else {
                break;
            }
        }
    }
    return false;
}



void StandartLogic::makeMove(Point p, int rowDelta, int columnDelta, celltype c) {
    this->board1->getBoard()[p.getX() - 1][p.getY() - 1] = c;
    int currentRow = p.getX() - 1 + rowDelta, currentColunm = p.getY() - 1 + columnDelta;
    while (this->board1->getBoard()[currentRow][currentColunm] != c &&
           this->board1->getBoard()[currentRow][currentColunm] != Empty &&
           currentColunm < this->board1->getSize() &&
           currentRow < this->board1->getSize() &&
           currentColunm >= 0 &&
           currentRow >= 0) {
        this->board1->getBoard()[currentRow][currentColunm] = c;
        currentColunm = currentColunm + columnDelta;
        currentRow = currentRow + rowDelta;
        if (currentColunm > this->board1->getSize() &&
            currentRow > this->board1->getSize() &&
            currentColunm < 0 &&
            currentRow < 0) {
            break;
        }
    }
}


vector<Point>* StandartLogic::getOptionalCells() const {
    return this->optionalCells;
}

bool StandartLogic::ifHaveMoreMoves() const {
    if (this->optionalCells->size() == 0) {
        return false;
    }
    return true;
}
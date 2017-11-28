#include "BoardConsole.h"
#include <iostream>
/*
 * Naama Harshoshanim
 * 315783217
 * 4/11/17
 */
BoardConsole::BoardConsole(const BoardConsole &oldBoardConsole) {
    this->size = oldBoardConsole.size;
    this->board = new celltype*[this->size];
    for (int i=0; i<size; i++) {
        this->board[i] = new celltype[this->size];
    }
    for (int i=0; i<this->size; i++) {
        for (int j=0; j<this->size; j++) {
            this->board[i][j] = oldBoardConsole.getBoard()[i][j];
        }
    }
    this->oCounter = oldBoardConsole.getOCounter();
    this->xCounter = oldBoardConsole.getXCounter();
}

BoardConsole::BoardConsole(int size) {
    this->size = size;
    this->board = new celltype*[size];
    for (int i=0; i<size; i++) {
        this->board[i] = new celltype[size];
    }
    for (int i=0; i<size; i++) {
        for (int j=0; j<size; j++) {
            this->board[i][j] = Empty;
        }
    }
    this->board[(size/2)-1][(size/2)-1] = White;
    this->board[size/2][size/2] = White;
    this->board[(size/2)-1][size/2] = Black;
    this->board[size/2][(size/2)-1] = Black;
    this->oCounter = 2;
    this->xCounter = 2;
}

BoardConsole::BoardConsole() {
    this->size = 8;
    this->board = new celltype*[this->size];
    for (int i=0; i<this->size; i++) {
        this->board[i] = new celltype[this->size];
    }
    for (int i=0; i<this->size; i++) {
        for (int j=0; j<this->size; j++) {
            this->board[i][j] = Empty;
        }
    }
    this->board[(this->size/2)-1][(this->size/2)-1] = White;
    this->board[this->size/2][this->size/2] = White;
    this->board[(this->size/2)-1][this->size/2] = Black;
    this->board[this->size/2][(this->size/2)-1] = Black;
    this->oCounter = 2;
    this->xCounter = 2;
}

BoardConsole::~BoardConsole() {
    for (int i=0; i<this->size; i++) {
        delete[] this->board[i];
    }
    delete[] this->board;
}

void BoardConsole::printBoard() const {
    cout << " |";
    for (int i=1; i<size+1; i++) {
        cout << " "<< i << " |";
    }
    cout << endl;
    for (int i=0; i<(size*4)+2; i++) {
        cout << "-";
    }
    cout << endl;
    for (int i=0; i<size; i++) {
        cout << i+1 << "|";
        for (int j=0; j<size; j++) {
            string var;
            switch(board[i][j]) {
                case Black:
                    var = "X";
                    break;
                case White:
                    var = "O";
                    break;
                default:
                    var = " ";
                    break;
            }
            cout << " " << var << " |";
        }
        cout << endl;
        for (int i=0; i<(size*4)+2; i++) {
            cout << "-";
        }
        cout << endl;
    }
}

bool BoardConsole::ifFull() const {
    bool empty = false;
    for (int i = 0; i < this->size; i++) {
        for (int j = 0; j < this->size; j++) {
            if (this->board[i][j] == Empty) {
                empty = true;
            }
        }
    }
    return !empty;
}

celltype BoardConsole::whoWins() const {
    /*
    int blackC = 0, whiteC = 0;
    for (int i = 0; i < this->size; i++) {
        for (int j = 0; j < this->size; j++) {
            if (this->board[i][j] == White) {
                whiteC++;
            } else if (this->board[i][j] == Black) {
                blackC++;
            }
        }
    }
    if (blackC > whiteC) {
        return Black;

    } else if (whiteC > blackC) {
        return White;
    }
    return Empty;
     */
    if (this->xCounter > this->oCounter) {
        return Black;
    } else if (this->oCounter > this->xCounter) {
        return White;
    }
    return Empty;
}

celltype** BoardConsole::getBoard() const {
    return this->board;
}

int BoardConsole::getSize() const {
    return this->size;
}

int BoardConsole::getXCounter() const {
    return this->xCounter;
}

int BoardConsole::getOCounter() const {
    return this->oCounter;
}

void BoardConsole::setXCounter(int x) {
    this->xCounter = x;
}

void BoardConsole::setOCounter(int o) {
    this->oCounter = o;
}

void BoardConsole::setSize(int size) {
    this->size = size;
}
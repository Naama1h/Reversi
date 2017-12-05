/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#include "BoardConsole.h"
#include <iostream>
using namespace std;

BoardConsole::BoardConsole(int size) {
    this->size = size;
    this->board = new celltype*[size];
    for (int i=0; i < size; i++) {
        this->board[i] = new celltype[size];
    }
    for (int i=0; i < size; i++) {
        for (int j=0; j < size; j++) {
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

BoardConsole::~BoardConsole() {
    for (int i=0; i < this->size; i++) {
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
        for (int j=0; j<(size*4)+2; j++) {
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

bool BoardConsole:: operator ==(const BoardConsole &b) const {
    bool check = true;
    if(this->getSize() == b.getSize() && this->oCounter == b.getOCounter()
       && this->xCounter == b.getXCounter()) {
        for(int i = 0; i < this->getSize(); i++) {
            for(int j = 0; j < this->getSize(); j++) {
                if(this->board[i][j] != b.getBoard()[i][j]) {
                    check = false;
                    break;
                }
            }
        }
    } else {
        return false;
    }
    return check;
}
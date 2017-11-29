//
// Created by tchelet on 29/11/17.
//

#include "PrintConsole.h"
#include <iostream>

void PrintConsole::counter(celltype celltype1 ,int counter1) {
    if(celltype1 == White) {
        cout << "O has " << counter1 << " points" << endl;
    } else if(celltype1 == Black) {
        cout << "X has " << counter1 << " points" << endl;
    }
}

void PrintConsole::NoPossibleMoves() {
    cout << "No possible moves. Play passes back to the other player. Press any key to continue." << endl;
}

void PrintConsole::wasMoves(Player* player, Point p) {
    cout << player->getName() << " played (" << p.getX() << "," << p.getY() << ")" << endl << endl;
}

void PrintConsole::cantChooseThisCell() {
    cout << "cant choose this cell" << endl;
}

void PrintConsole::winner(Board* b, Player* player1, Player* player2) {
    if ((b->whoWins() == Black && player1->getCellType() == Black) ||
        (b->whoWins() == White && player1->getCellType() == White)) {
        cout << player1->getName() << " wins!" << endl;
    } else if ((b->whoWins() == Black && player2->getCellType() == Black) ||
               (b->whoWins() == White && player2->getCellType() == White)){
        cout << player2->getName() << " wins!" << endl;
    } else {
        cout << "its a tie!" << endl;
    }
}

void PrintConsole::itsYourMove(string playerName) {
    cout << playerName << ": its your move." << endl;
}

void PrintConsole::possibleMoves(vector<Point>* options) {
    cout << "Your possible moves: ";
    for (int i = 0; i < options->size(); i++) {
        cout << "(" << options->at(i).getX() << ","
             << options->at(i).getY() << ") ";
    }
    cout << endl << endl;
}

void PrintConsole::enterMove() {
    cout << "Please enter your move row col:" << endl;
}

void PrintConsole::onlyNumbers() {
    cout << "Please enter numbers only." << endl;
}
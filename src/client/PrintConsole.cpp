/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#include "PrintConsole.h"
using namespace std;

void PrintConsole::counter(celltype celltype1 ,int counter1) const {
    if(celltype1 == White) {
        cout << "O has " << counter1 << " points" << endl;
    } else if(celltype1 == Black) {
        cout << "X has " << counter1 << " points" << endl;
    }
}

void PrintConsole::NoPossibleMoves() const {
    cout << "No possible moves. Play passes back to the other player. enter 'NoMove' to continue" << endl;
}

void PrintConsole::wasMoves(Player* player, Point p) const {
    cout << player->getName() << " played (" << p.getX() << "," << p.getY() << ")" << endl << endl;
}

void PrintConsole::cantChooseThisCell() const {
    cout << "cant choose this cell" << endl;
}

void PrintConsole::winner(Board* b, Player* player1, Player* player2) const {
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

void PrintConsole::itsYourMove(string playerName) const {
    cout << playerName << ": its your move." << endl;
}

void PrintConsole::possibleMoves(vector<Point>* options) const {
    cout << "Your possible moves: ";
    for(int i = 0; i < options->size(); i++) {
        cout << "(" << options->at(i).getX() << ","
             << options->at(i).getY() << ") ";
    }
    cout << endl << endl;
}

void PrintConsole::enterMove() const {
    cout << "Please enter your move row,col:" << endl;
}

void PrintConsole::onlyNumbers() const {
    cout << "Please enter numbers only." << endl;
}

void PrintConsole::waitingForRival() const {
    cout << "waiting for other player to join.." << endl;
}

void PrintConsole::waitingForMoveOfRival() const {
    cout << "waiting for other player's move" << endl;
}

void PrintConsole::enterEnd() const {
    cout << "the game is over, please enter 'End' to exit" << endl;
}

void PrintConsole::NoPossibleMovesToRival() const {
    cout << "your rival didn't have any move" << endl;
}

void PrintConsole::listGame() const{
    cout << "list of games:" << endl;
}

void PrintConsole::nameOfGame(string name) const{
    cout << name << endl;
}
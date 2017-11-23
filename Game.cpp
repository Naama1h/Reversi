/*
 * Naama Harshoshanim
 * 315783217
 * 4/11/17
 */
#include "Game.h"

Game::Game(Board* board, Logic* logic, Player* p1, Player* p2) {
    this->logic = logic;
    this->board = board;
    this->player1 = p1;
    this->player2 = p2;
}

Game::~Game() {
    delete this->player2;
    delete this->player1;
    delete this->board;
    delete this->logic;
}

void Game::run() {
     int playerTrace = 1, ifHaveMove = 0;
     bool ifValid;
     Player* player;
    this->board->printBoard();
    while (!this->board->ifFull() && ifHaveMove != 2) {
        ifValid = false;
        if (playerTrace%2 == 1) {
            player = player1;
        } else {
            player = player2;
        }
        playerTrace++;
        vector<Point>* vec;
        vec = this->logic->findCells(player->getCellType());
        if (vec->size() != 0) {
            ifHaveMove = 0;
            while (!ifValid) {
                Point p = player->chooseCell(vec, (StandartLogic*)this->logic);
                ifValid = this->logic->ifCellValid(p, vec);
                if (ifValid) {
                    this->logic->updateBoard(celltype(player->getCellType()), p);
                    this->board->printBoard();
                    cout << player->getName() << " played (" << p.getX() << "," << p.getY() << ")" << endl << endl;
                } else {
                    cout << "cant choose this cell" << endl;
                }
            }
        } else {
            cout << player->getName() << ": its your move." << endl;
            cout << "No possible moves. Play passes back to the other player. Press any key to continue." << endl;
            ifHaveMove++;
            string in;
            cin >> in;
        }
        delete vec;
    }
    this->board->printBoard();
    if ((this->board->whoWins() == Black && this->player1->getCellType() == Black) ||
        (this->board->whoWins() == White && this->player1->getCellType() == White)) {
        cout << this->player1->getName() << " wins!" << endl;
    } else if ((this->board->whoWins() == Black && this->player2->getCellType() == Black) ||
               (this->board->whoWins() == White && this->player2->getCellType() == White)){
        cout << this->player2->getName() << " wins!" << endl;
    } else {
        cout << "its a tie!" << endl;
    }
}
/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */
#include <cstring>
#include "Game.h"
#include "PrintConsole.h"

Game::Game(Board* board, Logic* logic, Player* p1, Player* p2) {
    this->logic = logic;
    this->board = board;
    if (p1->getCellType() == Black) {
        this->player1 = p1;
        this->player2 = p2;
    } else {
        this->player1 = p2;
        this->player2 = p1;
    }
}

Game::~Game() {
    delete this->player2;
    delete this->player1;
    delete this->board;
    delete this->logic;
}

void Game::run() {
    int playerTrace = 1, ifHaveMove = 0;
    PrintConsole printer;
    bool ifValid;
    Player* player;
    this->board->printBoard();
    cout << endl;
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
                if(p == Point(-2,-2)) {
                    printer.NoPossibleMovesToRival();
                } else if(p == Point(-1,-1)) {
                    ifHaveMove = 2;
                    player->sendMove(p);
                    break;
                } else if(p == Point(-3,-3)) {
                    char in[3] = "";
                    do {
                        printer.enterEnd();
                        cin >> in;
                    } while (strcmp(in,"End") != 0);
                    player->sendMove(Point(-1,-1));
                    ifHaveMove = 2;
                    break;
                }
                ifValid = this->logic->ifCellValid(p, vec);
                if (ifValid) {
                    player->sendMove(p);
                    this->logic->updateBoard(celltype(player->getCellType()), p);
                    this->board->printBoard();
                    printer.wasMoves(player,p);
                } else {
                    printer.cantChooseThisCell();
                }
            }
        } else {
            player->noMove();
            ifHaveMove++;
        }
        delete vec;
    }
    if (player->trueIfRemote()) {
        char in[3] = "";
        do {
            printer.enterEnd();
            cin >> in;
        } while (strcmp(in,"End") != 0);
        player->sendMove(Point(-1,-1));
    }
    this->board->printBoard();
    printer.counter(White, this->board->getOCounter());
    printer.counter(Black, this->board->getXCounter());
    printer.winner(board, player1, player2);
}
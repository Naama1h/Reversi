/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */
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
                cout << "in the loop" << endl;
                Point p = player->chooseCell(vec, (StandartLogic*)this->logic);
                if(p == Point(-1,-1)) {
                    printer.itsYourMove(player->getName());
                    printer.NoPossibleMoves();
                    ifHaveMove++;
                    string in;
                    cin >> in;
                } else if(p == Point(-2,-2)) {
                    ifHaveMove = 2;
                    break;
                }
                ifValid = this->logic->ifCellValid(p, vec);
                if (ifValid) {
                    this->logic->updateBoard(celltype(player->getCellType()), p);
                    this->board->printBoard();
                    printer.wasMoves(player,p);
                    printer.counter(White, this->board->getOCounter());
                    printer.counter(Black, this->board->getXCounter());
                } else {
                    printer.cantChooseThisCell();
                }
            }
        } else {
            printer.itsYourMove(player->getName());
            printer.NoPossibleMoves();
            ifHaveMove++;
            string in;
            cin >> in;
        }
        delete vec;
    }
    this->board->printBoard();
    printer.counter(White, this->board->getOCounter());
    printer.counter(Black, this->board->getXCounter());
    printer.winner(board, player1, player2);
}
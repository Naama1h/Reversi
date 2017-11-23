#include <iostream>
#include "BoardConsole.h"
#include "PersonP.h"
#include "StandartLogic.h"
#include "Logic.h"
#include "Game.h"
#include "Board.h"

/*
 * Naama Harshoshanim
 * 315783217
 * 4/11/17
 */
int main() {
    Board* board = new BoardConsole(8);
    PersonP* personP1 = new PersonP("X" ,Black);
    PersonP* personP2 = new PersonP("O" ,White);
    Logic* standartLogic = new StandartLogic(board);
    Game game(board, standartLogic, personP1, personP2);
    game.run();
    return 0;
}
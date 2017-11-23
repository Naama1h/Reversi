#include <iostream>
#include "BoardConsole.h"
#include "PersonP.h"
#include "StandartLogic.h"
#include "Logic.h"
#include "Game.h"
#include "Board.h"
#include "ALPlayer.h"

/*
 * Naama Harshoshanim
 * 315783217
 * 4/11/17
 */
int main() {
    std::cout << "please choose rival: 1 for human player, 2 for AL player" << endl;
    int chosen;
    Player* rival;
    std::cin >> chosen;
    if (chosen == 1) {
        rival = new PersonP("O" ,White);
    } else {
        rival = new ALPlayer("O", White);
    }
    Board* board = new BoardConsole(8);
    PersonP* personP1 = new PersonP("X" ,Black);
    Logic* standartLogic = new StandartLogic(board);
    Game game(board, standartLogic, personP1, rival);
    game.run();
    return 0;
}
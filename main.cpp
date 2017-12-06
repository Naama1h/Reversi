/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#include <iostream>
#include "BoardConsole.h"
#include "PersonP.h"
#include "Game.h"
#include "AIPlayer.h"
#include "RemotePlayer.h"
#include "Client.h"

int main() {
    std::cout << "Choose an opponent type:" << endl
              << "1. a human local player" << endl
            << "2. an AI player" << endl
            << "3. a remote player" << endl;
    int chosen;
    Player* rival;
    Player* myPlayer;
    std::cin >> chosen;
    if (chosen == 1) {
        rival = new PersonP("O" ,White);
        myPlayer = new PersonP("X" ,Black);
    } else if (chosen == 2) {
        myPlayer = new PersonP("X" ,Black);
        rival = new AIPlayer("O", White);
    } else {
//        Client* client = new Client("2132",1233);
//        rival = new RemotePlayer("O", White, client);
    }
    Board* board = new BoardConsole(4);
//    PersonP* personP1 = new PersonP("X" ,Black);
    Logic* standartLogic = new StandartLogic(board);
    Game* game = new Game(board, standartLogic, myPlayer, rival);
    game->run();
    delete game;
    return 0;
}
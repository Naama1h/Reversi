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
#include "PersonPServer.h"
#include <unistd.h>
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
        Client* client = new Client("127.0.0.1",8000);
        client->connectToServer();
        char type[2];
//        strcpy(type, client->getCellType());
        type[0] = client->getCellType();
        if (strcmp(type, "1") == 0) {
            myPlayer = new PersonPServer("X", Black, client);
            rival = new RemotePlayer("O", White, client);
        } else {
            myPlayer = new PersonPServer("O", White, client);
            rival = new RemotePlayer("X", Black, client);
        }
    }
    Board* board = new BoardConsole(4);
    Logic* standartLogic = new StandartLogic(board);
    Game* game = new Game(board, standartLogic, myPlayer, rival);
    game->run();
    delete game;
    return 0;
}
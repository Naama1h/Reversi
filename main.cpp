/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#include <fstream>
#include <iostream>
#include "BoardConsole.h"
#include "PersonP.h"
#include "Game.h"
#include "AIPlayer.h"
#include "RemotePlayer.h"
#include "PersonPServer.h"
#include <unistd.h>
#include "Client.h"
#include "Menu.h"
#include "MenuConsole.h"

int main() {
    MenuConsole menu(3);
    menu.print();
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
        char ip[10];
        int port;
        ifstream inFile;
        inFile.open("definition.txt");
        inFile >> port;
        inFile >> ip;
        ip[9] = '\n';
        inFile.close();
        Client client(ip,port);
        client.connectToServer();
        char type[1];
        type[0] = client.getCellType();
        if (type[0] == '1') {
            myPlayer = new PersonPServer("X", Black, &client);
            rival = new RemotePlayer("O", White, &client);
        } else {
            myPlayer = new PersonPServer("O", White, &client);
            rival = new RemotePlayer("X", Black, &client);
        }
    }
    Board* board = new BoardConsole(4);
    Logic* standartLogic = new StandartLogic(board);
    Game* game = new Game(board, standartLogic, myPlayer, rival);
    game->run();
    delete game;
    return 0;
}
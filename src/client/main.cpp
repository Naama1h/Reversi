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
#include "MenuConsole.h"
#include <unistd.h>

int main() {
    MenuConsole menu(3);
    menu.print();
    int chosen;
    Player* rival;
    Player* myPlayer;
    std::cin >> chosen;
    PrintMassage* p = new PrintConsole();
    if (chosen == 1) {
        rival = new PersonP("O" ,White);
        myPlayer = new PersonP("X" ,Black);
        Board* board = new BoardConsole();
        Logic* standartLogic = new StandartLogic(board);
        Game* game = new Game(board, standartLogic, myPlayer, rival);
        game->run();
        delete game;
    } else if (chosen == 2) {
        myPlayer = new PersonP("X" ,Black);
        rival = new AIPlayer("O", White);
        Board* board = new BoardConsole();
        Logic* standartLogic = new StandartLogic(board);
        Game* game = new Game(board, standartLogic, myPlayer, rival);
        game->run();
        delete game;
    } else {
        char ip[10];
        int port;
        ifstream inFile;
        inFile.open("definitionClient.txt");
        inFile >> port;
        inFile >> ip;
        ip[9] = '\n';
        inFile.close();
        Client client(ip,port);
        char tmp1[10] = "";
        char tmp2[10] = "";
        char* command[3];
        command[0] = tmp1;
        bool serverConnection = true;
        while (serverConnection) {
            serverConnection = client.connectToServer();
            if(!serverConnection) {
                break;
            }
            p->optionOfCommand();
            command[0] = tmp1;
            command[1] = tmp2;
            cin >> command[0];
            if (strcmp(command[0], "list_games") != 0) {
                cin >> command[1];
            }
            if (strcmp(command[0],"play") == 0) {
                cin >> command[2];
            }
            if (strcmp(command[0],"start") == 0) {
                p->waitingForRival();
            }
            client.sendCommand((char**)command);
            if (strcmp(command[0],"list_games") == 0) { // list_games
                try {
                    client.readListOfGames();
                } catch (const char *msg) {
                    break;
                }
            } else if (strcmp(command[0],"join") == 0 || strcmp(command[0],"start") == 0) { // join
                char type[1];
                type[0] = client.getCellType();
                if (type[0] == '1') {
                    myPlayer = new PersonPServer("X", Black, &client);
                    rival = new RemotePlayer("O", White, &client);
                    client.waitOtherPlayer();
                } else if (type[0] == '2'){
                    myPlayer = new PersonPServer("O", White, &client);
                    rival = new RemotePlayer("X", Black, &client);
                } else if (type[0] == 'n') {
                    p->cantChooseThisGame();
                    continue;
                } else {
                    break;
                }
                Board* board = new BoardConsole(4);
                Logic* standartLogic = new StandartLogic(board);
                Game* game = new Game(board, standartLogic, myPlayer, rival);
                game->run();
                delete game;
            }
        }
    }
    delete p;
    return 0;
}
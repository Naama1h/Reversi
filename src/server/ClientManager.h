/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#ifndef CLIENTMANAGER_H
#define CLIENTMANAGER_H

#include <map>
#include "string"
#include "PlayCommand.h"
#include "JoinCommand.h"
#include "ListGamesCommand.h"
#include "CloseCommand.h"
#include "StartCommand.h"
#include "vector"
#include "vector"
#include "Command.h"
using namespace std;


class ClientManager {
public:
    ClientManager();
    ~ClientManager();
    void executeCommand(string command, char* arg);
    void setClientSocket(int socket);
private:
    int clientSocket;
    map<string, Command*> commandsMap;
    vector<char*>* gamesNames;
};


#endif //CLIENTMANAGER_H

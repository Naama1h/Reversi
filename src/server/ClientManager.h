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
#include <vector>
#include "Command.h"
#include "GameMembers.h"
using namespace std;
/**
struct game {
    char* name;
    int socket1;
    int socket2;
};
*/

class ClientManager {
public:
    ClientManager();
    ~ClientManager();
    void executeCommand(string command, char* arg);
    void setClientSocket(int socket);
    void readCommand();
private:
    int* clientSocket;
    map<string, Command*> commandsMap;
    vector<GameMembers*>* games;
};


#endif //CLIENTMANAGER_H

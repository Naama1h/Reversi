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
#include "JoinCommand.h"
#include "ListGamesCommand.h"
#include "StartCommand.h"
#include <vector>
#include "Command.h"
#include "GameMembers.h"
#include "ThreadPool.h"
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
    /**
     * constructor.
     */
    ClientManager();
    /**
     * destructor.
     */
    ~ClientManager();
    /**
     * execute the commands.
     * @param command string
     * @param arg char*
     * @param socket int
     */
    void executeCommand(string command, char* arg, int socket);
    /**
     * set the client socket.
     * @param socket int
     */
    void setClientSocket(int socket);
    /**
     * read command.
     * @param socket int
     */
    void readCommand(int socket);
private:
    // members
    int* clientSocket;
    map<string, Command*> commandsMap;
    vector<GameMembers*>* games;
//    ThreadPool* threadPool;
};


#endif //CLIENTMANAGER_H

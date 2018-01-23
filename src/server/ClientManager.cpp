/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#include "ClientManager.h"

ClientManager::ClientManager() {
    this->games = new vector<GameMembers*>();
    int i = 0;
    this->clientSocket = &i;
    this->commandsMap["list_games"] = new ListGamesCommand();
    this->commandsMap["join"] = new JoinCommand();
    this->commandsMap["start"] = new StartCommand();
}

ClientManager::~ClientManager() {
    if (!this->games->empty()) {
        for (int i = 0; i < this->games->size(); i++) {
            if(this->games->at(i)->getSocket1() != 0) {
                write(this->games->at(i)->getSocket1(),"End",sizeof("End"));
                close(this->games->at(i)->getSocket1());
            }
            if(this->games->at(i)->getSocket2() != 0) {
                write(this->games->at(i)->getSocket2(),"End",sizeof("End"));
                close(this->games->at(i)->getSocket2());
            }
        }
    }
    delete this->games;
}

void ClientManager::executeCommand(string command, char* arg, int socket) {
    Command* commandObj = this->commandsMap[command];
    if (commandObj != NULL) {
        commandObj->execute(arg, &socket, *games);
    }
}

void ClientManager::setClientSocket(int socket) {
    this->clientSocket = &socket;
}

void ClientManager::readCommand(int socket) {
    char input[200] = "";
    char command[10] = "";
    char arg[190] = "";
    ssize_t n = read(socket, &input, sizeof(input));
    if (n == -1) {
        cout << "Error reading" << endl;
        return;
    }
    if (n == 0) {
        cout << "Client disconnected" << endl;
        return;
    }
    int i = 0;
    while (input[i] != '\0') {
        command[i] = input[i];
        i++;
    }
    while (input[i] == '\0') {
        i++;
    }
    int j = 0;
    while (input[i] != '\0') {
        arg[j] = input[i];
        i++;
        j++;
    }
    this->executeCommand(command, arg, socket);
}
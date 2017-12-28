/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#include "ClientManager.h"

ClientManager::ClientManager() {
//    this->games = new vector<GameMembers*>();
    this->games = new vector<GameMembers*>();
    int i = 0;
    this->clientSocket = &i;
    this->commandsMap["play"] = new PlayCommand();
    this->commandsMap["list_games"] = new ListGamesCommand();
    this->commandsMap["join"] = new JoinCommand();
    this->commandsMap["start"] = new StartCommand();
    this->commandsMap["close"] = new CloseCommand();
}

ClientManager::~ClientManager() {
    map<string, Command*>::iterator it;
    for (it = this->commandsMap.begin(); it != this->commandsMap.end(); it++) {
        delete it->second;
    }
    delete this->games;
}

void ClientManager::executeCommand(string command, char* arg) {
    Command* commandObj = this->commandsMap[command];
    commandObj->execute(arg, this->clientSocket, *games);
}

void ClientManager::setClientSocket(int socket) {
    this->clientSocket = &socket;
}

void ClientManager::readCommand() {
    char input[200] = "";
    char command[10] = "";
    char arg[190] = ""; // magic number!!!!!
    ssize_t n = read(*this->clientSocket, &input, sizeof(input));
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
    this->executeCommand(command, arg);
}
/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#include "ClientManager.h"

ClientManager::ClientManager() {
    this->commandsMap["play"] = new PlayCommand(this->clientSocket);
    this->commandsMap["list_games"] = new ListGamesCommand(this->clientSocket,this->games);
    this->commandsMap["join"] = new JoinCommand(this->clientSocket, this->games);
    this->commandsMap["start"] = new StartCommand(this->clientSocket,this->games);
    this->commandsMap["close"] = new CloseCommand(this->clientSocket, this->games);
    this->games = new vector<GameMembers*>();
}

ClientManager::~ClientManager() {
    map<string, Command*>::iterator it;
    for (it = this->commandsMap.begin(); it != this->commandsMap.end(); it++) {
        delete it->second;
    }
    delete this->games;
}

void ClientManager::executeCommand(string command, char* arg) {
    Command *commandObj = this->commandsMap[command];
    commandObj->execute(arg);
}

void ClientManager::setClientSocket(int socket) {
    this->clientSocket = socket;
}

void ClientManager::readCommand() {
    char input[200] = "";  // magic number!!!!!!
    ssize_t n = read(this->clientSocket, &input, sizeof(input));
    char command[10] = "";
    char arg[190] = ""; // magic number!!!!!
    char space = ' ';
    int i = 0;
    while ((input[i] != space) && (input[i] != '\0')) {
        command[i] = input[i];
        i++;
    }
    i++;
    while (input[i] != '\0') {
        arg[i] = input[i];
    }
    this->executeCommand(command, arg);
}
/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#include "ClientManager.h"

ClientManager::ClientManager() {
    this->commandsMap["play"] = new PlayCommand(this->clientSocket);
    this->commandsMap["list_games"] = new ListGamesCommand(this->gamesNames);
    this->commandsMap["join"] = new JoinCommand();
    this->commandsMap["start"] = new StartCommand(this->gamesNames);
    this->commandsMap["close"] = new CloseCommand();
    this->gamesNames = new vector<char*>();
}

ClientManager::~ClientManager() {
    map<string, Command*>::iterator it;
    for (it = this->commandsMap.begin(); it != this->commandsMap.end(); it++) {
        delete it->second;
    }
    delete this->gamesNames;
}

void ClientManager::executeCommand(string command, char* arg) {
    Command *commandObj = this->commandsMap[command];
    commandObj->execute(arg);
}

void ClientManager::setClientSocket(int socket) {
    this->clientSocket = socket;
}
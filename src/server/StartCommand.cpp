/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#include "StartCommand.h"

StartCommand::StartCommand(int socket, vector<GameMembers*>* games) {
    this->games = games;
    this->socket = socket;
}

void StartCommand::execute(char* arg) {
    if (!this->games->empty()) {
        for (int i = 0; i < this->games->size(); i++) {
            if (strcmp(arg,this->games->at(i)->getName()) == 0) {
                write(this->socket, "-1", sizeof("-1"));
                return;
            }
        }
        GameMembers* game1 = new GameMembers(arg, this->socket, 0);
        this->games->push_back(game1);
    }
}
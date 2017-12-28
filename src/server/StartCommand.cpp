/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#include "StartCommand.h"

StartCommand::StartCommand() {
}

void StartCommand::execute(char* arg, int* socket, vector<GameMembers*> &games) {
    this->games = games;
    this->socket = socket;
    if (this->games.size() != 0) {
        for (int i = 0; i < games.size(); i++) {
            if (strcmp(arg,games.at(i)->getName()) == 0) {
                write(*this->socket, "-1", sizeof("-1"));
                return;
            }
        }
    }
    GameMembers* game1 = new GameMembers(arg, *this->socket, 0);
    games.push_back(game1);
}
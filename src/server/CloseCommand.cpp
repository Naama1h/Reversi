/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#include "CloseCommand.h"
CloseCommand::CloseCommand() {
}

void CloseCommand::execute(char *arg, int* socket, vector<GameMembers*> &games) {
    this->games = games;
    this->socket = socket;
    if (!this->games.empty()) {
        for (int i = 0; i < games.size(); i++) {
            if (games.at(i)->getName().compare(arg) == 0) {
                write(games.at(i)->getSocket1(), "End", sizeof("End"));
                if(games.at(i)->getSocket2() != 0) {
                    write(games.at(i)->getSocket2(), "End", sizeof("End"));
                }
                delete games.at(i);
                games.erase(games.begin() + i);
                return;
            }
        }
    }
    close(*this->socket);
}
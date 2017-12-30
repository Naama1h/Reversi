/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#include "ListGamesCommand.h"

ListGamesCommand::ListGamesCommand() {
}

void ListGamesCommand::execute(char* arg, int* socket, vector<GameMembers*> &games) {
    this->socket = socket;
    this->games = games;
    char endMessage[190] = "";
    if (!this->games.empty()) {
        for (int i = 0; i < this->games.size(); i++) {
            if(this->games.at(i)->getSocket1() != 0 && this->games.at(i)->getSocket2() == 0
                    || this->games.at(i)->getSocket2() != 0 && this->games.at(i)->getSocket1() == 0) {
                char name[190] = "";
                int j = 0;
                while (this->games.at(i)->getName()[j] != '\0') {
                    name[j] = this->games.at(i)->getName()[j];
                    j++;
                }
                write(*this->socket, name, sizeof(name));
            }
        }
    }
    write(*this->socket, endMessage, sizeof(endMessage));
    close(*this->socket);
}
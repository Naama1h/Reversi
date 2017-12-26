/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#include "ListGamesCommand.h"

ListGamesCommand::ListGamesCommand(int socket, vector<GameMembers*>* games) {
    this->games = games;
    this->socket = socket;
}

void ListGamesCommand::execute(char* arg) {
    if (!this->games->empty()) {
        for (int i = 0; i < this->games->size(); i++) {
            if(this->games->at(i)->getSocket1() != 0 && this->games->at(i)->getSocket2() == 0
                    || this->games->at(i)->getSocket2() != 0 && this->games->at(i)->getSocket1() == 0) {
                write(this->socket, this->games->at(i)->getName(), sizeof(this->games->at(i)->getName()));
            }
        }
    }
}
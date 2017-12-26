/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#include "CloseCommand.h"
CloseCommand::CloseCommand(int socket, vector<GameMembers*>* games) {
    this->socket = socket;
    this->games = games;
}

void CloseCommand::execute(char *arg) {
    if (!this->games->empty()) {
        for (int i = 0; i < this->games->size(); i++) {
            if (strcmp(arg,this->games->at(i)->getName()) == 0) {
                write(this->games->at(i)->getSocket1(), "End", sizeof("End"));
                if(this->games->at(i)->getSocket2() != 0) {
                    write(this->games->at(i)->getSocket2(), "End", sizeof("End"));
                }
                delete this->games->at(i);
                this->games->erase(this->games->begin() + i);
                return;
            }
        }
    }
}
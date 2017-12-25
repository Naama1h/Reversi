/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#include "StartCommand.h"

StartCommand::StartCommand(vector<char*>* games) {
    this->games = games;
}

void StartCommand::execute(char* arg) {
    if (!this->games->empty()) {
        for (int i = 0; i < this->games->size(); i++) {
            if (strcmp(arg,this->games->at(i)) == 0) {
                return (void)-1;
            }
        }
        this->games->push_back(arg);
    }
}
/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#include "ListGamesCommand.h"

ListGamesCommand::ListGamesCommand(vector<char*> games) {
    this->games = games;
}

void ListGamesCommand::execute(char* arg) {
    if (!this->games.empty()) {
        cout << "the games are:" << endl;
        for (int i = 0; i < this->games.size(); i++) {
            cout << this->games.at(i) << endl;
        }
    }
}
/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#ifndef LISTGAMESCOMMAND_H
#define LISTGAMESCOMMAND_H

#include "Command.h"
#include "iostream"

class ListGamesCommand : public Command {
public:
    ListGamesCommand(int socket1, vector<GameMembers*>* games1);
    void execute(char* arg);

private:
    vector<GameMembers*>* games;
    int socket;
};


#endif //LISTGAMESCOMMAND_H

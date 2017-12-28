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
    ListGamesCommand();
    void execute(char* arg, int* socket, vector<GameMembers*>* games);

private:
    vector<GameMembers*>* games;
    int* socket;
};


#endif //LISTGAMESCOMMAND_H

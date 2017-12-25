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
    ListGamesCommand(vector<char*>* games);
    void execute(char* arg);

private:
    vector<char*>* games;
};


#endif //LISTGAMESCOMMAND_H

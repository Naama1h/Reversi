/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#ifndef STARTCOMMAND_H
#define STARTCOMMAND_H

#include "Command.h"
#include "iostream"

class StartCommand : public Command {
public:
    StartCommand();
    void execute(char* arg, int* socket, vector<GameMembers*> &games);

private:
    vector<GameMembers*> games;
    int* socket;
};


#endif //STARTCOMMAND_H

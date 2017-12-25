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
    StartCommand(vector<char*>* games);
    void execute(char* arg);

private:
    vector<char*>* games;
};


#endif //STARTCOMMAND_H

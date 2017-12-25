/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#ifndef PLAYCOMMAND_H
#define PLAYCOMMAND_H

#include "Command.h"
#include "iostream"
#include "unistd.h"

class PlayCommand : public Command {
public:
    PlayCommand(int clientSocket);
    void execute(char* arg);

private:
    int clientSocket;
};


#endif //PLAYCOMMAND_H

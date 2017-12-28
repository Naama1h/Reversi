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
    PlayCommand();
    void execute(char* arg, int* socket, vector<GameMembers*>* games);

private:
    int* clientSocket;
};


#endif //PLAYCOMMAND_H

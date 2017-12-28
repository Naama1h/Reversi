/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#ifndef JOINCOMMAND_H
#define JOINCOMMAND_H

#include "Command.h"

class JoinCommand : public Command {
public:
    JoinCommand();
    void execute(char* arg, int* socket, vector<GameMembers*> &games);
    void handleClient(GameMembers* gameMembers);
private:
    vector<GameMembers*> games;
    int* socket;
    int gameIndex;
};


#endif //JOINCOMMAND_H

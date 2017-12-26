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
    JoinCommand(int socket, vector<GameMembers*>* games);
    void execute(char* arg);
    void handleClient(GameMembers* gameMembers);
private:
    vector<GameMembers*>* games;
    int socket;
};


#endif //JOINCOMMAND_H

/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#ifndef CLOSECOMMAND_H
#define CLOSECOMMAND_H

#include "Command.h"

class CloseCommand : public Command {
public:
    CloseCommand(int socket, vector<GameMembers*>* games);
    void execute(char* arg);
private:
    int socket;
    vector<GameMembers*>* games;
};


#endif //CLOSECOMMAND_H

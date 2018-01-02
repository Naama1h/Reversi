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
    /**
     * constructor.
     */
    StartCommand();
    /**
     * start game
     * @param arg char*
     * @param socket int*
     * @param games vector<GameMembers*>
     */
    void execute(char* arg, int* socket, vector<GameMembers*> &games);
private:
    //members
    vector<GameMembers*> games;
    int* socket;
};


#endif //STARTCOMMAND_H

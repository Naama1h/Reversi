/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#ifndef COMMAND_H
#define COMMAND_H

#include <string.h>
using namespace std;

#include "vector"
#include "GameMembers.h"
#include <unistd.h>

class Command {
public:
    /**
     * execute
     * @param arg char*
     * @param socket int*
     * @param games vector<GameMembers*>
     */
    virtual void execute(char* arg, int* socket, vector<GameMembers*> &games) = 0;
};


#endif //COMMAND_H

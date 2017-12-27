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
    virtual void execute(char* arg) = 0;
};


#endif //COMMAND_H
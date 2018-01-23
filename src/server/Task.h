/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#ifndef TASK_H
#define TASK_H

#include "Command.h"
#include "GameMembers.h"

class Task {
public:
    Task(Command* command, char* arg, int socket, vector<GameMembers*>* games);
    void execute();

private:
    Command* command;
    char* arg;
    int socket;
    vector<GameMembers*>* games;
};


#endif //TASK_H

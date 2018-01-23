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
    /**
     * constructor.
     * @param func void*
     * @param arg void*
     */
    Task(void * (*func)(void *arg), void *arg);
    /**
     * execute the task.
     */
    void execute();
    /**
     * destructor.
     */
    virtual ~Task();
private:
    // members:
    void * (*func)(void *arg);
    void *arg;
};


#endif //TASK_H

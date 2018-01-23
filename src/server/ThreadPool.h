/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#ifndef THREADPOOL_H
#define THREADPOOL_H

#include "Command.h"
#include <queue>
#include <pthread.h>
using namespace std;

class ThreadPool {
public:
    /**
     * constructor.
     * @param threadsNum
     */
    ThreadPool(int threadsNum);
    /**
     * adding command.
     * @param command
     */
    void addCommand(Command *command);
    /**
     * terminate.
     */
    void terminate();
    /**
     * destructor.
     */
    virtual ~ThreadPool();

private:
    //members
    queue<Command *> commandQueue;
    pthread_t* threads;
    bool stopped;
    pthread_mutex_t lock;
    /**
     * execute commands.
     */
    void executeCommands();
    /**
     * execute.
     * @param arg
     * @return
     */
    static void *execute(void *arg);
};


#endif //THREADPOOL_H

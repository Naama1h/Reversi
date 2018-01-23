/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#include "ThreadPool.h"
#include <unistd.h>

ThreadPool::ThreadPool(int threadsNum) : stopped(false) {
    threads = new pthread_t[threadsNum];
    for (int i = 0; i < threadsNum; i++) {
        pthread_create(threads + i, NULL, execute, this);
    }
    pthread_mutex_init(&lock, NULL);
}

void* ThreadPool::execute(void *arg) {
    ThreadPool *pool = (ThreadPool *)arg;
    pool->executeCommands();
}

void ThreadPool::addTask(Task *task) {
    taskQueue.push(task);
}

void ThreadPool::executeCommands() {
    while (!stopped) {
        pthread_mutex_lock(&lock);
        if (!taskQueue.empty()) {
            Task* task = taskQueue.front();
            taskQueue.pop();
            pthread_mutex_unlock(&lock);
            task->execute();
            delete task;
        } else {
            pthread_mutex_unlock(&lock);
            sleep(1);
        }
    }
}

void ThreadPool::terminate() {
    pthread_mutex_destroy(&lock);
    stopped = true;
}

ThreadPool::~ThreadPool() {
    delete[] threads;
}
/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#include "Task.h"

Task::Task(void * (*func)(void *arg), void *arg) : func(func), arg(arg) {}

void Task::execute() { func(arg); }

Task::~Task() {
    delete this->arg;
}
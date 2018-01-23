/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#include "Task.h"

Task::Task(Command *command, char *arg, int socket, vector<GameMembers*>* games) : command(command), arg(arg),
                                                                                   socket(socket), games(games) {}

void Task::execute() {
    this->command->execute(this->arg,this->socket, this->games);
}
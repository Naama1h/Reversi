/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#include "PlayCommand.h"

PlayCommand::PlayCommand() {
}

void PlayCommand::execute(char *arg, int* socket, vector<GameMembers*>* games) {
    this->clientSocket = socket;
    ssize_t n = write(*this->clientSocket, &arg, sizeof(arg));
    if (n == -1) {
            cout << "Error reading move" << endl;
            return;
    }
}
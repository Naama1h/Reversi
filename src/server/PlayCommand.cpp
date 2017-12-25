/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#include "PlayCommand.h"

PlayCommand::PlayCommand(int clientSocket) {
    this->clientSocket = clientSocket;
}

void PlayCommand::execute(char *arg) {
    ssize_t n = write(this->clientSocket, &arg, sizeof(arg));
    if (n == -1) {
            cout << "Error reading move" << endl;
            return;
    }
}
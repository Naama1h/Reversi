/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#include "JoinCommand.h"
#include <iostream>
using namespace std;

JoinCommand::JoinCommand() {
}

void JoinCommand::execute(char* arg, int* socket, vector<GameMembers*>* games) {
    this->games = games;
    this->socket = socket;
    if (!this->games->empty()) {
        for (int i = 0; i < games->size(); i++) {
            if (strcmp(arg,games->at(i)->getName()) == 0 && games->at(i)->getSocket2() == 0) {
                games->at(i)->setSocket2(*this->socket);
                write(games->at(i)->getSocket1(), "1", sizeof("1"));
                write(games->at(i)->getSocket2(), "2", sizeof("2"));
                handleClient(games->at(i));
                return;
            }
        }
    }
}

void JoinCommand::handleClient(GameMembers* game) {
    write(game->getSocket1(), "startGame", sizeof("startGame"));
    char input1[7] = "";
    char input2[7] = "";
    char string1[7] = "";
    char string1char2[3] = "";
    char string2[7] = "";
    char string2char2[3] = "";
    char dummy[1];
    while (strcmp(input1, "close") != 0 && strcmp(input2, "close") != 0) {
        ssize_t n = read(game->getSocket1(), &input1, sizeof(input1));
        read(game->getSocket1(), &dummy, sizeof(dummy));
        if (n == -1) {
            cout << "Error reading move" << endl;
            return;
        }
        if (n == 0) {
            cout << "Client disconnected" << endl;
            return;
        }
        if (strcmp(input1,"play") == 0) {
            ssize_t n = read(game->getSocket1(), &string1char2, sizeof(string1char2));
            read(game->getSocket1(), &dummy, sizeof(dummy));
            if (n == -1) {
                cout << "Error reading move" << endl;
                return;
            }
            if (n == 0) {
                cout << "Client disconnected" << endl;
                return;
            }
            if (string1char2[0] == '<' && string1char2[2] == '>') {
                string1[0] = string1char2[1];
                string1[1] = ',';
            } else {
                return;
            }
            n = read(game->getSocket1(), &string1char2, sizeof(string1char2));
            read(game->getSocket1(), &dummy, sizeof(dummy));
            if (n == -1) {
                cout << "Error reading move" << endl;
                return;
            }
            if (n == 0) {
                cout << "Client disconnected" << endl;
                return;
            }
            if (string1char2[0] == '<' && string1char2[2] == '>') {
                string1[2] = string1char2[1];
            } else {
                return;
            }
            write(game->getSocket2(), &string1, sizeof(string1));
        } else if (strcmp(input1, "close") == 0) {
            write(game->getSocket2(), "End", sizeof("End"));
            break;
        }
        n = read(game->getSocket2(), &input2, sizeof(input2));
        read(game->getSocket2(), &dummy, sizeof(dummy));
        if (n == -1) {
            cout << "Error reading move" << endl;
            return;
        }
        if (n == 0) {
            cout << "Client disconnected" << endl;
            return;
        }
        if (strcmp(input2,"play") == 0) {
            ssize_t n = read(game->getSocket2(), &string2char2, sizeof(string2char2));
            read(game->getSocket2(), &dummy, sizeof(dummy));
            if (n == -1) {
                cout << "Error reading move" << endl;
                return;
            }
            if (n == 0) {
                cout << "Client disconnected" << endl;
                return;
            }
            if (string2char2[0] == '<' && string2char2[2] == '>') {
                string2[0] = string2char2[1];
                string2[1] = ',';
            } else {
                return;
            }
            n = read(game->getSocket2(), &string2char2, sizeof(string2char2));
            read(game->getSocket2(), &dummy, sizeof(dummy));
            if (n == -1) {
                cout << "Error reading move" << endl;
                return;
            }
            if (n == 0) {
                cout << "Client disconnected" << endl;
                return;
            }
            if (string2char2[0] == '<' && string2char2[2] == '>') {
                string2[2] = string2char2[1];
            } else {
                return;
            }
            write(game->getSocket1(), &string2, sizeof(string2));
        } else if (strcmp(input2, "close") == 0) {
            write(game->getSocket1(), "End", sizeof("End"));
            break;
        }
    }
}
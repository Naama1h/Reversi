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

void JoinCommand::execute(char* arg, int* socket, vector<GameMembers*>& games) {
    this->games = games;
    this->socket = socket;
    if (!this->games.empty()) {
        for (int i = 0; i < games.size(); i++) {
            if (games.at(i)->getName().compare(arg) == 0 && games.at(i)->getSocket2() == 0) {
                games.at(i)->setSocket2(*this->socket);
                write(games.at(i)->getSocket1(), "1", sizeof(char));
                write(games.at(i)->getSocket2(), "2", sizeof(char));
                this->gameIndex = i;
                handleClient(games.at(i));
                close(games.at(i)->getSocket1());
                close(games.at(i)->getSocket2());
                games.erase(games.begin() + i);
                return;
            }
        }
    }
    write(*this->socket, "n", sizeof(char));
}

void JoinCommand::handleClient(GameMembers* game) {
    write(game->getSocket1(), "startGame", sizeof("startGame"));
    char input[190] = "";
    char input1[7] = "";
    char input2[180] = "";
    char inputx[190] = "";
    char inputx1[7] = "";
    char inputx2[180] = "";
    char string1[7] = "";
    char string2[7] = "";
    while (strcmp(input1, "End") != 0 && strcmp(input2, "End") != 0) {
        ssize_t n = read(game->getSocket1(), &input, sizeof(input));
        int i = 0;
        while (input[i] != '\0') {
            input1[i] = input[i];
            i++;
        }
        while (input[i] == '\0') {
            i++;
        }
        int j = 0;
        while (input[i] != '\0') {
            input2[j] = input[i];
            i++;
            j++;
        }
        if (n == -1) {
            cout << "Error reading move" << endl;
            return;
        }
        if (n == 0) {
            cout << "Client disconnected" << endl;
            return;
        }
        if (strcmp(input1,"play") == 0) {
            string1[0] = input2[0];
            string1[1] = ',';
            string1[2] = input2[1];
            write(game->getSocket2(), &string1, sizeof(string1));
        } else if (strcmp(input1, "End") == 0) {
            write(game->getSocket2(), "End", sizeof("End"));
            break;
        }
        n = read(game->getSocket2(), &inputx, sizeof(inputx));
        i = 0;
        while (inputx[i] != '\0') {
            inputx1[i] = inputx[i];
            i++;
        }
        while (inputx[i] == '\0') {
            i++;
        }
        j = 0;
        while (inputx[i] != '\0') {
            inputx2[j] = inputx[i];
            i++;
            j++;
        }
        if (n == -1) {
            cout << "Error reading move" << endl;
            return;
        }
        if (n == 0) {
            cout << "Client disconnected" << endl;
            return;
        }
        if (strcmp(inputx1,"play") == 0) {
            string2[0] = inputx2[0];
            string2[1] = ',';
            string2[2] = inputx2[1];
            write(game->getSocket1(), &string2, sizeof(string2));
        } else if (strcmp(inputx1, "End") == 0) {
            write(game->getSocket1(), "End", sizeof("End"));
            break;
        }
    }
}
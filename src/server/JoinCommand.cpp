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
            if (strcmp(arg,games.at(i)->getName()) == 0 && games.at(i)->getSocket2() == 0) {
                games.at(i)->setSocket2(*this->socket);
                write(games.at(i)->getSocket1(), "1", sizeof(char));
                write(games.at(i)->getSocket2(), "2", sizeof(char));
                handleClient(games.at(i));
                return;
            }
        }
    }
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
    char string1char2[3] = "";
    char string2[7] = "";
    char string2char2[3] = "";
    char dummy[1];
    while (strcmp(input1, "close") != 0 && strcmp(input2, "close") != 0) {
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
        while (input[i+1] != '\0') {
            input2[j] = input[i];
            i++;
            j++;
        }
//        read(game->getSocket1(), &dummy, sizeof(dummy));
        if (n == -1) {
            cout << "Error reading move" << endl;
            return;
        }
        if (n == 0) {
            cout << "Client disconnected" << endl;
            return;
        }
        if (strcmp(input1,"play") == 0) {
            /*
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
             */
            int k = 0;
            while (input2[k] != '\0') {
                string1char2[k] = input2[k];
                k++;
            }
            if (string1char2[0] == '<' && string1char2[2] == '>') {
                string1[0] = string1char2[1];
                string1[1] = ',';
            } else {
                return;
            }
            /*
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
             */
            int p = 0;
            while (input2[k] != '\0') {
                string1char2[p] = input2[k];
                k++;
                p++;
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
        while (inputx[i+1] != '\0') {
            inputx2[j] = inputx[i];
            i++;
            j++;
        }
//        read(game->getSocket2(), &dummy, sizeof(dummy));
        if (n == -1) {
            cout << "Error reading move" << endl;
            return;
        }
        if (n == 0) {
            cout << "Client disconnected" << endl;
            return;
        }
        if (strcmp(inputx1,"play") == 0) {
            /*
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
             */
            int k = 0;
            while (inputx2[k] != '\0') {
                string1char2[k] = inputx2[k];
                k++;
            }
            if (string2char2[0] == '<' && string2char2[2] == '>') {
                string2[0] = string2char2[1];
                string2[1] = ',';
            } else {
                return;
            }
            /*
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
             */
            int p = 0;
            while (inputx2[k] != '\0') {
                string1char2[p] = inputx2[k];
                k++;
                p++;
            }
            if (string2char2[0] == '<' && string2char2[2] == '>') {
                string2[2] = string2char2[1];
            } else {
                return;
            }
            write(game->getSocket1(), &string2, sizeof(string2));
        } else if (strcmp(inputx1, "close") == 0) {
            write(game->getSocket1(), "End", sizeof("End"));
            break;
        }
    }
}
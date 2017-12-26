/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#include "GameMembers.h"
GameMembers::GameMembers(char *name, int socket1, int sockt2) {
    this->name = name;
    this->socket1 = socket1;
    this->sockt2 = sockt2;
}

void GameMembers::setSocket2(int socket2) {
    this->sockt2 = socket2;
}

char* GameMembers::getName() {
    return this->name;
}

int GameMembers::getSocket1() {
    return this->socket1;
}

int GameMembers::getSocket2() {
    return this->sockt2;
}
/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#ifndef GAMEMEMBERS_H
#define GAMEMEMBERS_H

#include "string"
using namespace std;

class GameMembers {
public:
    GameMembers(string name, int socket1, int socekt2);
    void setSocket2(int socket2);
    string getName();
    int getSocket1();
    int getSocket2();
private:
    string name;
    int socket1;
    int socket2;
};


#endif //GAMEMEMBERS_H

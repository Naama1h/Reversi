/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#ifndef GAMEMEMBERS_H
#define GAMEMEMBERS_H


class GameMembers {
public:
    GameMembers(char* name, int socket1, int sockt2);
    void setSocket2(int socket2);
    char* getName();
    int getSocket1();
    int getSocket2();
private:
    char* name;
    int socket1;
    int sockt2;
};


#endif //GAMEMEMBERS_H

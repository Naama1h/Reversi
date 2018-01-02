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
    /**
     * constructor.
     * @param name string
     * @param socket1 int
     * @param socekt2 int
     */
    GameMembers(string name, int socket1, int socket2);
    /**
     * set socket 2.
     * @param socket2 int
     */
    void setSocket2(int socket2);
    /**
     * get name.
     * @return string
     */
    string getName();
    /**
     * get socket 1.
     * @return int
     */
    int getSocket1();
    /**
     * get socket 2.
     * @return int
     */
    int getSocket2();
private:
    //members:
    string name;
    int socket1;
    int socket2;
};

#endif //GAMEMEMBERS_H
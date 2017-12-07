/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#ifndef CLIENT_H
#define CLIENT_H

#include "Point.h"
#include <string.h>
#include <iostream>

using namespace std;

class Client {
public:
	Client(const char* serverIP, int serverPort);
	void connectToServer();
	void sendMove(char* move);
    Point getRivalMove();
    char getCellType();
private:
	const char* serverIP;
	int serverPort;
	int clientSocket;
};

#endif //CLIENT_H
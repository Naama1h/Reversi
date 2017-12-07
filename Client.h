/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#ifndef CLIENT_H
#define CLIENT_H

#include "Point.h"

class Client {
public:
	Client(const char* serverIP, int serverPort);
	void connectToServer();
	void sendMove(char* move);
    Point getRivalMove();
private:
	const char* serverIP;
	int serverPort;
	int clientSocket;
};

#endif //CLIENT_H
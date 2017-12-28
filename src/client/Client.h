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
	/**
	 * constructor.
	 * @param serverIP
	 * @param serverPort
	 */
	Client(const char* serverIP, int serverPort);
	/**
	 * connecting to server.
	 */
	void connectToServer();
	/**
	 * send move.
	 * @param move
	 */
	void sendMove(char* move);
    /**
     * get rival move.
     * @return move
     */
	Point getRivalMove();
    /**
     * get CellType member.
     * @return cellType
     */
	char getCellType();
	/**
	 * waiting to other player.
	 */
	void waitOtherPlayer();

    void sendCommand(char** command);
private:
	//members
	const char* serverIP;
	int serverPort;
	int clientSocket;
};

#endif //CLIENT_H
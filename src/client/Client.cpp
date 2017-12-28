/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#include "Client.h"
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <unistd.h>

using namespace std;

Client::Client(const char* serverIP, int serverPort): serverIP(serverIP), serverPort(serverPort), clientSocket(0) {
}

void Client:: connectToServer() {
	// Create a socket point
	clientSocket = socket(AF_INET, SOCK_STREAM, 0);
	if(clientSocket == -1) {
		throw "Error opening socket";
	}
	// Convert the ip string to a network address
	struct in_addr address;
	if (!inet_aton(serverIP, &address)) {
		throw "Can't parse IP address";
	}
	// Get a hostent structure for the given host address
	struct hostent* server;
	server = gethostbyaddr((const void*)&address, sizeof address, AF_INET);
	if (server == NULL) {
		throw "Host is unreachable";
	}
	// Create a structure for the server address
	struct sockaddr_in serverAddress;
	bzero((char*)&address, sizeof(address));
	serverAddress.sin_family = AF_INET;
	memcpy((char*)&serverAddress.sin_addr.s_addr, (char*)server->h_addr, server->h_length);
	// htons converts values between host and network byte orders
	serverAddress.sin_port = htons(serverPort);
	// Establish a connection with the TCP server
	if(connect(clientSocket, (struct sockaddr*)&serverAddress, sizeof(serverAddress)) == -1) {
		throw "Error connecting to server";
	}
	cout << "Connected to server" << endl;
}

void Client:: sendMove(char* move) {
	// Write the exercise arguments to the socket
	char play[6] = "play";
	ssize_t m = write(clientSocket, play, sizeof(play));
	if(m == -1) {
		throw "Error writing move to socket";
	}
	char moveX[3], moveY[3];
	moveX[0] = '<';
	moveX[1] = move[0];
	moveX[2] = '>';
    moveY[0] = '<';
    moveY[1] = move[2];
    moveY[2] = '>';
	ssize_t n = write(clientSocket, moveX, sizeof(moveX));
	if(n == -1) {
		throw "Error writing move to socket";
	}
	n = write(clientSocket, moveY, sizeof(moveY));
	if(n == -1) {
		throw "Error writing move to socket";
	}
}

Point Client::getRivalMove() {
    // Read the result from the server
    char result[7];
    ssize_t n = read(clientSocket, &result, sizeof(result));
    if (n == -1) {
        throw "Error reading result from socket";
    }
    if (strcmp(result, "NoMove") == 0) {
        return Point(-2, -2);
    } else if(strcmp(result, "End") == 0){
        return Point(-1, -1);
    } else {
		return Point(result[0] - 48, result[2] - 48);
	}
}

char Client::getCellType() {
	char result[1];
    ssize_t n = read(clientSocket, &result, sizeof(result));
    if(n == -1) {
        throw "Error reading result from socket";
    }
	return result[0];
}

void Client::waitOtherPlayer() {
	char result[10];
	ssize_t n = read(clientSocket, &result, sizeof(result));
	if(n == -1) {
		throw "Error reading result from socket";
	}
}

void Client::sendCommand(char** command) {
    ssize_t m = write(clientSocket, command[0], sizeof(command[0]));
    if(m == -1) {
        throw "Error writing move to socket";
    }
    m = write(clientSocket, command[1], sizeof(command[1]));
    if(m == -1) {
        throw "Error writing move to socket";
    }
}
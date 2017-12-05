/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#include "Client.h"
#include <iostream>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <string.h>
#include <unistd.h>

using namespace std;

Client::Client(const char* serverIP, int serverPort): serverIP(serverIP), serverPort(serverPort), clientSocket(0) {
	cout << "Client" << endl;
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

Point Client:: sendMove(char* move) {
	// Write the exercise arguments to the socket
	ssize_t n = write(clientSocket, &move, sizeof(move));
	if(n == -1) {
		throw "Error writing move to socket";
	}
	// Read the result from the server
	char result[7];
	n = read(clientSocket, &result, sizeof(result));
	if(n == -1) {
		throw "Error reading result from socket";
	}
	if(strcmp(result, "NoMove") == 0) {
        return Point(-1,-1);
    } else {
        return Point(result[0] - 48, result[2] - 48);
    }
}

/*
int main() {
	Client client("127.0.0.1", 8000);
	try {
		client.connectToServer();
	} catch(const char* msg) {
		cout << "Failed to connect to server. Reason:" << msg << endl;
		exit(-1);
	}
	int num1, num2;
	char op;
	while(true) {
		cout << "Enter an exercise (e.g., 15*19): ";
		cin >> num1 >> op >> num2;
		cout << "Sending exercise: " << num1 << op << num2 << endl;
		try
		{
			int result = client.sendMove(num1, op, num2);
			cout << "Result: " << result << endl;
		}
		catch(const char* msg) {
			cout << "Failed to send exercise to server. Reason: " << msg << endl;
		}
	}
}
*/
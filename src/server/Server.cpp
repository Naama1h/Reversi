/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#include "Server.h"
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <string.h>
#include <iostream>
using namespace std;
#define MAX_CONNECTED_CLIENT 2

Server::Server(int port) : port(port), serverSocket(0) {
    this->threadPool = new ThreadPool(5);
}

void Server::start() {
    this->clientManager = new ClientManager();
    //create a socket point
    serverSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (serverSocket == -1) {
        throw "Error opening socket";
    }
    // assign a local address to the socket
    struct sockaddr_in serverAddress;
    bzero((void *)&serverAddress, sizeof(serverAddress));
    serverAddress.sin_family = AF_INET;
    serverAddress.sin_addr.s_addr = INADDR_ANY;
    serverAddress.sin_port = htons(port);
    if (bind(serverSocket, (struct sockaddr*)&serverAddress, sizeof(serverAddress)) == -1) {
        throw "Error on binding";
    }
    // start listening to incoming connections
    listen(serverSocket, MAX_CONNECTED_CLIENT);
    // define the client socket's structures
    struct sockaddr_in clientAddress1;
    socklen_t clientAddressLen1 = sizeof((struct sockaddr*) &clientAddress1);
    while (true) {
        // accept a new client connection
        int clientSocket1 = accept(serverSocket,
                                   (struct sockaddr*)&clientAddress1, &clientAddressLen1);
        if (clientSocket1 == -1) {
            cout << "Error on accept" << endl;
            break;
        }
        this->clientSocket = clientSocket1;
        Server* ser = new Server(this->port);
        ser->clientSocket = clientSocket1;
        ser->setClientManager(this->clientManager);
        Task* task = new Task(forThread, (void*)ser);
        this->threadPool->addTask(task);
    }
}

void* Server::firstThreadLoop(void* clientThread1) {
    Server* clientThread2 = (Server*)clientThread1;
    clientThread2->start();
}

void* Server::forThread(void* clientThread1) {
    Server* clientThread2 = (Server*)clientThread1;
    clientThread2->clientManager->setClientSocket(clientThread2->clientSocket);
    clientThread2->clientManager->readCommand(clientThread2->clientSocket);
}

void Server::setClientManager(ClientManager *clientManager) {
    this->clientManager = clientManager;
}

void Server::stop() {
    this->threadPool->terminate();
    delete this->clientManager;
    close(serverSocket);
}
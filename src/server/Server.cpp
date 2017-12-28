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
#include <pthread.h>
#include <iostream>
using namespace std;
#define MAX_CONNECTED_CLIENT 2

Server::Server(int port) : port(port), serverSocket(0) {
    this->clientManager = new ClientManager();
}

void Server::start() {
//    //create a socket point
//    serverSocket = socket(AF_INET, SOCK_STREAM, 0);
//    if (serverSocket == -1) {
//        throw "Error opening socket";
//    }
//    // assign a local address to the socket
//    struct sockaddr_in serverAddress;
//    bzero((void *)&serverAddress, sizeof(serverAddress));
//    serverAddress.sin_family = AF_INET;
//    serverAddress.sin_addr.s_addr = INADDR_ANY;
//    serverAddress.sin_port = htons(port);
//    if (bind(serverSocket, (struct sockaddr*)&serverAddress, sizeof(serverAddress)) == -1) {
//        throw "Error on binding";
//    }
//    // start listening to incoming connections
//    listen(serverSocket, MAX_CONNECTED_CLIENT);
//    // define the client socket's structures
//    struct sockaddr_in clientAddress1;
//    struct sockaddr_in clientAddress2;
//    socklen_t clientAddressLen1 = sizeof((struct sockaddr*) &clientAddress1);
//    socklen_t clientAddressLen2 = sizeof((struct sockaddr*) &clientAddress2);
//    while (true) {
//        cout << "Waiting for client connections..." << endl;
//        // accept a new client connection
//        int clientSocket1 = accept(serverSocket,
//                                  (struct sockaddr*)&clientAddress1, &clientAddressLen1);
//        if (clientSocket1 == -1) {
//            throw "Error on accept";
//        }
//        write(clientSocket1, "1", sizeof(char));
//        int clientSocket2 = accept(serverSocket,
//                                   (struct sockaddr*)&clientAddress2, &clientAddressLen2);
//        cout << "Clients connected" << endl;
//        if (clientSocket2 == -1) {
//            throw "Error on accept";
//        }
//        write(clientSocket2, "2", sizeof(char));
//        handleClient(clientSocket1, clientSocket2);
//        //close communication with the client
//        close(clientSocket1);
//        close(clientSocket2);
//    }

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
    vector<pthread_t>* threads = new vector<pthread_t>();
    while (true) {
        cout << "Waiting for client connections..." << endl;
        // accept a new client connection
        int clientSocket1 = accept(serverSocket,
                                   (struct sockaddr*)&clientAddress1, &clientAddressLen1);
        if (clientSocket1 == -1) {
            throw "Error on accept";
        }
        this->clientSocket = clientSocket1;
        pthread_t thread;
        Server* ser = new Server(this->port);
        ser->clientSocket = clientSocket1;
        int rc = pthread_create(&thread, NULL, forThread, (void*)ser);
        if (rc) {
            cout << "Error: unable to create thread " << rc << endl;
            return;
        }
        threads->push_back(thread);
        cout << "Clients connected" << endl;
        //close communication with the client
        //close(clientSocket1);
    }
    pthread_exit(NULL);
    delete threads;
}

//void Server::handleClient(int clientSocket1, int clientSocket2) {
//    write(clientSocket1, "startGame", sizeof("startGame"));
//    char input1[7] = "";
//    char input2[7] = "";
//    char dummy[1];
//    char compare[3] = "";
//    while (strcmp(input1, "End") != 0 && strcmp(input2, "End") != 0) {
//        ssize_t n = read(clientSocket1, &input1, sizeof(input1));
//        read(clientSocket1, &dummy, sizeof(dummy));
//        if (n == -1) {
//            cout << "Error reading move" << endl;
//            return;
//        }
//        if (n == 0) {
//            cout << "Client disconnected" << endl;
//            return;
//        }
//        write(clientSocket2, &input1, n);
//        strcpy(compare,input1);
//        if(strcmp(compare, "End") == 0) {
//            break;
//        }
//        n = read(clientSocket2, &input2, sizeof(input2));
//        read(clientSocket2, &dummy, sizeof(dummy));
//        if (n == -1) {
//            cout << "Error reading move" << endl;
//            return;
//        }
//        if (n == 0) {
//            cout << "Client disconnected" << endl;
//            return;
//        }
//        write(clientSocket1, &input2, n);
//    }
//}
/*
void *Server::handleClient(int clientSocket) {
    char input[20] = "";  // magic number!!!!!!
    ssize_t n = read(clientSocket, &input, sizeof(input));
    char command[10];
    char arg[10] = ""; // magic number!!!!!
    char space = ' ';
    int i = 0;
    while ((input[i] != space) && (input[i] != '\0')) {
        command[i] = input[i];
        i++;
    }
    i++;
    while (input[i] != '\0') {
        arg[i] = input[i];
    }
    this->clientManager->executeCommand(command, arg);
}
**/
void* Server::forThread(void* clientThread1) {
    Server* clientThread2 = (Server*)clientThread1;
    clientThread2->clientManager->setClientSocket(clientThread2->clientSocket);
    clientThread2->clientManager->readCommand();
}

void Server::stop() {
    delete this->clientManager;
    close(serverSocket);
}
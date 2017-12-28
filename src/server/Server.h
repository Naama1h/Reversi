/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#ifndef SERVER_H
#define SERVER_H

#include "ClientManager.h"

class Server {
public:
    /**
     * constructor.
     * @param port
     */
    Server(int port);
    /**
     * start.
     */
    void start();
    /**
     * stop.
     */
    void stop();

    void setClientManager(ClientManager* clientManager);
private:
    // members
    int port;
    int serverSocket;
    ClientManager* clientManager;
    /**
     * handle client.
     * @param clientSocket
     * @param clientSocket2
     */
//    void handleClient(int clientSocket, int clientSocket2);
    void *handleClient(int clientSocket);
    static void* forThread(void* clientThread1);
    int clientSocket;
};


#endif //SERVER_H

/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#ifndef SERVER_H
#define SERVER_H

#include "ClientManager.h"
#include <pthread.h>

class Server {
public:
    /**
     * constructor.
     * @param port int
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
    /**
     * set the client manager.
     * @param clientManager ClientManager*
     */
    void setClientManager(ClientManager* clientManager);
    /**
     * do the first thread loop
     * @param clientThread1 void*
     * @return void*
     */
    static void* firstThreadLoop(void* clientThread1);
private:
    // members
    int port;
    int serverSocket;
    ClientManager* clientManager;
    vector<pthread_t>* threads;
    static pthread_mutex_t lock;
    int clientSocket;
    /**
     * static function to the little thread
     * @param clientThread1 void*
     * @return void*
     */
    static void* forThread(void* clientThread1);
};


#endif //SERVER_H

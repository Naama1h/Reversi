/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#include "Server.h"
#include <fstream>
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int port;
    ifstream outFile;
    outFile.open("definitionServer.txt");
    outFile >> port;
    pthread_t mainThread;
    Server server(port);
    outFile.close();
    try {
        int rc = pthread_create(&mainThread, NULL, server.firstThreadLoop, (void*)&server);
        if (rc) {
            cout << "Error: unable to create thread " << rc << endl;
            return 0;
        }
        string str;
        do {
            cout << "Enter exit to stop server" << endl;
            cin >> str;
        } while (str != "exit");
//        server.stop();
        pthread_cancel(mainThread);
    } catch (const char *msg) {
        cout << "Cannot start server. Reason:" << msg << endl;
    }
    return 0;
}
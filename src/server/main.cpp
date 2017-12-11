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
    Server server(port);
    outFile.close();
    try {
        server.start();
        server.stop();
    } catch (const char *msg) {
        cout << "Cannot start server. Reason:" << msg << endl;
    }
    exit(-1);
}
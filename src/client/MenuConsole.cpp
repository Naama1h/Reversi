/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#include "MenuConsole.h"

using namespace std;

MenuConsole::MenuConsole(int options1) {
    this->options = options1;
}

void MenuConsole :: print() {
    cout << "Choose an opponent type:" << endl;
    if (this->options == 3) {
        cout << "1. a human local player" << endl;
        cout << "2. an AI player" << endl;
        cout << "3. a remote player" << endl;
    }
}

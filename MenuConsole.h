/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#ifndef EX3_MENUCONSOLE_H
#define EX3_MENUCONSOLE_H

#include <getopt.h>
#include "Menu.h"
#include <iostream>

class MenuConsole : public Menu {
public:
    MenuConsole(int options);
    void print();
private:
    int options;
};


#endif //EX3_MENUCONSOLE_H

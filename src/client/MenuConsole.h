/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#ifndef MENUCONSOLE_H
#define MENUCONSOLE_H

#include <getopt.h>
#include "Menu.h"
#include <iostream>

class MenuConsole : public Menu {
public:
    /**
     * constructor.
     * @param options int
     */
    MenuConsole(int options);
    /**
     * print the menu.
     */
    virtual void print();
private:
    // member
    int options;
};


#endif //MENUCONSOLE_H

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


#endif //EX3_MENUCONSOLE_H

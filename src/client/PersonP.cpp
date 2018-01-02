/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#include <vector>
#include "PersonP.h"
#include <limits>

PersonP::PersonP(string name, celltype celltype) {
    this->name = name;
    this->celltype1 = celltype;
}


Point PersonP::chooseCell(vector<Point>* options, StandartLogic* logic) const {
    PrintConsole printer;
    printer.itsYourMove(this->getName());
    printer.possibleMoves(options);
    printer.enterMove();
    int x, y;
    char tmp;
    cin >> x >> tmp >> y;
    if (cin.fail()) {
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input
        printer.onlyNumbers();
    }
    // user didn't input a number
    cin.clear(); // reset failbit
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input
    Point cell(x, y);
    return cell;
}

celltype PersonP::getCellType() const {
    return this->celltype1;
}

string PersonP::getName() const {
    return this->name;
}

void PersonP::noMove() {
    PrintConsole printer;
    printer.itsYourMove(this->getName());
    char in[6];
    do {
        printer.NoPossibleMoves();
        cin >> in;
    } while(strcmp(in,"NoMove") != 0);
    this->sendMove(Point(-2,-2));
}
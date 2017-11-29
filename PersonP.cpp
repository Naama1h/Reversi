/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#include <vector>
#include "PersonP.h"
#include "PrintConsole.h"
#include <limits>

PersonP::PersonP(string name, celltype celltype) {
    this->name = name;
    this->celltype1 = celltype;
}


Point PersonP::chooseCell(vector<Point>* options, StandartLogic* logic) const {
    PrintConsole printer;
    printer.itsYourMove(this->getName());
    printer.possibleMoves(options);
    /**
    cout << name << ": its your move." << endl;
    cout << "Your possible moves: ";
    for (int i = 0; i < options->size(); i++) {
        cout << "(" << options->at(i).getX() << ","
             << options->at(i).getY() << ") ";
    }
    cout << endl << endl;
     */
    int x, y;
    cin >> x >> y;
    if (cin.fail()) {
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input
    }
    // user didn't input a number
    printer.onlyNumbers();
    //cout << "Please enter numbers only." << endl;
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
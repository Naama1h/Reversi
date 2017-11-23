/*
 * Naama Harshoshanim
 * 315783217
 * 4/11/17
 */

#include <vector>
#include "PersonP.h"
#include <limits>

PersonP::PersonP(string name, celltype celltype) {
    this->name = name;
    this->celltype1 = celltype;
}


Point PersonP::chooseCell(vector<Point>* options) const {
    cout << name << ": its your move." << endl;
    cout << "Your possible moves: ";
    for (int i = 0; i < options->size(); i++) {
        cout << "(" << options->at(i).getX() << ","
             << options->at(i).getY() << ") ";
    }
    cout << endl << endl;
    cout << "Please enter your move row col:" << endl;
    int x, y;
    cin >> x >> y;
    if (cin.fail()) {
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input
    }
    // user didn't input a number
    cout << "Please enter numbers only." << endl;
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
/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#ifndef EX3_PRINTCONSOLE_H
#define EX3_PRINTCONSOLE_H

#include "PrintMassage.h"
using namespace std;

class PrintConsole :  public PrintMassage {
public:
    /**
     * print the counter
     * @param celltype1 celltype
     * @param counter1 counter
     */
    virtual void counter(celltype celltype1 ,int counter1);
    /**
     * print that there is no possible move.
     */
    virtual void NoPossibleMoves();
    /**
     * print that was a move and where.
     * @param player player
     * @param point point
     */
    virtual void wasMoves(Player* player, Point point);
    /**
     * print that cant choose this move.
     */
    virtual void cantChooseThisCell();
    /**
     * print who win
     * @param b board*
     * @param player1 player*
     * @param player2 player*
     */
    virtual void winner(Board* b, Player* player1, Player* player2);
    /**
     * print to the player that this is his move.
     * @param playerName string
     */
    virtual void itsYourMove(string playerName);
    /**
     * print that possible moves.
     * @param options vector<Point>*
     */
    virtual void possibleMoves(vector<Point>* options);
    /**
     * print to user to enter his move.
     */
    virtual void enterMove();
    /**
     * print to user to enter only numbers.
     */
    virtual void onlyNumbers();
};


#endif //EX3_PRINTCONSOLE_H
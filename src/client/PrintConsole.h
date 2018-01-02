/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#ifndef PRINTCONSOLE_H
#define PRINTCONSOLE_H

#include "PrintMassage.h"
using namespace std;

class PrintConsole :  public PrintMassage {
public:
    /**
     * print the counter
     * @param celltype1 celltype
     * @param counter1 counter
     */
    virtual void counter(celltype celltype1 ,int counter1) const;
    /**
     * print that there is no possible move.
     */
    virtual void NoPossibleMoves() const;
    /**
     * print that there is no possible move to your rival.
     */
    virtual void NoPossibleMovesToRival() const;
    /**
     * print that was a move and where.
     * @param player player
     * @param point point
     */
    virtual void wasMoves(Player* player, Point point) const;
    /**
     * print that cant choose this move.
     */
    virtual void cantChooseThisCell() const;
    /**
     * print who win
     * @param b board*
     * @param player1 player*
     * @param player2 player*
     */
    virtual void winner(Board* b, Player* player1, Player* player2) const;
    /**
     * print to the player that this is his move.
     * @param playerName string
     */
    virtual void itsYourMove(string playerName) const;
    /**
     * print that possible moves.
     * @param options vector<Point>*
     */
    virtual void possibleMoves(vector<Point>* options) const;
    /**
     * print to user to enter his move.
     */
    virtual void enterMove() const;
    /**
     * print to user to enter only numbers.
     */
    virtual void onlyNumbers() const;
    /**
     * print to the user that he wait to the other user.
     */
    virtual void waitingForRival() const;
    /**
     * print to the user that he wait to the other user move.
     */
    virtual void waitingForMoveOfRival() const;
    /**
     * finish the game.
     */
    virtual void enterEnd() const;
    /**
     * print the name of the game.
     * @param name string
     */
    virtual void nameOfGame(string name) const;
    /**
     * print "list of game:\n"
     */
    virtual void listGame() const;
    /**
     * print commands
     */
    virtual void optionOfCommand() const;
    /**
     * print "cant Choose This Game\n"
     */
    virtual void cantChooseThisGame() const; 
};


#endif //PRINTCONSOLE_H
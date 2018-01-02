/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#ifndef PRINTMASSAGE_H
#define PRINTMASSAGE_H

#include "Board.h"
#include "Player.h"

class PrintMassage {
public:
    /**
     * print the counter
     * @param celltype1 celltype
     * @param counter1 counter
     */
    virtual void counter(celltype celltype1 ,int counter1) const = 0;
    /**
     * print that there is no possible move.
     */
    virtual void NoPossibleMoves() const = 0;
    /**
     * print that there is no possible move to your rival.
     */
    virtual void NoPossibleMovesToRival() const = 0;
    /**
     * print that was a move and where.
     * @param player player
     * @param point point
     */
    virtual void wasMoves(Player* player, Point point) const = 0;
    /**
     * print that cant choose this move.
     */
    virtual void cantChooseThisCell() const = 0;
    /**
     * print who win
     * @param b board*
     * @param player1 player*
     * @param player2 player*
     */
    virtual void winner(Board* b, Player* player1, Player* player2) const = 0;
    /**
     * print to the player that this is his move.
     * @param playerName string
     */
    virtual void itsYourMove(string playerName) const = 0;
    /**
     * print that possible moves.
     * @param options vector<Point>*
     */
    virtual void possibleMoves(vector<Point>* options) const = 0;
    /**
     * print to user to enter his move.
     */
    virtual void enterMove() const = 0;
    /**
     * print to user to enter only numbers.
     */
    virtual void onlyNumbers() const = 0;
    /**
     * print to the user that he wait to the other user.
     */
    virtual void waitingForRival() const = 0;
    /**
     * print to the user that he wait to the other user move.
     */
    virtual void waitingForMoveOfRival() const = 0;
    /**
     * finish the game.
     */
    virtual void enterEnd() const = 0;
    /**
     * print the name of the game.
     * @param name string
     */
    virtual void nameOfGame(string name) const = 0;
    /**
     * print "list of game:\n"
     */
    virtual void listGame() const = 0;
    /**
     * print commands
     */
    virtual void optionOfCommand() const = 0;
    /**
     * print "cant Choose This Game\n"
     */
    virtual void cantChooseThisGame() const = 0;
};


#endif //PRINTMASSAGE_H
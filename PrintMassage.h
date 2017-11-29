//
// Created by tchelet on 29/11/17.
//

#ifndef EX3_PRINTMASSAGE_H
#define EX3_PRINTMASSAGE_H

#include "Board.h"
#include "Player.h"

class PrintMassage {
public:
    /**
     * print the counter
     * @param celltype1 celltype
     * @param counter1 counter
     */
    virtual void counter(celltype celltype1 ,int counter1) = 0;
    /**
     * print that there is no possible move.
     */
    virtual void NoPossibleMoves() = 0;
    /**
     * print that was a move and where.
     * @param player player
     * @param point point
     */
    virtual void wasMoves(Player* player, Point point) = 0;
    /**
     * print that cant choose this move.
     */
    virtual void cantChooseThisCell() = 0;
    /**
     * print who win
     * @param b board*
     * @param player1 player*
     * @param player2 player*
     */
    virtual void winner(Board* b, Player* player1, Player* player2) = 0;
    /**
     * print to the player that this is his move.
     * @param playerName string
     */
    virtual void itsYourMove(string playerName) = 0;
    /**
     * print that possible moves.
     * @param options vector<Point>*
     */
    virtual void possibleMoves(vector<Point>* options) = 0;
    /**
     * print to user to enter his move.
     */
    virtual void enterMove() = 0;
    /**
     * print to user to enter only numbers.
     */
    virtual void onlyNumbers() = 0;
};


#endif //EX3_PRINTMASSAGE_H

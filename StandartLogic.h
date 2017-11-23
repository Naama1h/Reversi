/*
 * Naama Harshoshanim
 * 315783217
 * 4/11/17
 */

#ifndef STANDARTLOGIC_H
#define STANDARTLOGIC_H

#include "Logic.h"
#include "Point.h"
#include "Board.h"
#include "string"
#include <list>
#include <vector>
using namespace std;


class StandartLogic : public Logic {
public:
    /**
     * constructor.
     * @param board1
     */
    StandartLogic(Board* board1);
    StandartLogic(const StandartLogic &standartLogic);
    /**
     * destructor.
     */
    virtual ~StandartLogic();
    /**
     * finding the optional cells that the player can choose.
     * returning a vector of optional points.
     * @param c
     * @return vector<Point>*
     */
    virtual vector<Point>* findCells(celltype c);
    /**
     * updating the board after the player chose the cell.
     * @param celltype1
     * @param p
     */
    virtual void updateBoard(celltype celltype1, Point p);
    /**
     * checking if the cell is one of the options.
     * @param p
     * @param vec
     * @return bool
     */
    virtual bool ifCellValid(Point p, vector<Point>* vec);
    /**
     * get of the member optionalCells
     * @return vector<Point>*
     */
    virtual vector<Point>* getOptionalCells() const;
    /**
     * checking the which cells to change according to the cell that the player chose.
     * @param p
     * @param rowDelta
     * @param columnDelta
     * @param c
     * @return bool
     */
    virtual bool checkCells(Point p, int rowDelta, int coulmnDelta, celltype c) const;
    /**
     * changing the cells according to the cell that the player chose.
     * @param p
     * @param rowDelta
     * @param columnDelta
     * @param c
     */
    virtual void makeMove(Point p, int rowDelta, int columnDelta, celltype c);
    /**
     * for each empty cell, check if its an optional cell to the player.
     * @param p
     * @param rowDelta
     * @param columnDelta
     * @param c bool
     * @return
     */
    virtual bool ifCellAnOption(Point p, int rowDelta, int columnDelta, celltype c) const;
    /**
     * checking if the player has more moves.
     * @return bool
     */
    virtual bool ifHaveMoreMoves() const;
    /**
     * return the board.
     * @return Borad*
     */
    virtual Board* getBoard() const;

private:
    // members.
    vector<Point>* optionalCells;
    Board* board1;
};


#endif //STANDARTLOGIC_H

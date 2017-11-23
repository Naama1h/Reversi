/*
 * Naama Harshoshanim
 * 315783217
 * 4/11/17
 */

#ifndef LOGIC_H
#define LOGIC_H

#include "Point.h"
#include "string"
#include "Board.h"
#include <list>
#include <vector>
using namespace std;

class Logic {
public:
    /**
     * constructor.
     */
    Logic() {};
    /**
     * constructor.
     * @param board1
     */
    Logic(Board* board1);
    /**
     * destructor.
     */
    virtual ~Logic() {};
    /**
     * finding the optional cells that the player can choose.
     * returning a vector of optional points.
     * @param c
     * @return vector<Point>*
     */
    virtual vector<Point>* findCells(celltype c) = 0;
    /**
     * updating the board after the player chose the cell.
     * @param celltype1
     * @param p
     */
    virtual void updateBoard(celltype celltype1, Point p) = 0;
    /**
     * checking if the cell is one of the options.
     * @param p
     * @param vec
     * @return bool
     */
    virtual bool ifCellValid(Point p, vector<Point>* vec) = 0;
    /**
     * get of the member optionalCells
     * @return vector<Point>*
     */
    virtual vector<Point>* getOptionalCells() const = 0;
    /**
     * checking the which cells to change according to the cell that the player chose.
     * @param p
     * @param rowDelta
     * @param columnDelta
     * @param c
     * @return bool
     */
    virtual bool checkCells(Point p, int rowDelta, int columnDelta, celltype c) const = 0;
    /**
     * changing the cells according to the cell that the player chose.
     * @param p
     * @param rowDelta
     * @param columnDelta
     * @param c
     */
    virtual void makeMove(Point p, int rowDelta, int columnDelta, celltype c) = 0;
    /**
     * for each empty cell, check if its an optional cell to the player.
     * @param p
     * @param rowDelta
     * @param columnDelta
     * @param c bool
     * @return
     */
    virtual bool ifCellAnOption(Point p, int rowDelta, int columnDelta, celltype c) const = 0;
    /**
     * checking if the player has more moves.
     * @return bool
     */
    virtual bool ifHaveMoreMoves() const = 0;
    /**
    * return the board.
    * @return Borad*
    */
    virtual Board* getBoard() const = 0;
private:
    // members.
    vector<Point>* optionalCells;
    Board* board;
};


#endif //LOGIC_H

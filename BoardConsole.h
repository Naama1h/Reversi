#ifndef BOARD_H_
#define BOARD_H_
/*
 * Naama Harshoshanim
 * 315783217
 * 4/11/17
 */
#include <string>
#include "Board.h"
using namespace std;

class BoardConsole : public Board {
public:
    /**
     * constructor.
     * @param size
     */
    BoardConsole(int size);
    /**
     * constructor.
     */
    BoardConsole();
    /**
     * destructor.
     */
    virtual ~BoardConsole();
    /**
     * printing the board.
     */
    virtual void printBoard() const;
    /**
     * checking if the board is full. abstruct.
     * @return bool
     */
    virtual bool ifFull() const;
    /**
     * checking who wins. abstruct.
     * @return cellType
     */
    virtual celltype whoWins() const;
    /**
     * returnning the board.
     * @return cellType**
     */
    virtual celltype** getBoard() const;
    /**
     * returnning the size.
     * @return int
     */
    virtual int getSize() const;

private:
    // the members.
    int size;
    celltype** board;
};


#endif /* BOARD_H_ */
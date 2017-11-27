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
     * copy constructor
     * @param oldBoardConsole
     */
    BoardConsole(const BoardConsole &oldBoardConsole);
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
     * returning the board.
     * @return cellType**
     */
    virtual celltype** getBoard() const;
    /**
     * returning the size.
     * @return int
     */
    virtual int getSize() const;
    /**
    * returnning the x counter.
    * @return int
    */
    virtual int getXCounter() const;
    /**
    * returning the o counter.
    * @return int
    */
    virtual int getOCounter() const;
    /**
    * seting the x counter.
    */
    virtual void setXCounter(int x);
    /**
    * seting the o counter.
    */
    virtual void setOCounter(int o);
    /**
    * seting the o counter.
    */
    virtual void setSize(int size);
private:
    // the members.
    int size;
    celltype** board;
    int xCounter;
    int oCounter;
};


#endif /* BOARD_H_ */
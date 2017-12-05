/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#ifndef BOARD_H
#define BOARD_H
enum celltype {Black, White, Empty};

class Board {
public:
    virtual ~Board() {};
    /*
     * printing the board. abstruct.
     */
    virtual void printBoard() const = 0;
    /**
     * checking if the board is full. abstruct.
     * @return bool
     */
    virtual bool ifFull() const = 0;
    /**
     * checking who wins. abstruct.
     * @return cellType
     */
    virtual celltype whoWins() const = 0;
    /**
     * returning the board.
     * @return cellType**
     */
    virtual celltype** getBoard() const = 0;
    /**
     * returning the size.
     * @return int
     */
    virtual int getSize() const = 0;
    /**
    * returnning the x counter.
    * @return int
    */
    virtual int getXCounter() const = 0;
    /**
    * returnning the o counter.
    * @return int
    */
    virtual int getOCounter() const = 0;
    /**
    * seturnning the x counter.
    */
    virtual void setXCounter(int x) = 0;
    /**
    * seturnning the o counter.
    */
    virtual void setOCounter(int o) = 0;
    /**
    * implementing ==.
    * @param b Board
    * @return bool
    */
    //virtual bool operator ==(const Board &b) const = 0;
private:
    // the members.
    int size;
    celltype** board;
    int xCounter;
    int oCounter;
};


#endif //BOARD_H
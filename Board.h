/*
 * Naama Harshoshanim
 * 315783217
 * 4/11/17
 */

#ifndef BOARD_H
#define BOARD_H
enum celltype {Black, White, Empty};

class Board {
public:
    /*
     * destructor.
     */
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

private:
    // the members.
    int size;
    celltype** board;
};


#endif //BOARD_H

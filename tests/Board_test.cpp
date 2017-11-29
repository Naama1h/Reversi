/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#include "Board_test.h"
#include "../BoardConsole.h"

Board_test::Board_test() {}
void Board_test::SetUp() {}
void Board_test::TearDown() {}


TEST_F(Board_test, isFull_check) {
BoardConsole boardConsole(4);
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            boardConsole.setXCounter(boardConsole.getXCounter() + 1);
            boardConsole.getBoard()[i][j] = Black;
        }
    }
bool condition = boardConsole.ifFull();
ASSERT_TRUE(condition);
}

TEST_F(Board_test, isntFull_check) {
    BoardConsole boardConsole(4);
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            boardConsole.setXCounter(boardConsole.getXCounter() + 1);
            boardConsole.getBoard()[i][j] = Black;
        }
    }
    bool condition = boardConsole.ifFull();
    ASSERT_FALSE(condition);
}

TEST_F(Board_test, blackWin_check) {
    BoardConsole boardConsole(4);
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            boardConsole.setXCounter(boardConsole.getXCounter() + 1);
            boardConsole.getBoard()[i][j] = Black;
        }
    }
    celltype winner = boardConsole.whoWins();
    ASSERT_EQ(winner, Black);
}

TEST_F(Board_test, whiteWin_check) {
    BoardConsole boardConsole(4);
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            boardConsole.setOCounter(boardConsole.getOCounter() + 1);
            boardConsole.getBoard()[i][j] = White;
        }
    }
    celltype winner = boardConsole.whoWins();
    ASSERT_EQ(winner, White);
}

TEST_F(Board_test, size_check) {
    BoardConsole boardConsole(4);
    int size = boardConsole.getSize();
    ASSERT_EQ(size, 4);
}

TEST_F(Board_test, xCounter_check) {
    BoardConsole boardConsole(4);
    boardConsole.setXCounter(6);
    int xCounter = boardConsole.getXCounter();
    ASSERT_EQ(xCounter, 6);
}

TEST_F(Board_test, oCounter_check) {
    BoardConsole boardConsole(4);
    boardConsole.setOCounter(6);
    int oCounter = boardConsole.getOCounter();
    ASSERT_EQ(oCounter, 6);
}

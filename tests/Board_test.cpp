//
// Created by naama on 11/27/17.
//

#include "Board_test.h"
#include "../BoardConsole.h"

Board_test::Board_test() {}
void Board_test::SetUp() {}
void Board_test::TearDown() {}


TEST_F(Board_test, isFull_check) {
BoardConsole boardConsole(4);
for (int i = 0; i < 4; i++) {
for (int j = 0; j < 4; j++) {
boardConsole.getBoard()[i][j] = Black;
}
}
bool condition = boardConsole.ifFull();
ASSERT_TRUE(condition);
}

//TEST_F()
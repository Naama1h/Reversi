//
// Created by naama on 11/27/17.
//

#ifndef EX3_BOARD_TEST_H
#define EX3_BOARD_TEST_H


#include "../gtest_src/gtest.h"

class Board_test : public testing::Test {
public:
    Board_test();
    virtual void SetUp();
    virtual void TearDown();

};


#endif //EX3_BOARD_TEST_H

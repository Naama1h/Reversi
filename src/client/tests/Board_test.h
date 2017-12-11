/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

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
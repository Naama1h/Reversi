//
// Created by naama on 11/28/17.
//

#include "StandartLogic_test.h"
#include "../BoardConsole.h"
#include "../StandartLogic.h"

void StandartLogic_test::TearDown() {}
void StandartLogic_test::SetUp() {}
StandartLogic_test::StandartLogic_test() {}

TEST_F(StandartLogic_test, findCells_check) {
    BoardConsole boardConsole(4);
    StandartLogic standartLogic(&boardConsole);
    vector<Point>* vector1 = new vector<Point>();
    Point p1(1, 2);
    Point p2(2, 1);
    Point p3(3, 4);
    Point p4(4, 3);
    vector1->push_back(p1);
    vector1->push_back(p2);
    vector1->push_back(p3);
    vector1->push_back(p4);
    vector<Point>* vector2;
    vector2 = standartLogic.findCells(Black);
    ASSERT_EQ(vector1, vector2); // implement operator == in Point
    delete vector1;
    delete vector2;
}

TEST_F(StandartLogic_test, updateBoard_check) {
    BoardConsole boardConsole1(4);
    boardConsole1.getBoard()[0][1] = Black;
    boardConsole1.getBoard()[1][1] = Black;
    BoardConsole boardConsole2(4);
    StandartLogic standartLogic(&boardConsole2);
    Point p(1, 2);
    standartLogic.updateBoard(Black, p);
    ASSERT_EQ(boardConsole1, boardConsole2);
}

TEST_F(StandartLogic_test, checkCells_check) {
    BoardConsole boardConsole1(4);
    StandartLogic standartLogic(&boardConsole1);
    Point p(1, 2);
    bool condition = standartLogic.checkCells(p, 1, 1, Black);
    ASSERT_TRUE(condition);
}
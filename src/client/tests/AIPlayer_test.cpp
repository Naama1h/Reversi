/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#include "AIPlayer_test.h"
#include "../AIPlayer.h"

AIPlayer_test::AIPlayer_test() {}
void AIPlayer_test::SetUp() {}
void AIPlayer_test::TearDown() {}


TEST_F(AIPlayer_test, membersALPlayer_check) {
    AIPlayer aiPlayer("Moshe",White);
    ASSERT_EQ("Moshe",aiPlayer.getName());
    ASSERT_EQ(White,aiPlayer.getCellType());
}
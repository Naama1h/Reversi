/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#include "PersonP_teset.h"
#include "../PersonP.h"

PersonP_teset::PersonP_teset() {}
void PersonP_teset::SetUp() {}
void PersonP_teset::TearDown() {}


TEST_F(PersonP_teset, membersALPlayer_check) {
    PersonP pPlayer("Moshe",White);
    ASSERT_EQ("Moshe",pPlayer.getName());
    ASSERT_EQ(White,pPlayer.getCellType());
}

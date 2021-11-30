#ifndef __PALADIN_TESTS_HPP__
#define __PALADIN_TESTS_HPP__

#include "gtest/gtest.h"
#include "../roles/paladin.hpp"

// constructor test
TEST(PaladinTest, ConstructorTest) {
    Paladin paladin;
    EXPECT_EQ(paladin.getRole(), "Paladin");
    EXPECT_EQ(paladin.getHealth(), 120);
    EXPECT_EQ(paladin.getMana(), 100);
    // EXPECT_EQ(paladin.getArmor(), 120);
}

// getrole test
TEST(PaladinTest, GetRoleTest1) {
    Paladin paladin;
    EXPECT_EQ(paladin.getRole(), "Paladin");
}

// TESTS BELOW NOT FINALIZED
// // attack test 1
// TEST(PaladinTest, AttackTest1) {
//     Paladin paladin;
//     EXPECT_EQ(paladin.attack(), "Paladin attacked for " << " damage. \n");
// }

// // defend test 1
// TEST(PaladinTest, DefendTest1) {
//     Paladin paladin;
//     EXPECT_EQ(paladin.defend(), "Paladin defended for " << " ");
// }

// // castSpell test 1
// TEST(PaladinTest, CastSpellTest1) {
//     Paladin paladin;
//     EXPECT_EQ(paladin.castSpell(),  << " does damage for \n");
// }






#endif

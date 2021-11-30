#ifndef __WARRIOR_TESTS_HPP__
#define __WARRIOR_TESTS_HPP__

#include "gtest/gtest.h"
#include "../roles/warrior.hpp"

TEST(WarriorTests, ConstructorTest) {
    Warrior warrior;
    EXPECT_EQ(warrior.getRole(), "Warrior");
    EXPECT_EQ(warrior.getHealth(), 100);
    EXPECT_EQ(warrior.getMana(), 20);
    //EXPECT_EQ(warrior.getArmor(), 50);
}

TEST(WarriorTests, GetRoleTest) {
    Warrior warrior;
    EXPECT_EQ(warrior.getRole(), "Warrior");
}

// TESTS BELOW ARE NOT FINALIZED
// TEST(WarriorTests, AttackTest) {
//     Warrior warrior;
//     EXPECT_EQ(warrior.attack(), "Warrior attacked for  damage. \n");
// }

// TEST(WarriorTests, DefendTest) {
//     Warrior warrior;
//     EXPECT_EQ(warrior.defend(), "Warrior defended itself for  damage. \n");
// }

// TEST(WarriorTests, CastSpellTest) {
//     Warrior warrior;
//     EXPECT_EQ(warrior.castSpell(), "Spell does damage for \n");
// }



#endif

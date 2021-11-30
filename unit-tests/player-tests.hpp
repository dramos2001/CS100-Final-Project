// Contains tests for the player class
// tests each function in player class with different scenarios/cases

#ifndef __PLAYER_TESTS_HPP__
#define __PLAYER_TESTS_HPP__

#include "gtest/gtest.h"
#include "../Player.hpp"
#include "../Item.hpp"
#include <string>

// CONSTRUCTOR TEST 1
// Tests constructor with parameters
TEST(PlayerTest, ConstructorTest1) {
    Player player("John Doe", "Wizard");
    EXPECT_EQ(player.getName(), "John Doe");
    EXPECT_EQ(player.getRole(), "Wizard");
    EXPECT_EQ(player.getLevel(), 1);
    EXPECT_EQ(player.getEXP(), 0);
    EXPECT_EQ(player.getPoints(), 20);
    EXPECT_EQ(player.getHealth(), 100);
    EXPECT_EQ(player.getMana(), 20);
    // might need to add more test cases
}

// CONSTRUCTOR TEST 2
TEST(PlayerTest, ConstructorTest2) {
    Player player;
    EXPECT_EQ(player.getName(), "");
    EXPECT_EQ(player.getRole(), "");
    EXPECT_EQ(player.getLevel(), 1);
    EXPECT_EQ(player.getEXP(), 0);
    EXPECT_EQ(player.getPoints(), 20);
    EXPECT_EQ(player.getHealth(), 100);
    EXPECT_EQ(player.getMana(), 20);
    // might need to add more test cases here as well
}

// getRole test 1
TEST(PlayerTest, GetRoleTest1) {
    Player player("Damian", "Wizard");
    std::string role = player.getRole();
    EXPECT_EQ(role, "Wizard");
}

// getRole test 2
TEST(PlayerTest, GetRoleTest2) {
    Player player("Damian", "Paladin");
    std::string role = player.getRole();
    EXPECT_EQ(role, "Paladin");
}

// getName test 1
TEST(PlayerTest, GetNameTest1) {
    Player player("Damian");
    std::string name = player.getName();
    EXPECT_EQ(name, "Damian");
}

// getname test 2
TEST(PlayerTest, GetNameTest2) {
    std::string name = "Hubert Blaine Wolfeschlegelsteinhausenbergerdorff Sr.";
    Player player(name);
    EXPECT_EQ(player.getName(), name);
}

// getLevel test 1
TEST(PlayerTest, GetLevelTest1) {
    Player player("Damian", "Warrior");
    EXPECT_EQ(player.getLevel(), 1);
}

// get level test 2
TEST(PlayerTest, GetLevelTest2) {
    Player player("Hubert", "Paladin");
    player.setLevel(100);
    EXPECT_EQ(player.getLevel(), 100);
}

// getEXP test 1
TEST(PlayerTest, GetEXPTest1) {
    Player player("Damian", "Warrior");
    EXPECT_EQ(player.getEXP(), 0);
}

// getEXP test 2
TEST(PlayerTest, GetEXPTest2) {
    Player player("Damian", "Warrior");
    player.setEXP(1000);
    EXPECT_EQ(player.getEXP(), 1000);
}

// getHealth test 1
TEST(PlayerTest, GetHealthTest1) {
    Player player("Damian", "Warrior");
    EXPECT_EQ(player.getHealth(), 100);
}

// getHealth test 2
TEST(PlayerTest, GetHealthTest2) {
    Player player("Daniel", "Warrior");
    player.takeDamage(87);
    EXPECT_EQ(player.getHealth(), 13);
}

// getHealth test 3
TEST(PlayerTest, GetHealthTest3) {
    Player player("Damian", "Wizard");
    player.setHealth(20);
    EXPECT_EQ(player.getHealth(), 20);
}


// getMana test 1
TEST(PlayerTest, GetManaTest1) {
    Player player("Damian", "Paladin");
    EXPECT_EQ(player.getMana(), 20);
}

// getmana test 2
TEST(PlayerTest, GetManaTest2) {
    Player player("Damian", "Warrior");
    player.setMana(17);
    EXPECT_EQ(player.getMana(), 17);
}

// getPoints test 1
TEST(PlayerTest, GetPointsTest1) {
    Player player("Daniel", "Paladin");
    EXPECT_EQ(player.getPoints(), 20);
}

// getPoints test 2
TEST(PlayerTest, GetPointsTest2) {
    Player player("Damian", "Warrior");
    player.setPoints(123);
    EXPECT_EQ(player.getPoints(), 123);
}

// setRole test 1
TEST(PlayerTest, SetRoleTest1) {
    Player player("Damian", "Paladin");
    player.setRole("Warrior");
    EXPECT_EQ(player.getRole(), "Warrior");
}

// setRole test 2
TEST(PlayerTest, SetRoleTest2) {
    Player player("Damian", "Warrior");
    player.setRole("Warrior");
    EXPECT_EQ(player.getRole(), "Warrior");
}

// setName test 1
TEST(PlayerTest, SetNameTest1) {
    Player player("I", "Wizard");
    player.setName("Blaise Bailey III");
    EXPECT_EQ(player.getName(), "Blaise Bailey III");
}


// setName test 2
TEST(PlayerTest, SetNameTest2) {
    Player player("Damian", "Paladin");
    player.setName("Daniel");
    EXPECT_EQ(player.getName(), "Daniel");
}

// setLevel test 1
TEST(PlayerTest, SetLevelTest1) {
    Player player("Damian", "Warrior");
    player.setLevel(100);
    EXPECT_EQ(player.getLevel(), 100);
}

// setlevel test 2
TEST(PlayerTest, SetLevelTest2) {
    Player player("Person", "Wizard");
    player.setLevel(2);
    EXPECT_EQ(player.getLevel(), 2);
}

// setEXP test 1
TEST(PlayerTest, SetEXPTest1) {
    Player player("Damian", "Warrior");
    player.setEXP(192748);
    EXPECT_EQ(player.getEXP(), 192748);
}

// setEXP test 2
TEST(PlayerTest, SetEXPTest2) {
    Player player("Damian", "Warrior");
    player.setEXP(0);
    EXPECT_EQ(player.getEXP(), 0);
}

// setPoints test 1

TEST(PlayerTest, SetPointsTest1) {
    Player player("Man", "Wizard");
    player.setPoints(48);
    EXPECT_EQ(player.getPoints(), 48);
}

// setPoints test 2
TEST(PlayerTest, SetPointsTest2) {
    Player player("Damian", "Warrior");
    player.setPoints(0);
    EXPECT_EQ(player.getPoints(), 0);
}

// setHealth test 1

TEST(PlayerTest, SetHealthTest1) {
    Player player("Damian", "Warrior");
    player.setHealth(30);
    EXPECT_EQ(player.getHealth(), 30);
}

// setHealth test 2

TEST(PlayerTest, SetHealthTest2) {
    Player player("Jason", "Wizard");
    player.setHealth(0);
    EXPECT_EQ(player.getHealth(), 0);
}

// setMana test 1

TEST(PlayerTest, SetManaTest1) {
    Player player("Damian", "Warrior");
    player.setMana(39);
    EXPECT_EQ(player.getMana(), 39);
}

// setmana test 2
TEST(PlayerTest, SetManaTest2) {
    Player player("Dude", "Paladin");
    player.setMana(100);
    EXPECT_EQ(player.getMana(), 100);
}

// setArmor test 1
// TEST(PlaterTest, SetASmorTest1) {
//     Player player("Damian", "warrior");
//     player.setArmor(100)
//     EXPECT_EQ(player., 100);
// }

// // setArmor test 2
// // TEST(PlayerTest, SetArmorTest2) {
// //     Player player();
// //     player.setArmor(0);
// //     EXPECT_EQ(player.(), 0);
// // }

// takeDamage test 1
TEST(PlayerTest, TakeDamageTest1) {
    Player player("Daniel", "Paladin");
    player.takeDamage(99);
    EXPECT_EQ(player.getHealth(), 1); // 100 - 99 = 1 health
}

// takedamage test 2
TEST(PlayerTest, TakeDamageTest2) {
    Player player("Blaise Bailey", "Warrior");
    player.takeDamage(60);
    EXPECT_EQ(player.getHealth(), 40); // 100 - 60 = -10 so health is set to 0
}


#endif

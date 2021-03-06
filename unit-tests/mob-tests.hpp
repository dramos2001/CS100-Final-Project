#ifndef __MOB_TESTS_HPP__
#define __MOB_TESTS_HPP__

#include "gtest/gtest.h"
#include "../mob.h"

// getname test 1
TEST(MobTests, GetNameTest1) {
    Mob mob("Demon Dragon", "Dragon");
    EXPECT_EQ(mob.getName(), "Demon Dragon");
}

// getname test 2
TEST(MobTests, GetNameTest2) {
    Mob mob("Frank", "Dragon");
    EXPECT_EQ(mob.getName(), "Frank");
}

// getMobType test 1
TEST(MobTests, GetMobTest1) {
    Mob mob("Demon Dragon", "Dragon");
    EXPECT_EQ(mob.getMobType(), "Dragon");
}

// getMobType test 2
TEST(MobTests, GetMobTest2) {
    Mob mob("Frank", "Witch");
    EXPECT_EQ(mob.getMobType(), "Witch");
}

// setLevel test 1
TEST(MobTests, SetLevelTest1) {
    Mob mob("Mob", "Dragon");
    mob.setLevel(29);
    EXPECT_EQ(mob.getLevel(), 29);
}

// setlevel test 2
TEST(MobTests, SetLevelTest2) {
    Mob mob("Mob", "Witch");
    mob.setLevel(1);
    EXPECT_EQ(mob.getLevel(), 1);
}

// getLevel test 1
TEST(MobTests, GetLevelTest1) {
    Mob mob("bertha", "Witch");
    EXPECT_EQ(mob.getLevel(), 1);
}

// getLevel test 2
TEST(MobTests, GetLevelTest2) {
    Mob mob("Dee", "Witch");
    mob.setLevel(1847);
    EXPECT_EQ(mob.getLevel(), 1847);
}

// setEXP test 1
TEST(MobTests, SetEXPTest1) {
    Mob mob("Dragon", "Dragon");
    mob.setExp(99);
    EXPECT_EQ(mob.getExp(), 99);
}

// setEXP test 2
TEST(MobTests, SetEXPTest2) {
    Mob mob("Mob", "Dragon");
    mob.setExp(1);
    EXPECT_EQ(mob.getExp(), 1);
}

// getEXP test 1
TEST(MobTests, GetEXPTest1) {
    Mob mob("Dragon", "Dragon");
    EXPECT_EQ(mob.getExp(), 0);
}

// getEXP test 2
TEST(MobTests, GetEXPTest2) {
    Mob mob("Imagine Dragons", "Dragon");
    mob.setExp(69);
    EXPECT_EQ(mob.getExp(), 69);
}

// setPOints test 1
TEST(MobTests, SetPointsTest1) {
    Mob mob("Sweet Dee", "Witch");
    mob.setPoints(462);
    EXPECT_EQ(mob.getPoints(), 462);
}

// setPoints test 2
TEST(MobTests, SetPointsTest2) {
    Mob mob("Sweet Dee", "Witch");
    mob.setPoints(1);
    EXPECT_EQ(mob.getPoints(), 1);
}

// getPoints test 1
TEST(MobTests, GetPointsTest1) {
    Mob mob("Man", "Witch");
    mob.setPoints(273);
    EXPECT_EQ(mob.getPoints(), 273);
}

// getPoints test 2
TEST(MobTests, GetPointsTest2) {
    Mob mob("Witch", "Witch");
    EXPECT_TRUE(mob.getPoints() > 0);
}

// setDefense test 1
TEST(MobTests, SetDefenseTest1) {
    Mob mob("Cool Dragon", "Dragon");
    mob.setDefense(89);
    EXPECT_EQ(mob.getDefense(), 89);
}

// setDefense test 2
TEST(MobTests, SetDefenseTest2) {
    Mob mob("Even Cooler Dragon", "Dragon");
    mob.setDefense(10);
    EXPECT_EQ(mob.getDefense(), 10);
}

// getDefense test 1
TEST(MobTests, GetDefenseTest1) {
    Mob mob("Weakdragon", "Dragon");
    EXPECT_EQ(mob.getDefense(), 10);
}

// getDefense test 2
TEST(MobTests, GetDefenseTest2) {
    Mob mob("Cool Dragon", "Dragon");
    mob.setDefense(99);
    EXPECT_EQ(mob.getDefense(), 99);
}

// setHealth test 1
TEST(MobTests, SetHealthTest1) {
    Mob mob("Cool witch", "Witch");
    mob.setHealth(99);
    EXPECT_EQ(mob.getHealth(), 99);
}

// setHealth test 2
TEST(MobTests, SetHealthTest2) {
    Mob mob("Even cooler witch", "Witch");
    mob.setHealth(77);
    EXPECT_EQ(mob.getHealth(), 77);
}

// getHealth test 1
TEST(MobTests, GetHealthTest1) { 
    Mob mob("basic witch", "Witch");
    EXPECT_EQ(mob.getHealth(), 50);
}

// getHealth test 2
TEST(MobTests, GetHealthTest2) {
    Mob mob("Healthy dragon", "Dragon");
    mob.setHealth(87);
    EXPECT_EQ(mob.getHealth(), 87);
}

// setDamage test 1
TEST(MobTests, SetDamageTest1) {
    Mob mob("Weak Dragon", "Dragon");
    mob.setDamage(8);
    EXPECT_EQ(mob.getDamage(), 8);
}

// setDamage test 1
TEST(MobTests, SetDamageTest2) {
    Mob mob("Weak Witch", "Witch");
    mob.setDamage(20);
    EXPECT_EQ(mob.getDamage(), 20);
}

// getDamage test 1
TEST(MobTests, GetDamageTest1) {
    Mob mob("Basic mob", "Witch");
    EXPECT_EQ(mob.getDamage(), 20);
}

// getDamage test 2
TEST(MobTests, GetDamageTest2) {
    Mob mob("Strong mob", "Dragon");
    mob.setDamage(89);
    EXPECT_EQ(mob.getDamage(), 89);
}

// takeDamage test 1
TEST(MobTests, TakeDamageTest1) {
    Mob mob("Dead Witch", "Witch");
    mob.takeDamage(99);
    EXPECT_EQ(mob.getHealth(), 0); // 50 - 99 < 0 so health becomes 0
}

// takeDamage test 2
TEST(MobTests, TakeDamageTest2) {
    Mob mob("Surviving mob", "Dragon");
    mob.takeDamage(10);
    EXPECT_EQ(mob.getHealth(), 40); // 50 - 10 = 40
}

// need tests for attack() and defend()




#endif

// Contains tests for the bag class
// Tests each function of the bag class in different scenarios/cases

#ifndef __BAG_TESTS_HPP__
#define __BAG_TESTS_HPP__

#include "gtest/gtest.h"
#include "bag.h"
#include "potion.hpp"
#include "spell.hpp"
#include "weapon.hpp"

// displayBag test 1
TEST(BagTest, DisplayBagTest1) {
    Bag bag;
    Item item = new Potion();
    bag.add(item);
    EXPECT_EQ(bag.displayBag(), "Your bag contains: \n" );
}

// displayBag test 2
TEST(BagTest, DisplayBagTest2) {
    Bag bag;
    Item spell = new Spell();
    Item potion = new Potion();
    Item weapon = new Weapon();
    bag.add(spell);
    bag.add(potion);
    bag.add(weapon);
    EXPECT_EQ(bag.displayBag(), "");
}

// displayBag test 3
TEST(BagTest, DisplayBagTest3) {
    Bag bag;
    EXPECT_EQ(bag.displayBag(), "Your bag contains: \n \n");
}

// add test 1
TEST(BagTest, AddTest1) {
    Bag bag;
    Item item = new Potion();
    bag.add(item);
    EXPECT_FALSE(bag.empty());
}

// remove test 1
TEST(BagTest, RemoveTest1) {
    Bag bag;
    Item item = new Potion();
    bag.add(item);
    bag.remove();
    EXPECT_TRUE(bag.empty());
}

// empty test 1
TEST(BagTest, EmptyTest1) {
    Bag bag;
    Item potion = new Potion();
    Item weapon = new Weapon();
    bag.add(potion);
    bag.add(weapon);
    bag.remove();
    bag.remove();
    EXPECT_TRUE(bag.empty());
}

// empty test 2
TEST(BagTest, EmptyTest1) {
    Bag bag;
    Item potion = new Potion();
    Item weapon = new Weapon();
    Item spell = new Spell();
    bag.add(potion);
    bag.add(weapon);
    bag.add(spell);
    EXPECT_FALSE(bag.empty());
}

// need tests for add, remove
// tests for displaybag need to be finished

#endif
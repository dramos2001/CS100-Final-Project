// Contains tests for the bag class
// Tests each function of the bag class in different scenarios/cases

#ifndef __BAG_TESTS_HPP__
#define __BAG_TESTS_HPP__

#include "gtest/gtest.h"
#include "../bag.h"
#include "../items/potion.hpp"
#include "../items/spell.hpp"
#include "../items/weapon.hpp"
#include <ostream>

// displayBag test 1
TEST(BagTest, DisplayBagTest1) {
    Bag bag;
    std::ostringstream output;
    Item item("Potion");
    bag.add(item);
    bag.displayBag(output);
    EXPECT_EQ(output.str(), "Your bag contains: 1 potions\n" );
}

// displayBag test 2
TEST(BagTest, DisplayBagTest2) {
    Bag bag;
    std::ostringstream output;
    Item spell("Spell");
    Item potion("Potion");
    Item weapon("weapon");
    bag.add(spell);
    bag.add(potion);
    bag.add(weapon);
    bag.displayBag(output);
    EXPECT_EQ(output.str(), "Your bag contains: 3 potions\n");
}

// displayBag test 3
TEST(BagTest, DisplayBagTest3) {
    Bag bag;
    std::ostringstream output;
    bag.displayBag(output);
    EXPECT_EQ(output.str(), "Your bag contains: 0 potions\n");
}

// add test 1
TEST(BagTest, AddTest1) {
    Bag bag;
    Item item("Potion");
    bag.add(item);
    EXPECT_FALSE(bag.empty());
}

// remove test 1
TEST(BagTest, RemoveTest1) {
    Bag bag;
    Item item("Potion");
    bag.add(item);
    bag.remove();
    EXPECT_TRUE(bag.empty());
}

// empty test 1
TEST(BagTest, EmptyTest1) {
    Bag bag;
    Item potion("Potion");
    Item weapon("Weapon");
    bag.add(potion);
    bag.add(weapon);
    bag.remove();
    bag.remove();
    EXPECT_TRUE(bag.empty());
}

// empty test 2
TEST(BagTest, EmptyTest2) {
    Bag bag;
    Item potion("Potion");
    Item weapon("Weapon");
    Item spell("Spell");
    bag.add(potion);
    bag.add(weapon);
    bag.add(spell);
    EXPECT_FALSE(bag.empty());
}

// need tests for add, remove
// tests for displaybag need to be finished

#endif

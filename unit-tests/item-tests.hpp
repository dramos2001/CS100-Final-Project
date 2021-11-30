// Contains tests for the item class
// Tests each function in item class with different scenarios/cases

#ifndef __ITEM_TESTS_HPP__
#define __ITEM_TESTS_HPP__

#include "gtest/gtest.h"
#include "../Item.hpp"
#include <string>

// constructor test 1
TEST(ItemTests, ConstTest1) {
    Item items("Potion");
    EXPECT_EQ(items.getItemName(), "Potion");
}

// constructor test 2
TEST(ItemTests, ConstTest2) {
    Item items("Spell");
    EXPECT_EQ(items.getItemName(), "Spell");
}

// constructor test 3
TEST(ItemTests, ConstTest3) {
    Item items("Weapon");
    EXPECT_EQ(items.getItemName(), "Weapon");
}

// getItemName test 1
TEST(ItemTests, GetItemNameTest1) {
    Item items("Weapon");
    EXPECT_EQ(items.getItemName(), "Weapon");
}

// getItemName test 2
TEST(ItemTests, GetItemNameTest2) {
    Item items("Spell");
    items.setItemName("Weapon");
    EXPECT_EQ(items.getItemName(), "Weapon");
}

// getDescription test 1
TEST(ItemTests, GetDescriptionTest1) {
    Item items("Weapon");
    std::string description = "Iron sword with wood handle";
    items.setDescription(description);
    EXPECT_EQ(items.getDescription(), description);
}

// getDescription test 2
TEST(ItemTests, GetDescriptionTest2) {
    Item items("Spell");
    std::string description = "Makes your opponent attack themselves";
    items.setDescription(description);
    EXPECT_EQ(items.getDescription(), description);
}

// getQuantity test 1
TEST(ItemTests, GetQuantityTest1) {
    Item items("Weapon");
    items.setQuantity(3);
    EXPECT_EQ(items.getQuantity(), 3);
}

// getQuantity test 2
TEST(ItemTests, GetQuantityTest2) {
    Item items("Potion");
    items.setQuantity(1);
    EXPECT_EQ(items.getQuantity(), 1);
}

// setItemName test 1
TEST(ItemTests, SetNameTest1) {
    Item items("Weapon");
    items.setItemName("Weapon");
    EXPECT_EQ(items.getItemName(), "Weapon");
}

// setItemName test 2
TEST(ItemTests, SetNameTest2) {
    Item items("Weapon");
    items.setItemName("Spell");
    EXPECT_EQ(items.getItemName(), "Spell");
}

// setDescription test 1
TEST(ItemTests, SetDescriptionTest1) {
    Item items("Weapon");
    std::string description = "Small stainless steel dagger";
    items.setDescription(description);
    EXPECT_EQ(items.getDescription(), description);
}

// setDescription test 2
TEST(ItemTests, SetDescriptionTest2) {
    Item items("Potion");
    std::string description = "Restores health to 100%";
    items.setDescription(description);
    EXPECT_EQ(items.getDescription(), description);
}

// setQuantity test 1
TEST(ItemTests, SetQuantityTest1) {
    Item items("Weapon");
    items.setQuantity(100);
    EXPECT_EQ(items.getQuantity(), 100);
}

// setQuantity test 2
TEST(ItemTests, SetQuantityTest2) {
    Item items("Potion");
    items.setQuantity(420);
    EXPECT_EQ(items.getQuantity(), 420);
}

// setQuantity test 1
TEST(ItemTests, SetQuantityTest3) {
    Item items("Weapon");
    items.setQuantity(100);
    EXPECT_EQ(items.getQuantity(), 100);
}

// need tests for castSpell, useWeapon, and usePotion



#endif

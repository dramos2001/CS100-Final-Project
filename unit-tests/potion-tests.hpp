#ifndef __POTION_TESTS_HPP__
#define __POTION_TESTS_HPP__

#include "gtest/gtest.h"
#include "../items/potion.hpp"

// constuctor test
TEST(PotionTests, ConstructorTest1) {
    Potion potion;
    EXPECT_EQ(potion.getDescription(), "Healed 20 HP");
    EXPECT_EQ(potion.getItemName(), "Potion");
    EXPECT_EQ(potion.getQuantity(), 5);
}

// getName test
TEST(PotionTests, GetNameTest) {
    Potion potion;
    EXPECT_EQ(potion.getItemName(), "Potion");
}

// getDescription test
TEST(PotionTests, GetDescriptionTest) {
    Potion potion;
    EXPECT_EQ(potion.getDescription(), "Healed 20 HP");
}

// getQuantity test
TEST(PotionTests, GetQuantityTest) {
    Potion potion;
    EXPECT_EQ(potion.getQuantity(), 5);
}


#endif

#ifndef __WEAPON_TESTS_HPP__
#define __WEAPON_TESTS_HPP__

#include "gtest/gtest.h"
#include "../items/weapon.hpp"

TEST(WeaponsTests, ConstructorTest) {
    Weapon weapon;
    EXPECT_EQ(weapon.getItemName(), "sword");
    EXPECT_EQ(weapon.getDescription(), "");
    EXPECT_EQ(weapon.getQuantity(), 2);
}

TEST(WeaponsTests, GetNameTest) {
    Weapon weapon;
    EXPECT_EQ(weapon.getItemName(), "sword");
}

TEST(WeaponsTests, GetDescriptionTest) {
    Weapon weapon;
    EXPECT_EQ(weapon.getDescription(), "");
}

TEST(WeaponsTests, GetQuantityTest) {
    Weapon weapon;
    EXPECT_EQ(weapon.getQuantity(), 2);
}

//TEST(WeaponsTests, UseWeaponTest) {
//    Weapon weapon;  
//}


#endif

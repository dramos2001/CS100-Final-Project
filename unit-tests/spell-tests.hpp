#ifndef __SPELL_TESTS_HPP__
#define __SPELL_TESTS_HPP__

#include "gtest/gtest.h"
#include "items/spell.hpp"

TEST(SpellTests, ConstructorTest) {
    Spell spell;
    EXPECT_EQ(spell.getItemName(), "spell");
    EXPECT_EQ(spell.getDescription(), "");
}

TEST(SpellTests, GetNameTest) {
    Spell spell;
    EXPECT_EQ(spell.getItemName(), "spell");
}

TEST(SpellTests, GetDescriptionTest) {
    Spell spell;
    EXPECT_EQ(spell.getDescription(), "");
}

TEST(SpellTests, CastSpellTest) {
    Spell spell;
}

#endif
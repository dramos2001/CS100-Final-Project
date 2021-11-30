#ifndef __WIZARD_TESTS_HPP__
#define __WIZARD_TESTS_HPP__

#include "gtest/gtest.h"
#include "roles/wizard.hpp"

TEST(WizardTests, ConstructorTest) {
    Wizard wizard;
    EXPECT_EQ(wizard.getRole(), "Wizard");
    EXPECT_EQ(wizard.getHealth(), 100);
    EXPECT_EQ(wizard.getMana(), 130);
    //EXPECT_EQ(wizard.getArmor(), 20);
    //EXPECT_EQ(wizard.getMagic(), 50);
}

TEST(WizardTests, GetRoleTest) {
    Wizard wizard;
    EXPECT_EQ(wizard.getRole(), "Wizard");
}

// TESTS BELOW ARE NOT FINALIZED
// TEST(WizardTests, AttackTest) {
//     Wizard wizard;
//     EXPECT_EQ(wizard.attack(), "Wizard attacked for  damage. \n");
// }

// TEST(WizardTests, CastSpellTest) {
//     Wizard wizard;
//     EXPECT_EQ(wizard.castSpell(), "Spell does damage for  \n");
// }

// TEST(WizardTests, DefendTest) {
//     Wizard wizard;
//     EXPECT_EQ(wizard.defend(), "Wizard defended for  damage. \n");
// }



#endif
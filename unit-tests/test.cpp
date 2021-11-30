// Contains all tests and test suites for the project

#include "gtest/gtest.h"

#include "player-tests.hpp"
#include "game-tests.hpp"
#include "bag-tests.hpp"
#include "item-tests.hpp"
#include "mob-tests.hpp"
#include "paladin-tests.hpp"
#include "warrior-tests.hpp"
#include "wizard-tests.hpp"
#include "potion-tests.hpp"
#include "spell-tests.hpp"
#include "weapon-tests.hpp"

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

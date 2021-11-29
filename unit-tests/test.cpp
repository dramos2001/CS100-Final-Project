// Contains all tests and test suites for the project

#include "gtest/gtest.h"

#include "player-tests.hpp"
// #include "game-tests.hpp"
// #include "bag-tests.hpp"
// #include "item-tests.hpp"
// #include "main-tests.hpp"

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

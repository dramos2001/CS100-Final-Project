// Contains tests for the game class
// Tests each function in game class with different scenarios/cases

#ifndef __GAME_TESTS_HPP__
#define __GAME_TESTS_HPP__

#include "gtest/gtest.h"
#include <sstream>
#include <iostream>

#include "../game.hpp"
#include "../Player.hpp"

TEST(gameStartTest, StartTest) {
    Game game; 
    int option;
    option = game.start();
   
    EXPECT_EQ(1, option); 
    EXPECT_EQ(2, option);

}

TEST(CreatePlayerTest, CreatePlayer) {
    Game game; 
    Player p; 
    std::stringstream s; 
    p = game.createPlayer(); 
    EXPECT_EQ(p.getRole(), s.str()); 
    EXPECT_EQ(p.getName(), s.str());
     
}


#endif

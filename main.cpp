//#include <gtest/gtest.h>

#include <iostream>
#include <cstdlib>
using namespace std;

// class definitions
#include "game.hpp"
#include "Player.hpp"


int main() {
    Game game;
    Player player;  
    int choice = 0; 
    string role = "";

    choice = game.start();
    if (choice == 2) {
	cout << "Thanks for playing, until next time...\n";
	exit(EXIT_SUCESS);
    }

    cout << "Wise choice\n";
    cout << "Choose your role. Your options are:\n";
    cout << "1. Paladin\n";
    cout << "2. Warrior\n";
    cout << "3. Wizard\n";
    cin >> choice; 
    switch(choice)
    {
    case 1: player.setRole("Paladin"); break; 
    case 2: player.setRole("Warrior"); break;
    case 3: player.setRole("Wizard"); break; 
    default: cout << "invalid choice." << endl; break; 
    };
    
    cout << "Great!\nNow choose your mob choice:" << endl; 

}

/*
int main(int argc, char **argv) 
{ 
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}*/


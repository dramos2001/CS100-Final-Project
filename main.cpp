#include <iostream>
#include <cstdlib>
#include <random>

// class definitions
#include "game.hpp"
#include "Player.hpp"

// USING STATEMENTS
using std::cout;
using std::endl;
using std::cin;


// MAIN DRIVER CODE STARTS HERE
int main() {
    Game game;
    int choice = 0;

    choice = game.start();
    if (choice == 2) {
        cout << "Thanks for playing, until next time...\n";
        exit(EXIT_SUCCESS);

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
    
    cout << "Great!\n" << endl; 
    // set up random choice for mob: mad king, witch, dragon. 


    return 0;
}


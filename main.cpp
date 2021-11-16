#include <iostream>
#include <cstdlib>

// class definitions
#include "game.hpp"

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
    // set player role using choice here:


    return 0;
}


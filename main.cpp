#include <iostream>
#include <cstdlib>

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
    Player player;
    int choice = 0;

    choice = game.start();
    if (choice == 2) {
        cout << "Thanks for playing, until next time...\n";
        exit(EXIT_SUCCESS);
    }
    cout << "Wise choice\n";

    
    player = game.createPlayer();


    return 0;
}


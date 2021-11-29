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
    if (choice != 1) {
        cout << "Thanks for playing, until next time...\n";
        exit(EXIT_SUCCESS);
    }
    cout << "Wise choice\n";
    // setup player specs by calling createPlayer function
    player = game.createPlayer();

    game.intro(player);
    choice = game.menu();

    while (player.getHealth() > 0 || choice != 0) {
        choice = game.menu();
        
        switch (choice)
        {
        // PLAYER HAS ENDED GAME
        case 0:
            cout << "\n\nGoodbye, sad to see you go...\n";
            player.printStats();
            exit(EXIT_SUCCESS);
            break;
        // PLAYER WANTS TO PRINT THEIR STATS
        case 1:
            player.printStats();
            break;
        // PLAYER WANTS TO START A NEW QUEST
        case 2:
            // start quest
        // PLAYER WANTS TO ENTER THE ITEM SHOP
        case 3:
            // enter item shop
        // INVALID INPUT
        default:
            cout << "Error, invalid input...\n";
            break;
        }

    }


    return 0;
}


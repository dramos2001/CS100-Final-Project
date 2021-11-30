#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>

// class definitions
#include "game.hpp"
#include "Player.hpp"
#include "mob.h"

// USING STATEMENTS
using std::cout;
using std::endl;
using std::cin;


// MAIN DRIVER CODE STARTS HERE
int main() {
    srand(time(NULL)); // initialize random seed.

    const string monsters[3] = {"mad king", "witch", "dragon"};

    Game game;
    Player player;
    Bag bag;
    int choice = 0;
    
    choice = game.start();
    if (choice == 2) {
        cout << "Thanks for playing, until next time...\n";
        exit(EXIT_SUCCESS);
    }
    cout << "Wise choice.\n";
    player = game.createPlayer();
    player.printStats();

    // fight the first mob
    int randomMob = rand() % 3;
    Mob mob(monsters[randomMob], monsters[randomMob]);
    game.battleMob(player, mob, bag);

    // fight the second mob
    randomMob = rand() % 3;
    Mob mob2(monsters[randomMob], monsters[randomMob]);
    game.battleMob(player, mob2, bag);

    // fight the third mob
    randomMob = rand() % 3;
    Mob mob3(monsters[randomMob], monsters[randomMob]);
    game.battleMob(player, mob3, bag);
    
    if (player.getHealth() > 0) {
	      game.victory();
        player.printStats();
    }
    if (player.getHealth() <= 0) {
        game.death();
        player.printStats(); 
    }
  
    return 0;
}


#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>

// class definitions
#include "game.hpp"
#include "Player.hpp"

// USING STATEMENTS
using std::cout;
using std::endl;
using std::cin;


// MAIN DRIVER CODE STARTS HERE
int main() {
    srand(time(NULL)); // initialize random seed.

    const string monsters[3] = {"mad king", "witch", "dragon"};
    int randomMob = rand() % 4; 

    Game game;
    Player player;

    int choice = 0;

    choice = game.start();
    if (choice == 2) {
        cout << "Thanks for playing, until next time...\n";
        exit(EXIT_SUCCESS);
    }

    cout << "Wise choice.\n";
 
    player = game.createPlayer();

    Mob mob(monsters[randomMob], monsters[randomMob]);

    if (player.getRole() == "Paladin") {
        cout << "Your role = Paladin. \nThe mob you will be fighting is: "; 
        cout << monsters[randomMob] << endl; 
        
    }
    else if (player.getRole() == "Warrior"){ 
        cout << "Your role = Warrior. \nThe mob you will be fighting is: "; 
        cout << monsters[randomMob] << endl; 
        
    }
    else if (player.getRole() == "Wizard") {
        cout << "Your role = Wizard. \nThe mob you will be fighting is: "; 
        cout << monsters[randomMob] << endl; 
        
    }
    

    if (player.getHealth() <= 0) {
	      game.death(); 
    }
  
    return 0;
}


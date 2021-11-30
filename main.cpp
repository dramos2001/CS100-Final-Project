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
    //player.accessShop();  

    int choice = 0;
    
    choice = game.start();
    if (choice == 2) {
        cout << "Thanks for playing, until next time...\n";
        exit(EXIT_SUCCESS);
    }

    cout << "Wise choice.\n";
 
    player = game.createPlayer();

    if (player.getRole() == "Paladin") {
	int randomMob = rand() % 4;
	Mob mob(monsters[randomMob], monsters[randomMob]);
        cout << "Your role = Paladin. \nThe mob you will be fighting is: "; 
        cout << monsters[randomMob] << endl; 
	cout << "Do want to access shop before your fight? Enter Y/N" << endl;
	char ans;
	cin >> ans;
	bool flag = true;
	while(flag){
	if(ans == 'Y' || ans == 'N'){
	flag = false;
	} else {
	cout << "input the correct character!" << endl;
	cin >> ans;
	}

	}

	if(ans == 'Y'){
	    player.accessShop();
	    
	}
			

	cout << "Do you wish to attack or use bag?\n";
        cout << "Enter a for attack, b for bag.\n";

        char attOrBag;
        cin >> attOrBag;

        while (attOrBag != 'a' || attOrBag != 'A' || attOrBag == 'b' || attOrBag == 'B')
        {
            if (attOrBag == 'a' || attOrBag == 'A')
            {
                player.attack(mob); //player attacks
            }
	   
            else
            {
                cout << "You chose to use bag.\n";
                bag.displayBag(cout);  //show bag
                //cout << "Which item do you wish to use?\n";
            }
	   
	   /* if (player.getHealth() > 0 && mob.getHealth() > 0) { 		
           	cout << "you're still alive. continue attacking.\n";
            	cin >> attOrBag;
		if (attOrBag == 'q' || attOrBag == 'Q') { break; }
	    } */ 

	    if (player.getHealth() <= 0 && mob.getHealth() > 0) {
		game.death(); 
		break; 
	    }
	    if (player.getHealth() > 0 && mob.getHealth() <= 0) {
	    	game.victory();
	    	break;
	    } 

        }
 
    }
    else if (player.getRole() == "Warrior"){ 
	int randomMob = rand() % 4;
	Mob mob(monsters[randomMob], monsters[randomMob]);
        cout << "Your role = Warrior. \nThe mob you will be fighting is: "; 
        cout << monsters[randomMob] << endl; 
     
	cout << "Do you wish to attack or use bag?\n";
        cout << "Enter a for attack, b for bag.\n";

        char attOrBag;
        cin >> attOrBag;

        while (attOrBag != 'a' || attOrBag != 'A' || attOrBag == 'b' || attOrBag == 'B')
        {
            if (attOrBag == 'a' || attOrBag == 'A')
            {
                player.attack(mob); //player attacks
            }
            else
            {
                Bag bag;
                cout << "You chose to use bag.\n";
                bag.displayBag(cout);  //show bag
                //cout << "Which item do you wish to use?\n";
            }

	 /*   if (player.getHealth() > 0 && mob.getHealth() > 0) { 
            	cout << "you're still alive. continue attacking..\n";
            	cin >> attOrBag;
		if (attOrBag == 'q' || attOrBag == 'Q') { break; }
	    } */ 
	    if (player.getHealth() <= 0 && mob.getHealth() > 0 ) {
		game.death();
		break;
	    }
	    if (player.getHealth() > 0 && mob.getHealth() <= 0) {
                game.victory();
                break;
            }
            //cout << "Invalid input, please try again.\n";
            //cin >> attOrBag;


        }   
    }
    else if (player.getRole() == "Wizard") {
	int randomMob = rand() % 4;
	Mob mob(monsters[randomMob], monsters[randomMob]);
        cout << "Your role = Wizard. \nThe mob you will be fighting is: "; 
        cout << monsters[randomMob] << endl; 
    
	cout << "Do you wish to attack or use bag?\n";
        cout << "Enter a for attack, b for bag.\n";

        char attOrBag;
        cin >> attOrBag;

        while (attOrBag != 'a' || attOrBag != 'A' || attOrBag == 'b' || attOrBag == 'B')
        {
            if (attOrBag == 'a' || attOrBag == 'A')
            {
                player.attack(mob); //player attacks
            }
            else
	    {
                Bag bag;
                cout << "You chose to use bag.\n";
                bag.displayBag(cout);  //show bag
                //cout << "Which item do you wish to use?\n";
            }

	   /* if (player.getHealth() > 0 && mob.getHealth() > 0) {
            	cout << "you're still alive. continue attacking.\n";
            	cin >> attOrBag;
		if (attOrBag == 'q' || attOrBag == 'Q') {break; }
	    } */ 
	    if (player.getHealth() <= 0 && mob.getHealth() > 0) {
		game.death();
		break; 
	    }
	    if (player.getHealth() > 0 && mob.getHealth() <= 0) {
                game.victory();
                break;
            }
            //cout << "Invalid input, please try again.\n";
            //cin >> attOrBag;

        }   
    }
    
  
    return 0;
}


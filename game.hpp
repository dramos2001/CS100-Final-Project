#ifndef __GAME_HPP__
#define __GAME_HPP__

#include <iostream>
#include <stdlib.h> // uses rand and srand
#include "Player.hpp"
#include "mob.h"

class Game {
public:
    // DEFAULT CONSTRUCTOR
    Game() {};

    // start() function definition
    // displays the startup screen of the game and asks the user whether or not they
    // want to play the game
    int start() {
        int choice;
        //cout << std::string(80, '*') << endl;
        //cout << "*" << std::string(78, ' ') << "*" << endl;
        std::cout << "WELCOME TO DRAGONSLAYER" << std::endl;
        std::cout << "Press 1 to start your quest" << std::endl;
        std::cout << "Press 2 to exit your quest" << std::endl << std::endl;
        std::cin >> choice;
        return choice;
    }

    // createPlayer() function definition
    // allows the user to set their name and role for their player in the game
    // and returns that player to main
    Player createPlayer() {
	    std::string name;
    	std::string role;
    	int choice;
    	Player player;
    
    	// prompt user to input a specified name
     	std::cout << "What's your name, stranger?\n";
    	std::cin >> name;
    	player.setName(name);

      	// prompt user to input specified role based on the list
     	std::cout << "Hello " << name << std::endl;
      	std::cout << "Choose your role. Your options are:\n";
      	std::cout << "1. Paladin\n";
      	std::cout << "2. Warrior\n";
    	std::cout << "3. Wizard\n";
      	std::cin >> choice;

    	// assess choice
    	switch(choice) {
        	case 1: player.setRole("Paladin"); break;        
        	case 2: player.setRole("Warrior"); break;
            case 3: player.setRole("Wizard"); break; 
            default: cout << "invalid choice." << endl; break;                                                                                             
     	};
    	
	    // return temp player object to main
    	return player;
    }

    // battleMob function definition
    // takes a player and mob object as parameters and allows for combat between 
    // you the player and a randomly generated mob
    void battleMob(Player& player, Mob& mob, Bag& bag) {
        char attOrBag;
        char ans;
        
        std::cout << "The mob you will be fighting is: " << mob.getMobType() << std::endl;
        std::cout << "Do you want to access the shop before your fight? Enter Y/N" << endl;
        std::cin >> ans;

        bool flag = true;
        while(flag) {
            if (ans != 'Y' || ans != 'N' || ans != 'y' || ans != 'n') {
                cout << "input the correct character!" << endl;
                cin >> ans;
		flag = false; 
            }
            else {
                flag = false;
            }
        }

        if(ans == 'Y') {
            player.accessShop(bag);
        }
                
        std::cout << "Do you wish to attack or use bag?\n";
        std::cout << "Enter a for attack, b for bag.\n";
        std::cin >> attOrBag;

        while (attOrBag != 'a' || attOrBag != 'A' || attOrBag == 'b' || attOrBag == 'B')
        {
            if (attOrBag == 'a' || attOrBag == 'A')
            {
                player.attack(mob); //player attacks
            }
            else
            {
                bool temp = true;
                char answer;
                std::cout << "You chose to use bag.\n";
                bag.displayBag(std::cout);  //show bag
                std::cout << "Would you like to use a potion? Y/N" << std::endl;
                std::cin >> answer;

                if(answer == 'Y' || answer == 'N' || answer == 'y' || answer == 'n') { 
                    temp = false;
                } else {
                    cout << "input the correct character!" << endl;
                    cin >> answer;
                }
                if(ans == 'Y') {
                    player.usePotion(bag);
                }

                cout << "Do you want to attack or continue using bag? a/b" << endl;
                cin >> attOrBag;
            }

	    if (player.getHealth() > 0 && mob.getHealth() > 0 ) {
		cout << "Do you want to attack or continue using bag? a/b" << endl;
                cin >> attOrBag;
	    }
        
            if (player.getHealth() <= 0 && mob.getHealth() > 0) {
                this->death(); 
                break; 
            }
            if (player.getHealth() > 0 && mob.getHealth() <= 0) {
                this->victory();
		cout << "Total points rewarded: " << player.getPoints() << endl;
                break;
            }

        }
    }

    void victory() {
        cout << "You win! Congratulations on beating the quest! \n";
        return;
    }

    void death() {
        cout << "Sorry you failed your quest. \n";
        return; 
    }

};

#endif


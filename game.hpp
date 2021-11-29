#ifndef __GAME_HPP__
#define __GAME_HPP__

#include <iostream>
#include "Player.hpp"

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
        std::cin.ignore();
        getline(std::cin, name);
        player.setName(name);

        // prompt user to input specified role based on the list
        std::cout << "Hello " << name << std::endl;
        std::cout << "Choose your role. Your options are:\n";
        std::cout << "1. Paladin\n";
        std::cout << "2. Warrior\n";
        std::cout << "3. Wizard\n";
        std::cin >> choice;

        // assess choice
        switch(choice)
        {
            case 1: player.setRole("Paladin"); break; 
            case 2: player.setRole("Warrior"); break;
            case 3: player.setRole("Wizard"); break; 
            default: cout << "invalid choice." << endl; break; 
        };

        // return temp player object to m ain
        return player;
    }

    // menu() function definition
    // prints a menu of different actions/choices the user can make, such as:
    // read stats, get item, start quest, end game, etc.
    int menu() {
        int choice;

        // print choices to user
        std::cout << "What would you like to do?\n\n";
        std::cout << "0. End game\n";
        std::cout << "1. Print your player's stats\n";
        std::cout << "2. Start a new quest\n";
        std::cout << "3. Enter the item shop\n";
        // add more choices here when you think of some
        std::cin >> choice;

        return choice;
    }

    // intro() function definition
    // start of the story and main part of the game 
    // prints the objective, the basic story, and segways onto the first quest of the game
    void intro(Player& player) {
        std::cout << "\nWelcome to Dragonslayer";
        player.printStats();
    }

    // quest1() function definition
    // 
    void quest1(Player& player) {
        
    }


    // finalBoss() function definition
    // gameplay and fight of the final boss occurs here
    void finalBoss(Player& player) {
        
    }


};

#endif


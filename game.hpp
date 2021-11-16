#ifndef __GAME_HPP__
#define __GAME_HPP__

#include <iostream>

class Game {
public:

    // CONSTRUCTOR
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

};

#endif


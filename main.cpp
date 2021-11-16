#include <iostream>
#include <cstdlib>

// USING STATEMENTS
using std::cout;
using std::endl;
using std::cin;

// FUNCTION PROTOTYPES
int gameStartUpScreen();


// MAIN DRIVER CODE STARTS HERE
int main() {
    int choice = 0;

    choice = gameStartUpScreen();
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


// gameStartUpScreen function definition
// displays the startup screen of the game and asks the user whether or not they
// want to play the game
int gameStartUpScreen() {
    int choice;
    //cout << std::string(80, '*') << endl;
    //cout << "*" << std::string(78, ' ') << "*" << endl;
    cout << "WELCOME TO DRAGONSLAYER" << endl;
    cout << "Press 1 to start your quest" << endl;
    cout << "Press 2 to exit your quest" << endl << endl << endl;
    cin >> choice;
    return choice;
}


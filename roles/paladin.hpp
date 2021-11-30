#ifndef __PALADIN_HPP__
#define __PALADIN_HPP__

#include "../Player.hpp"
#include "../items/potion.hpp"
#include "../items/weapon.hpp"
#include "../items/spell.hpp"
#include <string>
#include <ctime>
#include <cstdlib>

class Paladin : public Player 
{
public:
    Paladin() : Player() { _role="Paladin"; _health=120; _armor=30; _mana=100; } 
    string getRole() const {return _role; }

    void attack() { 
        srand(time(NULL));
    	int a = (rand() % _mana); 
        std::cout << getRole() << " attacked for " << a << " damage. \n";
    }

    void defend() {
        srand(time(NULL)); 
	    int d = (rand() % _armor) + 10;
        std::cout << getRole() << " defended for " << d << " ";
    } 

    void castSpell() {
	    Spell spell;
        std::cout << spell.getItemName() << " does damage for " << std::endl; 
    } 

private:
    std::string _role;
    int _health; 
    int _armor;
    int _mana; 
};

#endif

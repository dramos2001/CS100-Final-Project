#ifndef __WARRIOR_HPP__
#define __WARRIOR_HPP__

#include "../Player.hpp"
#include "../items/spell.hpp"
#include "../items/potion.hpp"
#include "../items/weapon.hpp"
#include <string>
#include <ctime>
#include <cstdlib>

class Warrior : public Player
{
public:
    Warrior() : Player() {_role = "Warrior"; _health = 100; _armor = 50; _mana = 100; }
    std::string getRole() const {return _role; }
    
    void attack() { 
        srand(time(NULL));
        int a = (rand() % _mana) + 20;
        std::cout << getRole() << " attacked for " << _mana << " damage. \n";
    } 

    void defend() {
        srand(time(NULL));
	    int d = (rand() % _armor);
        std::cout << getRole() << " defended itself for " << _armor << " damage.\n";
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


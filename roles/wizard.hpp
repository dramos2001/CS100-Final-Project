#ifndef __WIZARD_HPP__
#define __WIZARD_HPP__

#include "../Player.hpp"
#include "../items/spell.hpp"
#include "../items/weapon.hpp"
#include "../items/potion.hpp"
#include <string>
#include <ctime>
#include <cstdlib>

class Wizard : public Player
{ 
public:
    Wizard() : Player() { _role="Wizard"; _health=100; _armor=20; _mana=130; _magic=50; }  

    std::string getRole() const {return _role; }

    void attack() { 
        srand(time(NULL));
	    int a = (rand() % _mana); 
        std::cout << getRole() << " attacked for " << a << " damage. \n";
    } 

    void defend() { 
        srand(time(NULL));
	    int d = (rand() % _armor);
        std::cout << getRole() << " defended for " << d << std::endl; 
    } 

    void castSpell() { 
        srand(time(NULL));
	    int m = (rand() % _magic); 
        Spell spell;
        //int a = spell.castSpell();
        //m += a; 
        std::cout << spell.getItemName() << " does damage for " << m << std::endl;
    }

private:
    std::string _role; 
    int _health;
    int _armor;
    int _mana;
    int _magic; 
};

#endif

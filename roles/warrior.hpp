#ifndef __WARRIOR_HPP__
#define __WARRIOR_HPP__

#include "../Player.hpp"
#include "../items/spell.hpp"
#include "../items/potion.hpp"
#include "../items/weapon.hpp"

class Warrior : public Player
{
public:
    Warrior() : Player() {_role = "Warrior"; _health = 100; _armor = 50; _mana = 100; }
    string getRole() const {return _role; }
    
    void attack() { 
        int a = (rand() % _mana) + 20;
        cout << getRole() << " attacked for " << _mana << " damage. \n";
    } 

    void defend() {
	    int d = (rand() % _armor);
        cout << getRole() << " defended itself for " << _armor << " damage.\n";
    }

    void castSpell() {
	    Item spell = new Spell();
        cout << spell->getItemName << " does damage for " << spell.castSpell() << endl;
    } 

private:
    string _role; 
    int _health; 
    int _armor;
    int _mana; 

};

#endif


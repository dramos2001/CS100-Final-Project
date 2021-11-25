#ifndef __PALADIN_HPP__
#define __PALADIN_HPP__

#include "../Player.hpp"
#include "../items/potion.hpp"
#include "../items/weapon.hpp"
#include "../items/spell.hpp"

class Paladin : public Player 
{
public:
    Paladin() : Player() { _role="Paladin"; _health=120; _armor=30; _mana=100; } 
    string getRole() const {return _role; }

    void attack() { 
	int a = (rand() % _mana); 
        cout << getRole() << " attacked for " << a << " damage. \n";
    }

    void defend() { 
	int d = (rand() % _armor) + 10;
        cout << getRole() << " defended for " << d << " ";
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

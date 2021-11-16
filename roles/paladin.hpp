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

    void attack() { }  // attack is stronger than castSpell and defend. 
    void defend() { } 
    void castSpell() { } 

private:
    string _role;
    int _health; 
    int _armor;
    int _mana; 
};

#endif

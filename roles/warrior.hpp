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
    void attack() { } 
    void defend() { } 
    void castSpell() { } 

private:
    string _role; 
    int _health; 
    int _armor;
    int _mana; 

};

#endif


#ifndef __WIZARD_HPP__
#define __WIZARD_HPP__

#include "../Player.hpp"
#include "../items/spell.hpp"
#include "../items/weapon.hpp"
#include "../items/potion.hpp"

class Wizard : public Player
{ 
public:
    Wizard() : Player() { _role="Wizard"; _health=100; _armor=20; _mana=130; } 

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

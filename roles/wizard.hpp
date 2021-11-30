#ifndef __WIZARD_HPP__
#define __WIZARD_HPP__

#include "../Player.hpp"
#include "../items/spell.hpp"
#include "../items/weapon.hpp"
#include "../items/potion.hpp"

class Wizard : public Player
{ 
public:
    Wizard() : Player() { _role="Wizard"; _health=100; _armor=20; _mana=130; _magic=50; }  

    string getRole() const {return _role; }

    void attack() { 
	    int a = (rand() % _mana); 
        cout << getRole() << " attacked for " << a << " damage. \n";
    } 

    void defend() { 
	    int d = (rand() % _armor);
        cout << getRole() << " defended for " << d << endl; 
    } 

    void castSpell() { 
	    int m = (rand() % _magic); 
        Item spell = new Spell();
        int a = spell.castSpell();
        m += a; 
        cout << spell->getItemName() << " does damage for " << m << endl;
    }

private:
    string _role; 
    int _health;
    int _armor;
    int _mana;
    int _magic; 
};

#endif

#ifndef __WEAPON_HPP__
#define __WEAPON_HPP__

#include "../Item.hpp"

class Weapon : public Item
{
public:
    Weapon() { _name="sword"; _description=""; _quantity=2; }

    string getItemName() const {return _name; }
    string getDescription() const {return _description; }
    int getQuantity() const {return _quantity; }

    void useWeapon() { 
	int d = rand() % damage; 
        damage = d; 
        cout << " damage on opponent is ";
        if (damage < 15) cout << damage << " not very effective. \n";
        else if (damage >= 15) cout << damage << " is super effective. \n";
    } 

private:
    string _name; 
    string _description;
    int _quantity;  
    int damage = 30; 
};

#endif


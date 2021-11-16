#ifndef __WEAPON_HPP__
#define __WEAPON_HPP__

#include "../Item.hpp"

class Weapon : public Item
{
public:
    Weapon() { _name="_weapon_"; _description=" "; _quantity=2; }

    string getItemName() const {return _name; }
    string getDescription() const {return _description; }
    int getQuantity() const {return _quantity; }

private:
    string _name; 
    string _description;
    int _quantity;  
};

#endif


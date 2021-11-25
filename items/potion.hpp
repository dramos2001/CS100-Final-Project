#ifndef __POTION_HPP__
#define __POTION_HPP__

#include "../Item.hpp"

class Potion : public Item
{
public:
    Potion() : Item() {_item = "Potion"; _description = "Healed 20 HP"; _quantity=5; }

    string getItemName() const {return _item; }
    string getDescription() const {return _description; }
    int getQuantity() const {return _quantity; }

    void usePotion() { 
    	cout << "used potion. " << _description << endl;
        _quantity--; 
    } 

private:
    string _item; 
    string _description;
    int _quantity; 
};


#endif


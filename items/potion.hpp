#ifndef __POTION_HPP__
#define __POTION_HPP__

#include "../Item.hpp"
using namespace std;
class Potion : public Item
{
public:
    Potion() : Item() {_item = "Potion"; _description = "Healed 20 HP"; _quantity = 5; }

    string getItemName() const {return _item; }
    string getDescription() const {return _description; }
    int getQuantity() const {return _quantity; }

    void usePotion(Player* player) { 
    	if(_quantity > 0){
	cout << " used potion. " << _description << endl;
	player->setHealth(player->getHealth() + 20);
	
	if([player->getHealth() > 100) {
	player->setHealth(100);
	}
	
	_quantity--;
	cout << "Your total health is " << player->getHealth() << "." << endl;
	cout << "You have " << _quantity << " potions left." << endl;
	} else {
	cout << "You have no remaining potions left!" << endl;
    }
} 

private:
    string _item; 
    string _description;
    int _quantity; 
};


#endif


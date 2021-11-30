#ifndef __POTION_HPP__
#define __POTION_HPP__

#include "../Item.hpp"
#include "../Player.hpp"
using namespace std;

class Potion : public Item
{
public:
    Potion() : Item() {_item = "Potion"; _description = "Healed 20 HP"; _quantity = 5;}

    string getItemName() const {return _item; }
    string getDescription() const {return _description; }
    int getQuantity() const {return _quantity; }

    void setQuantity(int q) { _quantity=q; }
/*
    void usePotion(Player* player) { 
	Player* temp = new Player(player->getName(), player->getRole());
    	if(_quantity > 0) {
	    cout << " used potion. " << _description << endl;
	    temp->setHealth(temp->getHealth() + 20);
	
	    if(temp->getHealth() > 100) {
                temp->setHealth(100);
	    }
	
	    _quantity--;
	    cout << "Your total health is " << temp->getHealth() << "." << endl;
	    cout << "You have " << _quantity << " potions left." << endl;
	} else {
	    cout << "You have no remaining potions left!" << endl;
        }
	player=temp;
	 
    }*/

private:
    string _item; 
    string _description;
    int _quantity; 
};


#endif


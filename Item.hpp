#ifndef __ITEM_HPP__
#define __ITEM_HPP__

#include <iostream>
using namespace std; 
#include <cstring>
#include <string>

class Item 
{
public:
    Item() {}

    Item(string item_name) {
        _item_name = item_name; 
    }
    
    virtual string getItemName() const {return _item_name; }
    virtual string getDescription() const {return _description; }
    virtual int getQuantity() const {return _quantity; }

    virtual void setItemName(string name) {_item_name = name; }
    virtual void setDescription(string description) {_description = description; }
    virtual void setQuantity(int quantity) {_quantity = quantity; }

    void castSpell() {
        setItemName("Spell");
        cout << getItemName() << endl; 
    }

    void useWeapon() { 
        setItemName("Weapon");
        cout << getItemName() << endl; 
    }

protected:
    string _item_name;
    string _description;
    int _quantity; 

};

#endif



#ifndef __BAG_H__
#define __BAG_H__

#include <cassert>
#include <vector>
#include <ostream>
#include "Item.hpp"
#include "items/potion.hpp"
#include "items/weapon.hpp"
#include "items/spell.hpp"

class Bag 
{
public:
    Bag() { }

    void displayBag(std::ostream& os) {  // added ostream for unit testing
        os << "Your bag contains: " <</* item.at(0).getQuantity()*/ item.size() << " potions "  /* item.at(0).getItemName()*/ <<  std::endl;
 
    }

    void add(Item it) {
        item.push_back(it);
	//item.at(0).setQuantity(getQuantity() + 1);
    }

    
    void remove() {item.pop_back();}
    bool empty() {  return (item.size() == 0); }
    int Size() {return item.size(); }

private:
    std::vector<Item> item;

};

#endif

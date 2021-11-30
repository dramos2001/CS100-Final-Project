#ifndef __BAG_H__
#define __BAG_H__

#include <cassert>
#include <vector>
#include "Item.hpp"
#include "items/potion.hpp"
#include "items/weapon.hpp"
#include "items/spell.hpp"

class Bag 
{
public:
    Bag() { }

    void displayBag(std::ostream& os) {  // added ostream for unit testing
        os << "Your bag contains: " << item.size() << " potions" <<  std::endl;
     /*   for(unsigned int i = 0; i < item.size(); i++){
            os << item.at(i).getItemName() << " : " << item.at(i).getQuantity() << std::endl;
        } */ 
    }

    void add(Item it) {
        item.push_back(it);
    }
<<<<<<< HEAD
    //void add(string it) {
    //    Item* i = new Item(it);
    //    item.push_back(i);
    //    _size++; 
    //    items[_size] = &i;    
    //}
//    void add(string it) { 
//	Item i = new Item(it);
//	items[_size++] = i; 
    //}
    
=======
>>>>>>> 502b01c0c17edfa5e40f20354948a933a684b74b
    void remove() {item.pop_back();}
    bool empty() {  return (item.size() == 0);}
    int Size() {return item.size(); }}

private:
    std::vector<Item> item;
<<<<<<< HEAD
    //Item items; // array of items
    //int _size;  // size
=======

>>>>>>> 502b01c0c17edfa5e40f20354948a933a684b74b
};

#endif

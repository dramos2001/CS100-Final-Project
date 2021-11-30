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

    void displayBag(){
        std::cout << "Your bag contains: " << std::endl; 
        for(unsigned int i = 0; i < item.size(); i++){
            std::cout << item.at(i)->getItemName() << " " << item.at(i)->getQuantity() << std::endl;
        }
    }

    void add(Item* it) {
        item.push_back(it);
    }
    //void add(string it) {
    //    Item* i = new Item(it);
    //    item.push_back(i);
    //    _size++; 
    //    items[_size] = &i;    
    //}
    void remove() {item.pop_back();}
    bool empty() {  return (item.size() == 0);}

    int Size() {return item.size(); }

private:
    vector<Item*> item;  

};

#endif

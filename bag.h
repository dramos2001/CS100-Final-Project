<<<<<<< HEAD
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
=======
#ifndef __bag_hpp__
#define __bag_hpp__
#include "Item.hpp"
class Bag {

    private:
    vector<Item*> item;

    public:
    Bag() { };
>>>>>>> 033b8d7d448327d831d0d4a5c0aaa0b9f0f65774

    void displayBag(){
        std::cout << "Your bag contains: " << std::endl; 
        for(unsigned int i = 0; i < item.size(); i++){
<<<<<<< HEAD
            std::cout << item.at(i).getItemName() << " " << item.at(i).getQuantity() << std::endl;
        }
    }

    void add(const Item& it) {
        item.push_back(it);
    } 

    void removek() {
        item.pop_back();
    }

    bool empty() {
        return (item.size() == 0);
    }
private:
    vector<Item> item;  
};

#endif


=======
            std::cout << item.at(i)->getItemName() << " " << item.at(i)->getQuantity() << std::endl;
        }
    }
    Item* useItem();
    Item* showItem();

};

#endif
>>>>>>> 033b8d7d448327d831d0d4a5c0aaa0b9f0f65774

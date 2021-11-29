#ifndef __bag_hpp__
#define __bag_hpp__

#include "Item.hpp"
#include <vector>

class Bag {

    private:
    vector<Item*> item;

    public:
    Bag() { };

    void displayBag(){
        std::cout << "Your bag contains: " << std::endl; 
        for(unsigned int i = 0; i < item.size(); i++){
            std::cout << item.at(i)->getItemName() << " " << item.at(i)->getQuantity() << std::endl;
        }
    }
    Item* useItem();
    Item* showItem();

};

#endif

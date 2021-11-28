#ifndef __PLAYER_HPP__
#define __PLAYER_HPP__

#include <string>
#include <random>
#include "bag.h"
using namespace std;


class Player
{
private:
    string role;
    string name; 
    int level; 
    int exp;
    int points; 
    int health; 
    int damage; 
    int armor;
    int defense;
    int mana; 
    Bag* bag; 

public: 
    Player(string name = "", string role = "")
    {
        this->name = name;
        this->role = role; 
        level = 1; 
        exp = 0;
        points = 0;
        health = 50; 
        damage = 0; 
        armor = 0; 
        defense = 0; 
        mana = 0; 
    }

    virtual string getRole() const {return this->role; }
    string getName() const {return this->name; }
    int getLevel() const {return this->level; }
    int getEXP() const {return this->exp; }
    int getHealth() const {return this->health;}
    int getMana() const {return this->mana; } 
    int getPoints() const {return this->points; }

    void setRole(string newRole) {this->role = newRole; }
    void setName(string name) {this->name = name;}
    void setLevel(int level) {this->level = level; }
    void setEXP(int EXP) {this->exp = EXP; }
    void setPoints(int points) {this->points = points; }

    void takeDamage(int d) {health -= d; if (health < 0) health = 0; }

    void setHealth(int health) {this->health = health; }
    void setMana(int mana) {this->mana = mana; }
    void setArmor(int armor) {this->armor = armor; }
    
    virtual void attack() {
        int a = rand() % damage; 
        cout << getRole() << " attacked for " << a << " damage.\n";
    }
 
    virtual void defend() {
	int d = rand() % defense; 
        cout << getRole() << " defended itself for " << d << " defense.\n";
    }
 
    void pickItem(const Item& item) { 
	cout << "You picked up " << item.getItemName() << endl; 
        bag->add(item);
    } 

    virtual void castSpell() { 
	int magic = rand() % damage; 
        cout << getRole() << " casts a spell for " << magic << " damage.\n";
    } 
};



#endif //__PLAYER_HPP__


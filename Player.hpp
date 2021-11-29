#ifndef __PLAYER_HPP__
#define __PLAYER_HPP__

#include <iostream>
#include <string>
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
    Bag* items_bag;

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

    void setHealth(int health) {this->health = health; }
    void setMana(int mana) {this->mana = mana; }
    void setArmor(int armor) {this->armor = armor; }

    virtual void attack() { } 
    virtual void defend() { } 
    void pickItem() { } 
    virtual void castSpell() { } 

    void printStats() {
        // prints player stats to user for easy readability
        cout << "\n\nHere are your stats:\n\n";
        cout << "Name: " << name << " Role: " << role << "\n";
        cout << "Level: " << level << "\n";
        cout << "EXP: " << exp << "\n";
        cout << "Points: " << points << "\n";
        cout << "Health: " << health << "\n";
        cout << "Damage: " << damage << "\n";
        cout << "Armor: " << armor << "\n";
        cout << "Defense: " << defense << "\n";
        cout << "Mana: " << mana << "\n";

    }

};


#endif //__PLAYER_HPP__


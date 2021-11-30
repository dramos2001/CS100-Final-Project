#ifndef _MOB_H_
#define _MOB_H_

#include <string>
#include <random>
#include <iostream>


class Mob {
private:
    int health;
    std::string name;
    int level;
    int exp;
    std::string mob_type;
    int points;
    int damage;
    int defense;

public:
    Mob(std::string name, std::string type){ //constructor for a mob, values can be changed using setters&getters.
        this->name = name;
        mob_type = type;
        level = 1;
        exp = 0;
        points = rand() % 10;
        health = 50;
        damage = 20;
        defense = 10;
    }

    std::string getName() { return this->name; }
    std::string getMobType() { return this->mob_type; }

    void setLevel(int level) { this->level = level; }
    int getLevel() { return this->level; }

    int getExp() { return this->exp; }
    void setExp(int exp) { this->exp = exp; }

    void setPoints(int points) { this->points = points; }
    int getPoints() { return this->points; }

    void setDefense(int defense) { this->defense = defense; }
    int getDefense() { return this->defense; } 

    void setHealth(int health) { this->health = health; }
    int getHealth() { return this->health; }

    void setDamage(int damage) { this->damage = damage; }
    int getDamage() { return this->damage; }
    void takeDamage(int damage) { 
        health -= damage; 
        if (health<0) 
            health=0; 
    }

    virtual void attack() {
        int a = rand() % damage;
        std::cout << getMobType() << " attack for " << a << " damage.\n"; 
    }

    virtual void defend() {
	    int d = rand() % defense;
        std::cout << getMobType() << " defended itself for " << d << ".\n";
    }

};


#endif




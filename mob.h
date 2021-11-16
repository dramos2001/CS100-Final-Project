#ifndef _MOB_HPP_
#define _MOB_HPP_
#include <string>
using namespace std;
class Mob {
    private:

    int health;
    string name;
    int level;
    int exp;
    string mob_type;
    int points;
    int damage;
    int defense;

    public:

    Mob(string name, string type){ //constructor for a mob, values can be changed using setters&getters.
        this->name = name;
        mob_type = type;
        level = 1;
        exp = 0;
        points = 0;
        health = 50;
        damage = 0;
        defense = 0;
    }

    string getName(){
        return this->name; //returns the name
    }

    string getMobType(){
        return this->mob_type; //returns the mob type
    }

    //removed setMobType as I believe we do not need.
    void setLevel(int level){
        this->level = level; //sets the level of the mob
    }

    int getLevel(){
        return this->level; //returns the level of the mob
    }

    int getExp(){
        return this->exp; //returns the exp of the mob
    }

    void setExp(int exp){
        this->exp = exp; //sets the exp
    }

    void setPoints(int points){
        this->points = points; //sets the points
    }

    int getPoints(){
        return this->points; //returns the points
    }

    void setDefence(int defense){
        this->defense = defense; //sets the defense
    }

    int getDefense(){
        return this->defense; //returns the defense
    }

    int setHealth(int health){
        this->health = health; //sets the health
    }

    int getHealth(){
        return this->health; //returns the health
    }

    void setDamage(int damage){
        this->damage = damage; //sets the damage
    }

    int getDamage(){
        return this->damage; //returns the damage
    }

    virtual void attack(){}
    virtual void defend(){}

};


#endif




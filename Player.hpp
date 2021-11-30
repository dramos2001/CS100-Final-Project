#ifndef __PLAYER_HPP__
#define __PLAYER_HPP__

#include <string>
#include "bag.h"
#include"player.h"
#include"mob.h"

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
    //Bag* items_bag;

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

    virtual string getRole() const { return this->role; }
    string getName() const { return this->name; }
    int getLevel() const { return this->level; }
    int getEXP() const { return this->exp; }
    int getHealth() const { return this->health; }
    int getMana() const { return this->mana; }
    int getPoints() const { return this->points; }
    int getDamage() const { return this->damage; }
    int getArmor()const { return this->armor; }

    void setRole(string newRole) { this->role = newRole; }
    void setName(string name) { this->name = name; }
    void setLevel(int level) { this->level = level; }
    void setEXP(int EXP) { this->exp = EXP; }
    void setPoints(int points) { this->points = points; }
    void setDamage(int dmg) { this->damage = dmg; }
    void setHealth(int health) { this->health = health; }
    void setMana(int mana) { this->mana = mana; }
    void setArmor(int armor) { this->armor = armor; }

    void takeDamage(int damage) { health -= damage; if (health < 0) health = 0; }

    virtual void attack() 
    {
        Mob mob;
        while (this->getHealth() > 0 && mob->getHealth() > 0)
        {
            cout << "Your health:  " << this->getHealth() << endl;
            cout << "Your mana:  " << this->getMana() << endl;
            cout << "-------------------------------------------\n";
            cout << "The mob's health:  " << mob->getHealth() << endl;
            cout << "The mob has points:  " << mob->getPoints() << endl << endl;//added display mob points

            cout << "You chose to attack!!!\n";

            while (this->getHealth() > 0 && mob->getHealth() > 0)
            {
                cout << "You made: " << this->getDamage() << " damage to the mob!\n";
                mob->takeDamage(this->getDamage());
                cout << "The mob's health:  " << mob->getHealth() << endl << endl;
                if (mob->getHealth() < 0) {
                    cout << "The mob has been defeated!" << endl;
                }
                else {
                    this->defend();
                }
                this->setPoints(mob.getPoints() + this->getPoints());
            }
        }

    }
    virtual void defend() {
    
       cout << "The mob attacks you!\n";//player defend
        
            if (this->getArmor() < 50)
            {
                cout << "The mob made " << mob.getDamage()/2 << " damage to you.\n";
                this->takeDamage(mob.getDamage()/2);
                cout << "Your current health: " << this->getHealth() << endl;
            }
            else
            {
                cout << "The mob made " << mob->getDamage() / 4 << " damage to you.\n";
                this->takeDamage(mob.getDamage()/4);
                cout << "Your current health: " << this->getHealth() << endl;
            }
        
    
    
    }
    void pickItem() 
    { 
        cout << "You picked an item!\n";
    
    
    
    }
    virtual void castSpell() { }

};


#endif

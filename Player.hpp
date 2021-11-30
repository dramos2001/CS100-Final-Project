#ifndef __PLAYER_HPP__
#define __PLAYER_HPP__

#include <string>
#include <random>
#include "bag.h"
#include "Player.hpp"
#include "mob.h"
#include "items/potion.hpp"
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
   // Bag* items_bag;

public:
    Player(string name = "", string role = "")
    {
        this->name = name;
        this->role = role;
        level = 1;
        exp = 0;
        points = 20;
        health = 100;
        damage = 20;
        armor = 20;
        defense = 20;
        mana = 20;
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

    virtual void attack(Mob& mob) 
    {
     //   while (this->getHealth() > 0 && mob.getHealth() > 0)
     //   {
            cout << "Your health:  " << this->getHealth() << endl;
            cout << "Your mana:  " << this->getMana() << endl;
            cout << "-------------------------------------------\n";
            cout << "The mob's health:  " << mob.getHealth() << endl;
            cout << "The mob has points:  " << mob.getPoints() << endl << endl;//added display mob points

            cout << "You chose to attack!!!\n";
	    int d = rand() % damage + 10; 
	    this->setDamage(d);
            
                cout << "You made: " << this->getDamage() << " damage to the mob!\n";
                mob.takeDamage(this->getDamage());
                cout << "The mob's health:  " << mob.getHealth() << endl << endl;
                if (mob.getHealth() <= 0) {
                    cout << "The mob has been defeated!" << endl;
		    this->setPoints(mob.getPoints() + this->getPoints());
		   // break;
                }
                else {
                    this->defend(mob);
                }
             
            
       // }
	//cout << "Total points rewarded: " << this->getPoints() << endl; 

    }
  
    virtual void defend(Mob mob) {
    
       cout << "The mob attacks you!\n";//player defend
        
            if (this->getArmor() < 50)
            {
                cout << "The mob made " << mob.getDamage()/2 << " damage to you.\n";
                this->takeDamage(mob.getDamage()/2);
                cout << "Your current health: " << this->getHealth() << endl;
            }
            else
            {
                cout << "The mob made " << mob.getDamage() / 4 << " damage to you.\n";
                this->takeDamage(mob.getDamage()/4);
                cout << "Your current health: " << this->getHealth() << endl;
            }
    
    
    }
  
    virtual void castSpell() { }

    
    void accessShop(Bag& bag){
	    int ans;
	    cout << "Welcome to the Potion shop!" << endl;
	    cout << "The cost for potions is 10 points; you currently have " << getPoints() << endl;
	    cout << "How many potions would you like to buy?" << endl;
	    cin >> ans;
	    if(ans * 10 > getPoints()){
	      cout << "Sorry, you do not have enough points." << endl;
      	    } else {
	        if(ans == 0){
		    cout << "must input a quantity > than 0. " << endl;
	        }
	        cout << "Excellent choice!" << endl;
	        setPoints(getPoints() - (ans * 10));
	        cout << "Your current points is now " << getPoints() << endl;	
		    
		Item potion;
	    	bag.add(potion);
	    
    	    }
    }

    void usePotion(Bag bag) {
        if(bag.Size() > 0) {
            cout << " used potion. ";
            setHealth(getHealth() + 20);

            if(getHealth() > 100) {
                setHealth(100);
            }

            bag.remove();
            cout << "Your total health is " << getHealth() << "." << endl;
            cout << "You have " << bag.Size() << " potions left." << endl;
        } else {
            cout << "You have no remaining potions left!" << endl;
        }
       
    }


};

#endif

#ifndef __PLAYER_HPP__
#define __PLAYER_HPP__

#include <string>
#include <random>
#include "bag.hpp"
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
       // int a = rand() % damage; 
     
   //cout << getRole() << " attacked for " << a << " damage.\n";
    cout << "Your health:  " << player.getHealth() << endl;
    cout << "Your mana:  " << player.getMana() << endl;
    cout << "-------------------------------------------\n";
    cout << "The mob's health:  " << mob.getHealth() << endl << endl;
    cout << "You chose to attack!!!\n";       
    while(player.getHealth() > 0 && mob.getHealth() > 0){         
    cout << "You made: " << player.getDamage() << " damage to the mob!\n";
                                                                                                                                                                            mob.takeDamage(player.getDamage());
    cout << "The mob's health:  " << mob.getHealth() << endl << endl;
               
   cout << "The mob fought back!!!\n";
   cout << "The mob made: " << mob.getDamage() << " damage to you!\n";                                                                                                               player.takeDamage(mob.getDamage());                                                                                                                                                                                                                                                                                                   cout << "Your health:  " << player.getHealth() << endl;  
   cout << "Your mana:  " << player.getMana() << endl;
   }
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
    
    void accessShop(){
	int ans;
	cout << "Welcome to the Potion shop!" << endl;
	cout << "The cost for potions is 10 points; you currently have " << getPoints() << endl;
	cout << "How many potions would you like to buy?" << endl;
	cin >> ans;
	if(ans * 10 > getPoints()){
	cout << "Sorry, you do not have enough points." << endl;
        } else {
	if(ans == 0){
	break;
	}
	cout << "Excellent choice!" << endl;
	setPoints(getPoints() - (ans * 10));
	cout << "Your current points is now " << getPoints() << endl;

	for(unsigned int i = 0; i < ans; i++){
	bag->add("Potion");	
	}
	}
}
		
	



};



#endif //__PLAYER_HPP__


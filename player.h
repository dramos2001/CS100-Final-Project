#ifdef _PLAYER_HPP_
#define _PLAYER_HPP_
#include <string>
class Player {

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

    public:
    Player(string name, string role){
        this->name = name;
        this->role = role;
    }

    Role* getRole(){
        
    }

    void setRole(string role){
        this->role = role;
    }

    string getName(){
        return name;
    }

    void setLevel(int level){
        this->level = level;
    }

    int getLevel(){
        return level;
    }

    void setExp(int exp){
        this->exp = exp;
    }

    void setPoints(int points){
        this->points = points;
    }

    void setHealth(int health){
        this->health = health;
    }

    void setMana(int mana){
        this->mana = mana;
    }
    void setArmor(int armor){
        this->armor = armor;
    }

    int getHealth(){
        return health;
    }

    int getMana(){
        return mana;
    }

    int getPoints(){
        return points;
    }

    void attack(){
        
    }

    void defend(){
        
    }

    void pickItem(){
        
    }

    void castSpell(){
        
    }
};
   
#endif


#ifndef _MOB_HPP_
#define _MOB_HPP_
#include <string>
using namespace std;
class Mob{
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
    Mob(string name, string type){
        this->name = name;
        mob_type = type;
    }

    string getName(){
        return name;
    }

    string getMobType(){
        return mob_type;
    }


    /*void setMobType(string type){      // DONT BELIEVE WE NEED? - jason
 *         mob_type = type;
 *             }*/ 


    void setLevel(int level){
        this->level = level;
    }

    int getLevel(){
        return level;
    }

    void setExP(int exp){
        this->exp = exp;
    }

    void setPoints(int points){
        this->points = points;
    }

    int getPoints(){
        return points;
    }

    int setHealth(int health){
        this->health = health;
    }

    int getHealth(){
        return health;
    }

    void attack(){

    }

    void defend(){
        
    }
};

#endif






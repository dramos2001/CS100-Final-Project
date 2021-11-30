#ifndef __SPELL_HPP__
#define __SPELL_HPP__

#include "../Item.hpp"

class Spell : public Item 
{
public:
    Spell() : Item() {_spell = "spell"; _description=""; power=40; }

    string getItemName() const {return _spell; }
    string getDescription() const {return _description; }

    void castSpell() {
	    int m = rand() % power; 
        power = m; 
        cout << "Spell cast was ";
        if (power < 20) cout << " was not really effective. \n";
        else if (power >= 20)  cout << " was very effective. \n";
    } 

private:
    string _spell; 
    string _description; 
    int power;
};

#endif


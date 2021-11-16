#ifndef __SPELL_HPP__
#define __SPELL_HPP__

#include "../Item.hpp"

class Spell : public Item 
{
public:
    Spell() : Item() {_spell = "_spell_"; }

    string getItemName() const {return _spell; }
    string getDescription() const {return _description; }

    void castSpell(string spell); 

private:
    string _spell; 
    string _description; 
};

#endif


#ifndef __SPELL_HPP__
#define __SPELL_HPP__

#include "../Item.hpp"

class Spell : public Item 
{
public:
    Spell() : Item() {_spell_type = "_"; }

    void castSpell(string spell); 

private:
    string _spell_type; 
};

#endif


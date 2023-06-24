#include "SpellBook.hpp"

SpellBook:: SpellBook()
{
}

SpellBook:: ~SpellBook()
{
    std:: map<std:: string, ASpell *>:: iterator it_begin = map.begin();
    std:: map<std:: string, ASpell *>:: iterator it_end = map.end();
    while (it_begin != it_end)
    {
        delete it_begin->second;
        ++it_begin;
    }
    map.clear();
}

void SpellBook:: learnSpell(ASpell *aspel)
{
    if (aspel)
        map.insert(std:: pair<std:: string, ASpell *>(aspel->getName(), aspel->clone()));
}

void SpellBook:: forgetSpell(std:: string const &aspel)
{
    std:: map<std:: string, ASpell *>:: iterator it = map.find(aspel);
    if (it != map.end())
        delete it->second;
    map.erase(aspel);  
}

ASpell *SpellBook:: createSpell(std:: string const &aspel)
{
    std:: map<std:: string, ASpell *>:: iterator it = map.find(aspel);
    if (it != map.end())
        return (map[aspel]);
    return NULL;
}
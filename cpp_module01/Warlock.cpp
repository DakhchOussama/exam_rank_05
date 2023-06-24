#include "Warlock.hpp"

Warlock:: Warlock()
{
}

Warlock:: ~Warlock()
{
    std:: cout << name << ": My job here is done!" << std:: endl;
    std:: map<std:: string, ASpell *>:: iterator it_begin = map_warlock.begin();
    std:: map<std:: string, ASpell *>:: iterator it_end = map_warlock.end();
    while (it_begin != it_end)
    {
        delete it_begin->second;
        ++it_begin;
    }
    map_warlock.clear();
}

Warlock:: Warlock(std:: string const &name, std:: string const &title): name(name), title(title)
{
    std:: cout << name << ": This looks like another boring day." << std:: endl;
}

std:: string const &Warlock:: getName() const
{
    return (name);
}

std:: string const &Warlock:: getTitle() const
{
    return (title);
}

void Warlock:: setTitle(std:: string const &title)
{
    this->title = title;
}

void Warlock:: introduce() const
{
    std:: cout << name << ": I am " << name << ", " << title << "!" << std:: endl;
}

void Warlock:: learnSpell(ASpell *aspel)
{
    if (aspel)
        map_warlock.insert(std:: pair<std:: string, ASpell *>(aspel->getName(), aspel->clone()));
}

void Warlock:: forgetSpell(std:: string name)
{
    std:: map<std:: string, ASpell *>:: iterator it = map_warlock.find(name);
    if (it != map_warlock.end())
        delete it->second;
    map_warlock.erase(name);
}

void Warlock:: launchSpell(std:: string name, ATarget const &target)
{
    ASpell *asp = map_warlock[name];
    if (asp)
        asp->launch(target);
}
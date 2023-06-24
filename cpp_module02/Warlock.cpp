#include "Warlock.hpp"

Warlock:: Warlock()
{
}

Warlock:: ~Warlock()
{
    std:: cout << name << ": My job here is done!" << std:: endl;
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
   spel.learnSpell(aspel);
}

void Warlock:: forgetSpell(std:: string name)
{
   spel.forgetSpell(name);
}

void Warlock:: launchSpell(std:: string name, ATarget const &target)
{
    ATarget const *test = 0;
    if (test == &target)
        return ;
    ASpell *tmp = spel.createSpell(name);
    if (tmp)
        tmp->launch(target);
}
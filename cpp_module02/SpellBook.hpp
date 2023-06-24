#include <iostream>
#include "ASpell.hpp"
#include <map>

class SpellBook
{
private:
    std:: map<std:: string, ASpell *> map;
    
    SpellBook(SpellBook const &copy);
    SpellBook &operator=(SpellBook const &copy);
public:
    SpellBook();
    ~SpellBook();

    void learnSpell(ASpell *aspel);
    void forgetSpell(std:: string const &aspel);
    ASpell *createSpell(std:: string const &aspel);
};
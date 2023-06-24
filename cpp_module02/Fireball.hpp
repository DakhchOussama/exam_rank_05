#include "ASpell.hpp"
#include <iostream>

class Fireball: public ASpell
{
public:
    Fireball();
    ~Fireball();
    virtual ASpell *clone() const;
};
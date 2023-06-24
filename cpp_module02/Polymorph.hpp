#include "ASpell.hpp"
#include <iostream>

class Polymorph: public ASpell
{
public:
    Polymorph();
    ~Polymorph();

    virtual ASpell *clone() const;
};
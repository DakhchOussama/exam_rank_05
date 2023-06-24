#include "ASpell.hpp"

ASpell:: ASpell()
{
}

ASpell:: ~ASpell()
{
}

ASpell:: ASpell(std:: string const &name, std:: string const &effect): name(name), effects(effect)
{
}

std:: string const &ASpell:: getName() const
{
    return (name);
}

std:: string const &ASpell:: getEffects() const
{
    return (effects);
}

void ASpell:: launch(ATarget const &target) const
{
    target.getHitBySpell(*this);
}
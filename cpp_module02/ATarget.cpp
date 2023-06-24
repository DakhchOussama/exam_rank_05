#include "ATarget.hpp"

ATarget:: ATarget()
{
}

ATarget:: ~ATarget()
{
}

ATarget:: ATarget(std:: string const &type): type(type)
{
}

std:: string const &ATarget::getType() const
{
    return (type);
}

void ATarget:: getHitBySpell(ASpell const &aspel) const
{
    std:: cout << type << " has been " << aspel.getEffects() << "!" << std:: endl;
}
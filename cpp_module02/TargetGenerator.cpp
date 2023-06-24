#include "TargetGenerator.hpp"

TargetGenerator:: TargetGenerator()
{
}

TargetGenerator:: ~TargetGenerator()
{
    std:: map<std:: string, ATarget *>:: iterator it_begin = map.begin();
    std:: map<std:: string, ATarget *>:: iterator it_end = map.end();

    while (it_begin != it_end)
    {
        delete it_begin->second;
        ++it_begin;
    }
    map.clear();
}

void TargetGenerator:: learnTargetType(ATarget *target)
{
    if (target)
        map.insert(std:: pair<std:: string, ATarget *>(target->getType(), target->clone()));
}

void TargetGenerator:: forgetTargetType(std:: string const &copy)
{
    std:: map<std:: string, ATarget *>:: iterator it = map.find(copy);
    if (it != map.end())
        delete it->second;
    map.erase(copy);
}

ATarget *TargetGenerator:: createTarget(std:: string const &copy)
{
    std:: map<std:: string, ATarget *>:: iterator it = map.find(copy);
    if (it != map.end())
        return map[copy];
    return (NULL);
}
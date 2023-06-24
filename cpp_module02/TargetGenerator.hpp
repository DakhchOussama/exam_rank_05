#include <iostream>
#include "ATarget.hpp"
#include <map>

class TargetGenerator
{
private:
    std:: map<std:: string, ATarget *> map;

    TargetGenerator(TargetGenerator const &copy);
    TargetGenerator &operator=(TargetGenerator const &copy);
public:
    TargetGenerator();
    ~TargetGenerator();

    void learnTargetType(ATarget *target);
    void forgetTargetType(std:: string const &copy);
    ATarget* createTarget(std:: string const &copy);
};
#include "Class.h"

Class::Class(){}
Class::~Class(){}

std::string Class::toString() const
{
    std::stringstream ss;
    std::string numberString;

    ss << number;
    ss >> numberString;

    return name + " " + numberString;
}

void Class::SetName(std::string name)
{
    this->name = name;
}
void Class::SetNumber(int number)
{
    this->number = number;
}

std::string Class::GetName()
{
    return name;
}
int Class::GetNumber()
{
    return number;
}

int Class::sumAllN(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else
    {
        return n + sumAllN(n - 1);
    }
}
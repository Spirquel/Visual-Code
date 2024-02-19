#include <iostream>
#include "class.hpp"

Class::Class()
{
    _a = 15;
}

void Class::Affiche()
{
    std::cout << _a << std::endl;
}
#include <iostream>
#include "Chien.hpp"

void Animal::FaireUnBruit()
{
    std::cout << "Wouf" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Destruction de la classe fille Chien : " << this << std::endl;
}
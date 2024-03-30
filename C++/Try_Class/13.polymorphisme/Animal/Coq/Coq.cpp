#include <iostream>
#include "Coq.hpp"

void Animal::FaireUnBruit()
{
    std::cout << "Coq" << std::endl;
}

Coq::~Coq()
{
    std::cout << "Destruction de la classe fille Coq : " << this << std::endl;
}
#include <iostream>
#include "time/time.hpp"

 //cours : surcharges d'opérateur permet de faire intéragir les types personnalisés entre eux et/ou avec ceux déjà existent

int main()
{
    t::time t1{12, 25, 30};

    std::cout << t1 << std::endl; //de base ne fonctionne pas car il ne sait pas comment afficher t1, avec l'opérateur on résout ce problème

    return 0;
}
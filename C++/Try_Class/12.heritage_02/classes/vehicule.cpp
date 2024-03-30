#include <iostream>
#include "vehicule.hpp"

double Vehicule::Accelerer()
{
    return (vitesse_ += 0.1);
}

void Vehicule::getVitesse()
{
    std::cout << "la vitesse actuelle est : " << vitesse_ << std::endl;
}

void Vehicule::getUsurePneus()
{
    std::cout << "Usure des pneu actuelle est : " << usure_pneus_ << std::endl;
}

Vehicule::~Vehicule()
{
    std::cout << "destruction de la classe mere vehicule : " << this << std::endl;
}
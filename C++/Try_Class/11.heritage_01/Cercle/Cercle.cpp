#include <iostream>
#include "Cercle.hpp"
#define PI 3.1415926535897932384626433832795028841971693993

Cercle::Cercle(double rayon) : _rayon(rayon)
{}

double Cercle::getPerimetre()
{
    return (2*PI*_rayon);
}

double Cercle::getArea()
{
    return (PI*(rayon*rayon));
}

Cercle::~Cercle()
{
    std::cout << "destruction de la classe fille Cercle : " << this << std::endl;
}

#include <iostream>
#include "Physicist.hpp"

void Physicist::methode_day(int a)
{
    if(a > 31 || a < 1)
    {
        std::cout << "Error for day" << std::endl;
    }
    else
    {
        a = _birth_day;
    }
}

void Physicist::methode_month(int b)
{
    if(b > 12 || b < 1)
    {
        std::cout << "Error for month" << std::endl;
    }
    else
    {
        b = _birth_month;
    }
}

void Physicist::methode_year(int c)
{
    if(c > 31 || c < 1)
    {
        std::cout << "Error for year" << std::endl;
    }
    else
    {
        c = _birth_year;
    }
}

Physicist::Physicist(std::string name, int birth_year, int birth_month, int birth_day, std::string country) : _name(name), _birth_year(birth_year), _birth_month(birth_month), _birth_day(birth_day), _country(country)
{
    void methode_day(birth_day);

    void methode_month(birth_month);

    void methode_year(birth_year);
}

Physicist::Physicist(std::string name, int birth_year, int birth_month, int birth_day) : _name(name), _birth_year(birth_year), _birth_month(birth_month), _birth_day(birth_day)
{
    void methode_day(birth_day);

    void methode_month(birth_month);

    void methode_year(birth_year);

    _country = "null";
}

Physicist::Physicist(std::string name) : _name(name)
{
    _country = "null"; //je voudrais mettre null 
    _birth_year = 0; //je voudrais mettre null 
    _birth_month = 0; //je voudrais mettre null 
    _birth_day = 0; //je voudrais mettre null 
}

void Physicist::Introduce()
{
    if(_birth_day > 31 || _birth_day < 1)
    {
        std::cout << "Error" << std::endl;
    }
    else if(_birth_month > 12 || _birth_month < 1)
    {
        std::cout << "Error" << std::endl;
    }
    else if(_birth_year < 0)
    {
        std::cout << "Error" << std::endl;
    }
    else
    {
        std::cout << _name << "," << _birth_year << "-" << _birth_month << "-" << _birth_day << "," << _country << std::endl;
    }
}

void Physicist::Modif_birth(int year, int month, int day)
{
    void methode_day(day);

    void methode_month(month);

    void methode_year(year);
}

Physicist::~Physicist()
{
    std::cout << "Destruction de " << this << std::endl;
}

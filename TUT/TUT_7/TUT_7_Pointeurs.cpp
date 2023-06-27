#include <iostream>

int main()
{
    int a = 0;
    float b = 0;

    int* p_int = &a; //ici on dit que p_int = adresse de a, mais si on a pas de variale on met "nullptr" afin d'avoir un pointeur null//
    float* p_float = &b; // et donc pas faire crash le programme//

    std::cout << "valeur de a = " << a << std::endl; // valeur de a (valeur stocker dans la int) //
    std::cout << "valeur de b = " << b << std::endl;

    std::cout << "adresse de a = " << p_int << std::endl; // adresse de a dans le stockage donc son IP//
    std::cout << "adresse de b = " << p_float << std::endl;

    std::cout << "valeur de a en p_int = " << *p_int << std::endl; // affiche la valeur stocker à l'adresse du pointeur p_int//
    std::cout << "valeur de b en p_float = " << *p_float << std::endl; // *= à l'adresse de... (ici de p_float)//
    

    std::cin.ignore();
    return 0;
}
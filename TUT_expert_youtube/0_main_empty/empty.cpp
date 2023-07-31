#include <iostream>
#include <string>

int main()
{
    std::cout << "\nentrer nom prenom : " << std::endl;
    std::string nom_prenom;
    std::getline(std::cin, nom_prenom); /*avec seulement cin on ne peut pas entrer un nom après un espace (donc nom prenom impossible)*/
    /*std::getline(le flux sur lequel lire, chaine de caractere dans laquelle memoriser l'information )*/
    std::cout << "nom prenom saisi : " << nom_prenom << std::endl;

}
#include <iostream>
#include <string>
#include <array>

/*tableau est un conteneur (implementation de differente structure de données en info)*/

/*std::array : fill() = remplir le tableau
               at() = afficher un seul élément
               size() = recuperer taille du tableau
               empty() = verifie si le tableau est vide ou non
               front() = montre le premier element
               back() = montre le dernier element*/

int main()
{
    std::cout << "tableau taille fixe : "

    std::array<int, 5> arr{1, 2, 3, 4, 5};/*tableau de taille fixe*//*array<type, nombre de valeur à stocker>*/

    std::cout << "tableau fixe : " << std::endl;
    for(const auto& element : arr) /*boucle for-each (java)*/
    {
        std::cout << element << std::endl;
    }

    std::cout << "premiere case du tableau : " << arr[0] << std::endl;
    std::cout << "derniere case du tableau : " << arr[4] << std::endl;
    arr[4] = 25; /*modification de la valeur dans la case*/
    std::cout << "changement de la derniere case du tableau : " << arr[4] << std::endl;

std::cout << "\n" << std::endl;

    /*fill()*/ /*remplissage*/
    std::array<int, 3> three{5, 25, 8};

    std::cout << "fill()" << std::endl;
    std::cout << "tableau original : " << std::endl;
    for(const auto& change : three)
    {
        std::cout << change << std::endl;
    }

    std::cout << "utilisation de at a la case 0 : " << three.at(0) << std::endl;

    three.fill(3); /*on change toutes les valeurs du tableau (on les remplis) par des trois.*/

    std::cout << "tableau apres fill(3) : " << std::endl;
    for(const auto& change : three)
    {
        std::cout << change << std::endl;
    }

std::cout << "\n" << std::endl;

    /*size*//*récuperer automatiquement la taille d'un tableau*/
    std::array<int, 2> tabtaille{15, 25};

    std::cout << "utilisation de size() : " << std::endl;
    for(int i = 0; i < tabtaille.size(); i++) /*plus besoin d'écrire la taille, avec size la taille est automatique (si on la change size changera)*/
    {
        std::cout << tabtaille[i] << std::endl;
    }

    std::cout << "Taille tableau : " << tabtaille.size() << std::endl;/*issue de la biblio array*/
    std::cout << "Taille tableau : " << std::size(tabtaille) << std::endl;/*issue de la biblio standard*//*mieux vaut prendre lui car il fonctionne à coup sur.*/
    
    if(std::empty(tabtaille)) /*voir si le tableau est vide ou non*/
    {
        std::cout << "empty active, tableau vide" << std::endl;
    }
    else
    {
        std::cout << "empty non active, tableau non vide" << std::endl;
    }

    std::cout << "premiere case via front() = " << tabtaille.front() << std::endl; /*front pour devant*/
    std::cout << "derniere case via back() = " << tabtaille.back() << std::endl; /*back pour derriere*/



std::cout << "\n" << std::endl;

    std::cout << "tableau a taille dynamique : " << std::endl;

    return 0;
}
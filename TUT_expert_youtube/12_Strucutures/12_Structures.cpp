#include <iostream>
#include <string>

    struct product 
    {
        std::string name;
        float price;
        bool avaible;
    };
    
int main()
{  
    struct product p{"produit", 13.9F, true};

    std::cout << "prix : " << p.price << std::endl;
    p.price = 15.9F;
    std::cout << "prix : " << p.price << std::endl;

    return 0;
}
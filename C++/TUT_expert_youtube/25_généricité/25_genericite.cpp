#include <iostream>
#include <string>
#include "number.hpp"

// générictié : un code qui fonctionne peu importe le type (int, string, etc.)

int main()
{
    auto r1 = sum(4, 5);
    auto r2 = sum(4.6, 5.4);
    auto r3 = sum<float> (7, 15.2); //ça permet de dire "prend ce type"

    std::cout << r1 << std::endl;
    std::cout << r2 << std::endl;
    std::cout << r3 << std::endl;

    return 0;
}
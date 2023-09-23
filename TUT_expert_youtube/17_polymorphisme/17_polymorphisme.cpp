#include <iostream>
#include <string>
#include "someone.hpp"
#include "english.hpp"
#include "indonesian.hpp"

/*polymorphisme d'heritage*/

int main()
{
    English en{"English"};
    en.sayGoodNight();

    Indonesian id{"Bunda"};
    id.sayGoodNight();

    return 0;
}
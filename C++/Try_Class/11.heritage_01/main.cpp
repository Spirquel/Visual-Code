#include "~/Documents/Visual-Code/C++/Try_Class/11.heritage_01/Rectangle/Rectangle.hpp"
#include "~/Documents/Visual-Code/C++/Try_Class/11.heritage_01/Cercle/Cercle.hpp"

int main()
{
    Rectangle r{10.0, 5.0};
    Cercle c{10.0};

    c.getArea();
    r.getArea();
    r.getPerimeter();

    return 0;
}

#include <iostream>
#include "Rectangle.hpp"

int main()
{
    Rectangle r{10.0, 20.0};
    r.print();
    r.getPerimeter();
    r.getArea();
    r.print();
    r.scale(5.0);
    r.print();

    return 0;
}
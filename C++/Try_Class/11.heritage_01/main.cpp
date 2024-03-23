#include "Rectangle/Rectangle.hpp"
#include "Cercle/Cercle.hpp"

int main()
{
    Rectangle r{10.0, 5.0};
    Cercle c{10.0};

    c.getArea();
    r.getArea();
    r.getPerimeter();

    return 0;
}

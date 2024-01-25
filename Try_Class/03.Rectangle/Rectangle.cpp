#include <iostream>
#include "Rectangle.hpp"

Rectangle::Rectangle(double width, double height) : _width(width), _height(height)
{

}

double Rectangle::getPerimeter()
{
    return 2*((this->_width) + (this->_height));
}

double Rectangle::getArea()
{
    return ((this->_width) * (this->_height));
}

void Rectangle::scale(double zoom)
{
    this->_width *= zoom;
    this->_height *= zoom;
}

void Rectangle::print()
{
    std::cout << "%.3f" << this->_width << " %.3f" << this->_height << std::endl; 
}
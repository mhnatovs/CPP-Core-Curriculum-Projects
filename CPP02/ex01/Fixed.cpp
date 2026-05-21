#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
    _fixedPointValue = 0;
}

// Fixed::Fixed(const Fixed& other)
// {
//     std::cout << "Copy constructor called\n";
//     *this = other;
// }
// Fixed& Fixed::operator=(const Fixed& other)//overload
// {
//     std::cout << "Copy assignment operator called\n";

//     if (this != &other)
//         _fixedPointValue = other.getRawBits();

//     return (*this);
// }

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

Fixed::Fixed(const int)
{

}

Fixed::Fixed(const float)
{
    
}

int Fixed::toInt( void ) const
{
    return ((int)_fixedPointValue);
}

float Fixed::toFloat(void) const
{
    return ((float)_fixedPointValue / 256);
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return (out);
}

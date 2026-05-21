#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
    _fixedPointValue = 0;
}

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called\n";
    *this = other;
}
Fixed& Fixed::operator=(const Fixed& other)//overload
{
    std::cout << "Copy assignment operator called\n";

    if (this != &other)
        _fixedPointValue = other.getRawBits();

    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called\n";
    return (_fixedPointValue);
}

void Fixed::setRawBits(int const raw)
{
    _fixedPointValue = raw;
}

/*
Copy constructor
створює НОВИЙ object.

Assignment operator
копіює у ВЖЕ ІСНУЮЧИЙ object.
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 15:35:51 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/05/24 14:49:14 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    // std::cout << "Default constructor called\n";
    _fixedPointValue = 0;
}

Fixed::Fixed(const Fixed& other)
{
    // std::cout << "Copy constructor called\n";
    *this = other;
}
Fixed& Fixed::operator=(const Fixed& other)
{
    // std::cout << "Copy assignment operator called\n";

    if (this != &other)
        _fixedPointValue = other.getRawBits();

    return (*this);
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called\n";
}

Fixed::Fixed(const int value)
{
    // std::cout << "Int constructor called" << std::endl;
    _fixedPointValue = value << _fractionalBits;
}

Fixed::Fixed(const float value)
{
    // std::cout << "Float constructor called" << std::endl;
    _fixedPointValue = roundf(value * (1 << _fractionalBits));
}

int Fixed::toInt( void ) const
{
    return ((int)_fixedPointValue >> _fractionalBits);
}

float Fixed::toFloat(void) const
{
    return ((float)_fixedPointValue / (1 << _fractionalBits));
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return (out);
}

int Fixed::getRawBits(void) const
{
    return (_fixedPointValue);
}

void Fixed::setRawBits(int const raw)
{
    _fixedPointValue = raw;
}

bool Fixed::operator>(const Fixed& other) const
{
    return (_fixedPointValue > other._fixedPointValue);
}

bool Fixed::operator<(const Fixed& other) const
{
    return (_fixedPointValue < other._fixedPointValue);
}

bool Fixed::operator>=(const Fixed& other) const
{
    return (_fixedPointValue >= other._fixedPointValue);
}

bool Fixed::operator<=(const Fixed& other) const
{
    return (_fixedPointValue <= other._fixedPointValue);
}

bool Fixed::operator==(const Fixed& other) const
{
    return (_fixedPointValue == other._fixedPointValue);
}

bool Fixed::operator!=(const Fixed& other) const
{
    return (_fixedPointValue != other._fixedPointValue);
}

Fixed Fixed::operator+(const Fixed& other) const
{
    return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed Fixed::operator-(const Fixed& other) const
{
    return (Fixed(toFloat() - other.toFloat()));
}

Fixed Fixed::operator/(const Fixed& other) const
{
    return (Fixed(toFloat() / other.toFloat()));
}

Fixed Fixed::operator*(const Fixed& other) const
{
    return (Fixed(toFloat() * other.toFloat()));
}

Fixed& Fixed::operator++()
{
    _fixedPointValue++;
    return (*this);
}

Fixed& Fixed::operator--()
{
    _fixedPointValue--;
    return (*this);
}

// int is a fictional parameter — just to distinguish between them
// the compiler passes 0, but we don't use it
Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    _fixedPointValue++;
    return (tmp);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    _fixedPointValue--;
    return (tmp);
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    if (a < b)
        return (a);
    return (b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    if (a > b)
        return (a);
    return (b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    if (a < b)
        return (a);
    return (b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    if (a > b)
        return (a);
    return (b);
}

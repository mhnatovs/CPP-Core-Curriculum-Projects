/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 10:42:54 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/05/24 14:55:45 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() :x(0), y(0) {}

Point::Point(const float val1, const float val2) : x(val1), y(val2) {}

Point::Point(const Point& other) :x(other.x), y(other.y) {}

Point::~Point() {};

Point& Point::operator=(const Point& other)
{
    (void)other;
    return (*this);
}

Fixed Point::getX() const
{
    return x;
}

Fixed Point::getY() const
{
    return y;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 10:42:47 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/05/24 14:48:23 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed sign(const Point& p1, const Point& p2, const Point& p3)
{
    return (p1.getX() - p3.getX()) * (p2.getY() - p3.getY()) -
           (p2.getX() - p3.getX()) * (p1.getY() - p3.getY());
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed d1 = sign(point, a, b);
    Fixed d2 = sign(point, b, c);
    Fixed d3 = sign(point, c, a);

    // point on edge
    if (d1 == 0 || d2 == 0 || d3 == 0)
        return false;

    // all positive
    if (d1 > 0 && d2 > 0 && d3 > 0)
        return true;

    // all negative
    if (d1 < 0 && d2 < 0 && d3 < 0)
        return true;

    return false;
}

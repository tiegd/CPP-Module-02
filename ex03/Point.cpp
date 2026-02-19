/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 11:02:49 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/19 16:24:14 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"
#include "Fixed.hpp"

Point::Point() : x(0), y(0)
{

}

Point::Point(const float x, const float y)
{
	Fixed	a(x);
	Fixed	b(y);
}

Point::Point(const Point &obj)
{
	*this = obj;
}

Point	&Point::operator=(const Point& obj)
{
	if (this != &obj)
		*this = obj;
	return (*this);
}

float	Point::operator*(const Point& obj)
{
	Fixed	res;
	res = ;
	return res.toFloat();
}

Point::~Point()
{
}

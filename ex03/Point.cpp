/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 11:02:49 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/20 15:55:53 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
}

Point::Point(const Point &obj) : _x(obj._x), _y(obj._y)
{
}

Point	&Point::operator=(const Point& obj)
{
	(void)obj;
	return (*this);
}

Point	Point::operator-(const Point& obj) const
{
	Fixed	resX(this->_x - obj._x);
	Fixed	resY(this->_y - obj._y);
	Point	res(resX.toFloat(), resY.toFloat());

	return (res);
}

const Fixed&	Point::getX() const
{
	return (this->_x);
}

const Fixed&	Point::getY() const
{
	return (this->_y);
}

float	cross_product(Point const a, Point const b)
{
	Fixed	resA(a.getX() * b.getY());
	Fixed	resB(a.getY() * b.getX());
	Fixed	res(resA - resB);
	
	return (res.toFloat());
}

Point::~Point()
{
}

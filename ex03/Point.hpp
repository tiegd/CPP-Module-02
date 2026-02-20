/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 11:03:40 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/20 14:13:14 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __POINT__
#define __POINT__

#include <iostream>
#include "Fixed.hpp"

class   Point
{
    private:
        const Fixed   _x;
        const Fixed   _y;
    public:
        Point();
        Point(const float x, const float y);
        Point(const Point &obj);
        Point&  operator=(const Point& obj);
		Point	operator-(const Point& obj) const;
        const Fixed&	getX() const;
        const Fixed&	getY() const;
        ~Point();
};

bool	bsp( Point const a, Point const b, Point const c, Point const point);
float	cross_product(Point const a, Point const b);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 11:02:49 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/19 11:26:40 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

Point::Point()
{
    Fixed   x(0);
    Fixed   y(0);
}

Point::Point(const float x, const float y)
{
    Fixed   a(x);
    Fixed   b(y);
}

Point::Point(const Point &obj)
{
    *this = obj;
}

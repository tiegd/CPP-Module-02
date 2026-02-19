/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 11:03:40 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/19 11:20:07 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

class   Point
{
    private:
        Fixed   x;
        Fixed   y;
    public:
        Point();
        Point(const float x, const float y);
        Point(const Point &obj);
        Point&  operator=(const Point& obj);
        ~Point();
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 11:12:08 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/20 15:45:32 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// (V2x - Px)(V1y - Py) - (V2y - Py)(V1x - Px) > 0

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Point	v1(b - a);
	Point	v2(point - a);
	Point	v3(c - b);
	Point	v4(point - b);
	Point	v5(a - c);
	Point	v6(point - c);
	if (cross_product(v1, v2) < 0 && cross_product(v3, v4) < 0 && cross_product(v5, v6) < 0)
		return (true);
	else if (cross_product(v1, v2) > 0 && cross_product(v3, v4) > 0 && cross_product(v5, v6) > 0)
		return (true);
	else
		return (false);
}

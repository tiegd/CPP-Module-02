/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 16:52:24 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/20 15:58:40 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

int main( void )
{
	{
		Point const	a(0, 0);
		Point const	b(0, 4);
		Point const	c(-4, 0);
		Point const	p(-1, 1);

		if (bsp(a, b, c, p))
			std::cout << "Point 1 : is in the triangle !\n" << std::endl;
		else
			std::cout << "Point 1 : isn't in the triangle...\n" << std::endl;
	}
	{
		Point const	a(0, 0);
		Point const	b(3, 0);
		Point const	c(0, 3);
		Point const	p(1, 1);

		if (bsp(a, b, c, p))
			std::cout << "Point 2 : is in the triangle !\n" << std::endl;
		else
			std::cout << "Point 2 : isn't in the triangle...\n" << std::endl;
	}
	{
		Point const	a(0, 0);
		Point const	b(4, 0);
		Point const	c(0, 4);
		Point const	p(3, 1);

		if (bsp(a, b, c, p))
			std::cout << "Point 3 : is in the triangle !\n" << std::endl;
		else
			std::cout << "Point 3 : isn't in the triangle...\n" << std::endl;
	}
	{
		Point const	a(0, 0);
		Point const	b(4, 0);
		Point const	c(0, 4);
		Point const	p(0, 4);

		if (bsp(a, b, c, p))
			std::cout << "Point 4 : is in the triangle !\n" << std::endl;
		else
			std::cout << "Point 4 : isn't in the triangle...\n" << std::endl;
	}
	{
		Point const	a(0, 0);
		Point const	b(-4, 0);
		Point const	c(0, -4);
		Point const	p(-4, -3);

		if (bsp(a, b, c, p))
			std::cout << "Point 5 : is in the triangle !\n" << std::endl;
		else
			std::cout << "Point 5 : isn't in the triangle...\n" << std::endl;
	}
	{
		Point const	a(0, 0);
		Point const	b(-4, 0);
		Point const	c(0, -4);
		Point const	p(-1, -2);

		if (bsp(a, b, c, p))
			std::cout << "Point 6 : is in the triangle !\n" << std::endl;
		else
			std::cout << "Point 6 : isn't in the triangle...\n" << std::endl;
	}
	return 0;
}

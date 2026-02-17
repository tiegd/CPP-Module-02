/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 16:52:31 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/17 17:29:13 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Fixed
{
	private:
		int					_raw;
		static const int	_frac;
	public:
		Fixed();
		Fixed(const Fixed &obj);
		Fixed(const int);
		Fixed(const float);
		Fixed& operator=(const Fixed& obj);
		int		getRawBits() const;
		void	setRawBit(int const raw);
		float	toFloat() const;
		int		toInt() const;
		
		~Fixed();
};

std::ostream &operator<<(std::ostream& os, const Fixed& obj);
std::ostream &operator>(std::ostream& os, const Fixed& obj);
std::ostream &operator<(std::ostream& os, const Fixed& obj);
std::ostream &operator>=(std::ostream& os, const Fixed& obj);
std::ostream &operator<=(std::ostream& os, const Fixed& obj);
std::ostream &operator==(std::ostream& os, const Fixed& obj);
std::ostream &operator!=(std::ostream& os, const Fixed& obj);
std::ostream &operator+(std::ostream& os, const Fixed& obj);
std::ostream &operator-(std::ostream& os, const Fixed& obj);
std::ostream &operator*(std::ostream& os, const Fixed& obj);
std::ostream &operator/(std::ostream& os, const Fixed& obj);


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 16:52:31 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/20 14:03:57 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED__
#define __FIXED__

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
		Fixed&				operator=(const Fixed& obj);
		int					getRawBits() const;
		void				setRawBit(int const raw);
		float				toFloat() const;
		int					toInt() const;
		bool				operator>(const Fixed& obj) const;
		bool				operator<(const Fixed& obj) const;
		bool				operator>=(const Fixed& obj) const;
		bool				operator<=(const Fixed& obj) const;
		bool				operator==(const Fixed& obj) const;
		bool				operator!=(const Fixed& obj) const;
		Fixed				operator+(const Fixed& obj) const;
		Fixed				operator-(const Fixed& obj) const;
		Fixed				operator*(const Fixed& obj) const;
		Fixed				operator/(const Fixed& obj) const;
		Fixed				operator++(void);
		Fixed				operator++(int);
		Fixed				operator--(void);
		Fixed				operator--(int);
		static Fixed&		min(Fixed& a, Fixed& b);
		static const Fixed&	min(const Fixed& a, const Fixed& b);
		static Fixed&		max(Fixed& a, Fixed& b);
		static const Fixed&	max(const Fixed& a, const Fixed& b);
		~Fixed();
};

std::ostream &operator<<(std::ostream& os, const Fixed& obj);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 16:52:31 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/18 18:30:32 by gaducurt         ###   ########.fr       */
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
		Fixed				operator+(const Fixed& obj);
		Fixed				operator-(const Fixed& obj);
		Fixed				operator*(const Fixed& obj);
		Fixed				operator/(const Fixed& obj);
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

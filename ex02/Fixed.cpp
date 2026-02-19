#include "Fixed.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 16:52:37 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/04 16:52:38 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

const int	Fixed::_frac = 8;

Fixed::Fixed(): _raw(0)
{
}

Fixed::Fixed(const Fixed &obj)
{
	*this = obj;
}

Fixed::Fixed(const int nb):_raw(nb << this->_frac)
{
}

Fixed::Fixed(const float nb): _raw(roundf(nb * (1 << _frac)))
{
}

Fixed &Fixed::operator=(const Fixed &obj)
{
	if (this != &obj)
		this->_raw = obj.getRawBits();
	return (*this);
}

int Fixed::getRawBits() const
{
	return (_raw);
}

void Fixed::setRawBit(int const raw)
{
	this->_raw = raw;
}

float	Fixed::toFloat() const
{
	return (static_cast<float>(_raw) / (1 << _frac));
}

int	Fixed::toInt() const
{
	return (this->_raw >> _frac);
}

Fixed::~Fixed()
{
}

std::ostream &operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return (os);
}

bool Fixed::operator>(const Fixed &obj) const
{
	return (this->_raw > obj._raw);
}

bool Fixed::operator<(const Fixed &obj) const
{
	return (this->_raw < obj._raw);
}

bool Fixed::operator>=(const Fixed &obj) const
{
	return (this->_raw >= obj._raw);
}

bool Fixed::operator<=(const Fixed &obj) const
{
	return (this->_raw <= obj._raw);
}

bool Fixed::operator==(const Fixed &obj) const
{
	return (this->_raw == obj._raw);
}

bool Fixed::operator!=(const Fixed &obj) const
{
	return (this->_raw != obj._raw);
}

Fixed Fixed::operator+(const Fixed &obj) const
{
	Fixed	res;

	res._raw = this->_raw + obj._raw;
	return (res);
}

Fixed Fixed::operator-(const Fixed &obj) const
{
	Fixed	res;

	res._raw = this->_raw - obj._raw;
	return (res);
}

Fixed Fixed::operator*(const Fixed &obj) const
{
	Fixed	res;

	res._raw = ((long long)this->_raw * (long long)obj._raw) >> _frac;
	return (res);
}

Fixed Fixed::operator/(const Fixed &obj) const
{
	Fixed	res;

	res._raw = ((long long)this->_raw << _frac) / (long long)obj._raw;
	return (res);
}

Fixed Fixed::operator++(void)
{
	this->_raw++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed	res(*this);

	this->_raw++;
	return (res);
}

Fixed Fixed::operator--(void)
{
	this->_raw--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed	res(*this);

	this->_raw--;
	return (res);
}

Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a > b)
		return (a);
	return (b);
}

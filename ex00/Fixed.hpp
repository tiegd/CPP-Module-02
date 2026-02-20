/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 16:52:31 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/20 14:05:02 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED__
#define __FIXED__

class	Fixed
{
	private:
		int					_raw;
		static const int	_frac;
	public:
		Fixed();
		Fixed(const Fixed &obj);
		Fixed& operator=(const Fixed& obj);
		int		getRawBits(void) const;
		void	setRawBit(int const raw);
		~Fixed();
};

#endif

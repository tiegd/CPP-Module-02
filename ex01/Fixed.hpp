/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 16:52:31 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/06 11:34:34 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class	Fixed
{
	private:
		int					_value;
		static const int	_nb_fract_bit = 8;
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 16:52:31 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/05 17:15:01 by gaducurt         ###   ########.fr       */
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
		Fixed& operator=(const Fixed& obj);
		int		getRawBits() const;
		void	setRawBit(int const raw);
		float	toFloat();
		int		toInt();
		~Fixed();
};

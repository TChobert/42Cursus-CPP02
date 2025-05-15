/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 18:53:45 by tchobert          #+#    #+#             */
/*   Updated: 2025/05/13 18:54:28 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <cstdlib>
# include <iostream>
# include <cmath>

class Fixed {

	private:

	int					_numberValue;
	static const int	fractionalBitsNb;

	public:

	Fixed(void);
	Fixed(const int intValue);
	Fixed(const float floatValue);
	Fixed(const Fixed &obj);
	Fixed& operator=(const Fixed& other);
	friend std::ostream& operator<<(std::ostream& os, const Fixed &fixed);
	~Fixed(void);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	int		toInt(void) const;
	float	toFloat(void) const;
};

#endif
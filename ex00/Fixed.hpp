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

class Fixed {

	private:

	int					_numberValue;
	static const int	fractionalBitsNb;

	public:

	Fixed(void);
	Fixed(const Fixed &other);
	Fixed& operator=(const Fixed& other);
	~Fixed(void);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif
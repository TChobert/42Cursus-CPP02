/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 16:02:51 by tchobert          #+#    #+#             */
/*   Updated: 2025/05/14 16:03:03 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "Fixed.hpp"

#include "Fixed.hpp"

int main() {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c(10);
	Fixed d(10.5f);
	Fixed e = d;

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;
	std::cout << "e (copy of d) = " << e << std::endl;

	std::cout << "\n-- Increment/Decrement tests --" << std::endl;
	std::cout << "++a = " << ++a << std::endl;
	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "--a = " << --a << std::endl;
	std::cout << "a-- = " << a-- << std::endl;
	std::cout << "a = " << a << std::endl;

	std::cout << "\n-- Arithmetic tests --" << std::endl;
	std::cout << "c + d = " << c + d << std::endl;
	std::cout << "c - d = " << c - d << std::endl;
	std::cout << "c * d = " << c * d << std::endl;
	std::cout << "c / d = " << c / d << std::endl;

	std::cout << "\n-- Comparison tests --" << std::endl;
	std::cout << std::boolalpha;
	std::cout << "c > d: " << (c > d) << std::endl;
	std::cout << "c < d: " << (c < d) << std::endl;
	std::cout << "c >= e: " << (c >= e) << std::endl;
	std::cout << "c <= e: " << (c <= e) << std::endl;
	std::cout << "c == e: " << (c == e) << std::endl;
	std::cout << "c != e: " << (c != e) << std::endl;

	std::cout << "\n-- Min/Max tests --" << std::endl;
	std::cout << "min(c, d) = " << Fixed::min(c, d) << std::endl;
	std::cout << "max(c, d) = " << Fixed::max(c, d) << std::endl;
	std::cout << "min(b, e) = " << Fixed::min(b, e) << std::endl;
	std::cout << "max(b, e) = " << Fixed::max(b, e) << std::endl;

	return (EXIT_SUCCESS);
}

// int main( void ) {
// 	Fixed a;
// 	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

// 	std::cout << a << std::endl;
// 	std::cout << ++a << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << a++ << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << b << std::endl;
// 	std::cout << Fixed::max( a, b ) << std::endl;
// 	return (EXIT_SUCCESS);
// }

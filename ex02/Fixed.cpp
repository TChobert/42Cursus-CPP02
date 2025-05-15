/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 19:20:59 by tchobert          #+#    #+#             */
/*   Updated: 2025/05/13 19:21:12 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::fractionalBitsNb = 8;

// Constructors and destructor

Fixed::Fixed(void) {
	_numberValue = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int intValue) {
	std::cout << "Int constructor called" << std::endl;
	_numberValue = (intValue * (1 << fractionalBitsNb));
}

Fixed::Fixed(const float floatValue) {
	std::cout << "Float constructor called" << std::endl;
	_numberValue = (roundf(floatValue * (1 << fractionalBitsNb)));
}

Fixed::Fixed(const Fixed &obj) {
	_numberValue = obj._numberValue;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed&	Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &other) {
		this->_numberValue = other._numberValue;
	}
	return (*this);
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

//Comparisons operators

bool	Fixed::operator!=(const Fixed& other) const {
	return (this->_numberValue != other._numberValue);
}

bool	Fixed::operator==(const Fixed& other) const {
	return (this->_numberValue == other._numberValue);
}

bool	Fixed::operator<=(const Fixed& other) const {
	return (this->_numberValue <= other._numberValue);
}

bool	Fixed::operator>=(const Fixed& other) const {
	return (this->_numberValue >= other._numberValue);
}

bool	Fixed::operator<(const Fixed& other) const {
	return (this->_numberValue < other._numberValue);
}

bool	Fixed::operator>(const Fixed& other) const {
	return (this->_numberValue > other._numberValue);
}

// Arithmetic operators

// OS operator

std::ostream&	operator<<(std::ostream& os, const Fixed &fixed) {
	os << fixed.toFloat();
	return (os);
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (_numberValue);
}

void	Fixed::setRawBits(int const raw) {
	_numberValue = raw;
}

int	Fixed::toInt(void) const {
	return (_numberValue / (1 << fractionalBitsNb));
}

float	Fixed::toFloat(void) const {
	return (static_cast<float>(_numberValue) / (1 << fractionalBitsNb));
}

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
}

Fixed::Fixed(const int intValue) {
	_numberValue = (intValue * (1 << fractionalBitsNb));
}

Fixed::Fixed(const float floatValue) {
	_numberValue = (roundf(floatValue * (1 << fractionalBitsNb)));
}

Fixed::Fixed(const Fixed &obj) {
	_numberValue = obj._numberValue;
}

Fixed&	Fixed::operator=(const Fixed& other) {
	if (this != &other) {
		this->_numberValue = other._numberValue;
	}
	return (*this);
}

Fixed::~Fixed(void) {
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

Fixed	Fixed::operator+(const Fixed& other) const {
	Fixed	result;

	result.setRawBits(this->_numberValue + other._numberValue);
	return (result);
}

Fixed	Fixed::operator-(const Fixed& other) const {
	Fixed	result;

	result.setRawBits(this->_numberValue - other._numberValue);
	return (result);
}

Fixed	Fixed::operator*(const Fixed& other) const {
	Fixed	result;
	long long tmp;
	 
	tmp = static_cast<long long>(this->_numberValue) * other._numberValue;
	tmp = tmp >> fractionalBitsNb;
	result.setRawBits(static_cast<int>(tmp));
	return (result);
}

Fixed	Fixed::operator/(const Fixed& other) const {
	Fixed	result;
	long long tmp;

	tmp = (static_cast<long long>(this->_numberValue) << fractionalBitsNb) / other._numberValue;
	result.setRawBits(static_cast<int>(tmp));
	return (result);
}

// Increment and decrement operators

Fixed&	Fixed::operator++(void) {
	++this->_numberValue;
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed	temp = *this;
	++(*this);
	return (temp);
}

Fixed&	Fixed::operator--(void) {
	--this->_numberValue;
	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed	temp = *this;
	--(*this);
	return (temp);
}

// OS operator

std::ostream&	operator<<(std::ostream& os, const Fixed &fixed) {
	os << fixed.toFloat();
	return (os);
}

int	Fixed::getRawBits(void) const {
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

Fixed&	Fixed::min(Fixed& a, Fixed& b) {
	return (a < b) ? a : b;
}

const Fixed&	Fixed::min(const Fixed&a, const Fixed& b) {
	return (a < b) ? a : b;
}

Fixed&	Fixed::max(Fixed& a, Fixed& b) {
	return (a > b) ? a : b;
}

const Fixed&	Fixed::max(const Fixed&a, const Fixed& b) {
	return (a > b) ? a : b;
}

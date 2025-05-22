/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:53:46 by tchobert          #+#    #+#             */
/*   Updated: 2025/05/22 14:54:04 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

///// CANONICAL /////

Point::Point(void) : _x(0), _y(0) {
}

Point::Point(const float x, const float y) : _x(x), _y(y) {
}

Point::Point(const Point& other) : _x(other._x), _y(other._y) {
}

Point&	Point::operator=(const Point& other) {
	if (this != &other) {
		return (*this);
	}
	return (*this);
}

Point::~Point(void) {}

///// MEMBERS FUNCTIONS /////

const Fixed&	Point::getX(void) const {
	return (_x);
}

const Fixed&	Point::getY(void) const {
	return (_y);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:48:31 by tchobert          #+#    #+#             */
/*   Updated: 2025/05/22 14:49:04 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class	Point {

	private:

	const Fixed	_x;
	const Fixed	_y;

	public:

	Point(void);
	Point(const float x, const float y);
	Point(const Point& other);
	Point&	operator=(const Point& other);
	~Point(void);
	const Fixed&	getX(void) const;
	const Fixed&	getY(void) const;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 15:21:08 by tchobert          #+#    #+#             */
/*   Updated: 2025/05/22 15:21:22 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	Fixed x = ((b.getX() - a.getX()) * (point.getY() - a.getY()))
			- ((b.getY() - a.getY()) * (point.getX() - a.getX()));

	Fixed y = ((c.getX() - b.getX()) * (point.getY() - b.getY()))
			- ((c.getY() - b.getY()) * (point.getX() - b.getX()));

	Fixed z = ((a.getX() - c.getX()) * (point.getY() - c.getY()))
			- ((a.getY() - c.getY()) * (point.getX() - c.getX()));

	if ((x > 0 && y > 0 && z > 0) || (x < 0 && y < 0 && z < 0))
		return true;
	return false;
}


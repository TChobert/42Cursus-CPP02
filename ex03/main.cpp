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
#include "Point.hpp"

// Prototype de la fonction BSP
bool bsp(Point const a, Point const b, Point const c, Point const point);

int main() {
	// Définition des sommets du triangle
	Point a(0.0f, 0.0f);
	Point b(10.0f, 0.0f);
	Point c(5.0f, 10.0f);

	// Cas 1 : Point à l’intérieur du triangle
	Point p1(5.0f, 5.0f);
	std::cout << "p1 (inside): " << (bsp(a, b, c, p1) ? "INSIDE ✅" : "OUTSIDE ❌") << std::endl;

	// Cas 2 : Point à l’extérieur du triangle
	Point p2(15.0f, 5.0f);
	std::cout << "p2 (outside): " << (bsp(a, b, c, p2) ? "INSIDE ❌" : "OUTSIDE ✅") << std::endl;

	// Cas 3 : Point sur le bord AB
	Point p3(5.0f, 0.0f);
	std::cout << "p3 (on edge AB): " << (bsp(a, b, c, p3) ? "INSIDE ❌" : "OUTSIDE ✅") << std::endl;

	// Cas 4 : Point sur un sommet (point A)
	Point p4(0.0f, 0.0f);
	std::cout << "p4 (on vertex A): " << (bsp(a, b, c, p4) ? "INSIDE ❌" : "OUTSIDE ✅") << std::endl;

	return (EXIT_SUCCESS);
}

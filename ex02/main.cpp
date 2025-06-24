/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 15:04:47 by skock             #+#    #+#             */
/*   Updated: 2025/06/24 15:47:26 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed a(5.2f);
	Fixed c(6.3f);
	std::cout << "ARITHMETIC OVERLOAD OPERATOR" << std::endl;
	
	std::cout << c / a << std::endl;
	std::cout << c * a << std::endl;
	std::cout << c + a << std::endl;
	std::cout << c - a << std::endl;

////////////////////////////////////////////////////////////////////////////////
	Fixed ca(2);
	Fixed cb(2);
	Fixed cc(2);
	Fixed cd(2);

	std::cout << "INCREMENTATION AND DECREMENTATION" << std::endl;

	std::cout << "post incrementation : before" << std::endl;
	std::cout << ca++ << std::endl;
	std::cout << "post incrementation : after" << std::endl;
	std::cout << ca << std::endl;
	std::cout << "pre incrementation : before" << std::endl;
	std::cout << cb << std::endl;
	std::cout << "pre incrementation : after" << std::endl;
	std::cout << ++cb << std::endl;
	std::cout << "pre decrementation : before" << std::endl;
	std::cout << cc << std::endl;
	std::cout << "pre decrementation : after" << std::endl;
	std::cout << --cc << std::endl;
	std::cout << "post decrementation : before" << std::endl;
	std::cout << cd-- << std::endl;
	std::cout << "post decrementation : after" << std::endl;
	std::cout << cd << std::endl;
////////////////////////////////////////////////////////////////////////////////
	std::cout << "COMPARISON OPERATOR" << std::endl;
	if (c > a)
		std::cout << "c is greater than a" << std::endl;
	else
		std::cout << "a is greater than c" << std::endl;
	if (a != c)
		std::cout << "a and c are different" << std::endl;
	else
		std::cout << "a and c are the same" << std::endl;
////////////////////////////////////////////////////////////////////////////////
	std::cout << "COMPARISON OPERATOR MIN AND MAX" << std::endl;
	
	Fixed w(3);
	Fixed x(5);

	std::cout << "Min const: " << Fixed::min(w, x) << std::endl;
	std::cout << "Max const: " << Fixed::max(w, x) << std::endl;

	Fixed y(7);
	Fixed z(2);

	Fixed& minRef = Fixed::min(y, z);
	Fixed& maxRef = Fixed::max(y, z);

	std::cout << "Min ref: " << minRef << std::endl;
	std::cout << "Max ref: " << maxRef << std::endl;

	// Modifier via référence
	minRef = Fixed(10);
	std::cout << "After modification minRef: " << y << ", " << z << std::endl;

////////////////////////////////////////////////////////////////////////////////
	return 0;
}

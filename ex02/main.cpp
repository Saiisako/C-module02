/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 15:04:47 by skock             #+#    #+#             */
/*   Updated: 2025/06/09 16:43:48 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <vector>

int	main(void)
{
	Fixed c(2);
	Fixed a(5.05f);
	Fixed const b(a * c);
	
	std::cout << "a is " << a << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "b is " << b << std::endl;
	
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;

	std::cout << (a == b) << std::endl;
	return 0;
}

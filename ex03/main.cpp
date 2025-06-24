/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 15:55:32 by skock             #+#    #+#             */
/*   Updated: 2025/06/24 18:05:11 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main(void)
{
	Point a(4, -2);
	Point b(4, 5);
	Point c(1, 1);
	Point d(2.5f, 2.5f);
	std::cout << std::endl;
	if (bsp(a, b, c, d))
		std::cout << "the point " << ANSI_GREEN << "is" << ANSI_RESET << " inside the triangle" << std::endl;
	else
		std::cout << "the point " << ANSI_RED << "isn't" << ANSI_RESET << " inside the triangle" << std::endl;
}
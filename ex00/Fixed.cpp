/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 14:43:00 by skock             #+#    #+#             */
/*   Updated: 2025/05/16 17:37:48 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed() 
{
	std::cout << "Default constructor called" << std::endl;
	n = 0;
}

Fixed::~Fixed() {std::cout << "Destructor called" << std::endl;}

Fixed::Fixed(const Fixed& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	other.getRawBits();
	if (this != &other)
	{
		(*this).n = other.n;
	}
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (n);
}

void Fixed::setRawBits(int const raw)
{
	this->n = raw;
}

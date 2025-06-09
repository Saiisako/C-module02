/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 14:43:00 by skock             #+#    #+#             */
/*   Updated: 2025/06/09 18:15:02 by skock            ###   ########.fr       */
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

Fixed& Fixed::operator=(const Fixed& other)		//a = b
{
	std::cout << "Copy assignment operator called" << std::endl;
	other.getRawBits();
	if (this != &other)
	{
		(*this).n = other.n;
	}
	return *this;
}

Fixed Fixed::operator+(const Fixed& a)		//a + b
{
	Fixed o;
	
	o.n = this->n + a.n;
	return o;
}

Fixed Fixed::operator-(const Fixed &a)
{
	Fixed o;
	
	o.n = this->n - a.n;
	return o;
}

Fixed Fixed::operator*(const Fixed& a)		//a * b
{
	Fixed o;
	
	o.setRawBits((this->n * a.n) >> i);
	return o;
}

Fixed Fixed::operator/(const Fixed &a)		//a / b
{
	Fixed o;
	o.setRawBits((this->n / a.n) >> i);
	return o;
}

Fixed& Fixed::operator++()		// ++i
{
	this->n +=1;
	return (*this);
}

Fixed Fixed::operator++(int)	// i++
{
	Fixed tmp = *this;
	this->n +=1;
	return (tmp);
}

Fixed& Fixed::operator--()		// --i
{
	this->n -=1;
	return (*this);
}

Fixed Fixed::operator--(int)	// i--
{
	Fixed tmp = *this;
	this->n -=1;
	return (tmp);

}


bool Fixed::operator!=(const Fixed &other) const
{
	if (this->getRawBits() == other.getRawBits())
		return false;
	return true;
}

bool Fixed::operator==(const Fixed &other) const
{
	if (this->getRawBits() == other.getRawBits())
		return true;
	return false;
}

bool Fixed::operator>=(const Fixed &other) const
{
	if (this->getRawBits() >= other.getRawBits())
		return true;
	return false;
}

bool Fixed::operator<=(const Fixed &other) const
{
	if (this->getRawBits() <= other.getRawBits())
		return true;
	return false;
}

bool Fixed::operator>(const Fixed &other) const
{
	if (this->getRawBits() > other.getRawBits())
		return true;
	return false;
}

bool Fixed::operator<(const Fixed &other) const
{
	if (this->getRawBits() < other.getRawBits())
		return true;
	return false;
}


int Fixed::getRawBits(void) const
{
	return (n);
}

void Fixed::setRawBits(int const raw)
{
	this->n = raw;
}


Fixed::Fixed(const int cn)
{
	std::cout << "int constructor called" << std::endl;
	n = cn << i;
}

Fixed::Fixed(const float cn)
{
	std::cout << "float constructor called" << std::endl;
	n = roundf(cn * (1 << i));
}

std::ostream& operator<<(std::ostream &flux, Fixed const &fraction)
{
	flux << fraction.toFloat();
	return (flux);
}

float Fixed::toFloat(void) const
{
	return ((float)n / (1 << i));
}

int Fixed::toInt(void) const
{
	return (n >> i);
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	return (a > b) ? b : a;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a > b) ? b : a;
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b) ? a : b;
}
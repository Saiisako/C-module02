/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 14:43:07 by skock             #+#    #+#             */
/*   Updated: 2025/06/24 14:55:30 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <cmath>

class Fixed
{
	private:
		int					n;
		static const int	i = 8;
	public:
		Fixed();
		Fixed(const int f);
		Fixed(const float f);
		Fixed(const Fixed& copy);
		Fixed& operator=(const Fixed& other);
		Fixed operator+(const Fixed& a);
		Fixed operator-(const Fixed& a);
		Fixed operator*(const Fixed& a);
		Fixed operator/(const Fixed& a);
		Fixed& operator++();
		Fixed& operator--();
		Fixed operator++(int);
		Fixed operator--(int);
		bool operator!=(const Fixed& other) const;
		bool operator==(const Fixed& other) const;
		bool operator>=(const Fixed& other) const;
		bool operator<=(const Fixed& other) const;
		bool operator>(const Fixed& other) const;
		bool operator<(const Fixed& other) const;
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		static const Fixed& min(const Fixed&a, const Fixed&b);
		static Fixed& min(Fixed&a, Fixed&b);
		static const Fixed& max(const Fixed&a, const Fixed&b);
		static Fixed& max(Fixed&a, Fixed&b);
	};
std::ostream& operator<<(std::ostream &flux, Fixed const &fraction);
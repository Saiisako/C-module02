/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 15:55:33 by skock             #+#    #+#             */
/*   Updated: 2025/06/24 18:05:47 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Fixed.hpp"

#define ANSI_RED	"\x1b[31m"
#define ANSI_GRAY	"\x1b[90m"
#define ANSI_RESET	"\x1b[0m"
#define ANSI_GREEN "\x1b[32m"

class Point
{
private:
	const Fixed	x;
	const Fixed	y;
public:
	Point();
	Point(const float x, const float y);
	Point(const int x, const int y);
	Point(const Point& copy);
	Point& operator=(const Point& other);
	~Point();
	Fixed	get_x(void) const;
	Fixed	get_y(void) const;
};

bool bsp(Point const a,Point const b, Point const c, Point const point);

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 16:04:14 by skock             #+#    #+#             */
/*   Updated: 2025/06/24 18:06:08 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(const float x, const float y) : x(x), y(y)
{
	std::cout << ANSI_GRAY << "float point construction" << ANSI_RESET << std::endl;
}

Point::Point(const int x, const int y) : x(x), y(y)
{
	std::cout << ANSI_GRAY << "int point construction" << ANSI_RESET << std::endl;
}

Point::Point(const Point &copy) : x(copy.x), y(copy.y)
{
	*this = copy;
}

Point::~Point() {}

Fixed Point::get_x(void) const
{
	return (this->x);
}


Fixed Point::get_y(void) const
{
	return (this->y);
}

Point& Point::operator=(const Point &other)
{
	(void)other;
	return *this;
}


// Formula is :
// (B - A) * (P - A)
// (C - B) * (P - B)
// (A - C) * (P - C)
// if the sign is equal then it is not part of it

bool	bsp(Point const a, Point const b, Point const c, Point const point) 
{
	Fixed first = ((b.get_x() - a.get_x()) * (point.get_y() - a.get_y())) - ((b.get_y() - a.get_y()) * (point.get_x() - a.get_x()));
	Fixed second = ((c.get_x() - b.get_x()) * (point.get_y() - b.get_y())) - ((c.get_y() - b.get_y()) * (point.get_x() - b.get_x()));
	Fixed third = ((a.get_x() - c.get_x()) * (point.get_y() - c.get_y())) - ((a.get_y() - c.get_y()) * (point.get_x() - c.get_x()));

	if ((first > 0 && second > 0 && third > 0) || (first < 0 && second < 0 && third < 0))
		return (true);
	else
		return (false);
}


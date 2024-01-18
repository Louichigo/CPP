/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:47:33 by lobertho          #+#    #+#             */
/*   Updated: 2024/01/16 15:18:45 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int value;
	static const int bits = 8;

public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &src);
	Fixed &operator=(const Fixed &rhs);
	Fixed(const int v_int);
	Fixed(const float v_float);

	int		getRawBits() const;
	void	setRawBits(const int raw);
	float	toFloat() const;
	int		toInt() const;


};

std::ostream &operator<<(std::ostream &o, const Fixed &i);

#endif
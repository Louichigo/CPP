/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:47:32 by lobertho          #+#    #+#             */
/*   Updated: 2024/01/10 15:17:55 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
private:
	int	value;
	static const int n_bits = 8;

public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &src);
	Fixed &operator=(const Fixed &rhs);

	int		getRawBits() const;
	void	setRawBits(int const raw);

};

#endif
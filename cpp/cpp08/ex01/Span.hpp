/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:24:26 by lobertho          #+#    #+#             */
/*   Updated: 2024/02/28 17:00:16 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <stdexcept>
#include <algorithm>
#include <iterator>

class Span
{
private:
	std::vector<int> nb;
	unsigned int N;

public:
	Span(unsigned int n);
	~Span();
	Span(const Span &src);
	Span &operator=(const Span &rhs);

	void	addNumber(int i);
	int		shortestSpan();
	int		longestSpan();
	void	addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);

	class NotEnoughNumbersException : public std::exception
	{
		const char *what() const throw()
		{
			return ("There is not enough numbers in the contrainer to mesure span");
		}
	};
};


#endif
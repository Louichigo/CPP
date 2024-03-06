/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:24:19 by lobertho          #+#    #+#             */
/*   Updated: 2024/02/28 17:00:01 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : N(n), nb(0)
{
	std::cout << "Constructor called" << std::endl;	
}

Span::~Span()
{
	std::cout << "Destructor called" << std::endl;
}

Span::Span(const Span &src)
{
	*this = src;
}

Span	&Span::operator=(const Span &rhs)
{
	this->N = rhs.N;
	this->nb = rhs.nb;
	return (*this);
}

void	Span::addNumber(int i)
{
	if (nb.size() >= N)
		throw std::overflow_error("max capacity alreay reach");
	nb.push_back(i);
}

int	Span::shortestSpan()
{
	int min;
	int temp;

	if (nb.size() <= 1)
		throw NotEnoughNumbersException();
	std::sort(nb.begin(), nb.end());
	min = nb[1] - nb[0];
	for (int i = 1; i < nb.size(); i++)
	{
		temp = nb[i] - nb[i - 1];
		if (temp < min)
			min = temp;
	}
	return (min);
}

int Span::longestSpan()
{
	int max;

	if (nb.size() <= 1)
		throw NotEnoughNumbersException();
	std::sort(nb.begin(), nb.end());
	max = nb.back() - nb.front();
	return (max);
}

void	Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (std::distance(begin, end) + nb.size() > N)
		throw std::overflow_error("The range exceed the max capacity");
	nb.insert(nb.end(), begin, end);
}
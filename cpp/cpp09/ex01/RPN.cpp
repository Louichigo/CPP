/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:48:56 by lobertho          #+#    #+#             */
/*   Updated: 2024/03/13 15:48:22 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
	//std::cout << "Constructor called" << std::endl;
	return;
}

RPN::~RPN()
{
	//std::cout << "Destructor called" << std::endl;
	return;
}

RPN::RPN(const RPN &src)
{
	*this = src;
}

RPN	&RPN::operator=(const RPN &rhs)
{
	this->numbers = rhs.numbers;
	return (*this);
}

void	RPN::calc(std::string &str)
{
	int val1;
	int val2;
	int result;

	for(int i = 0; i < str.length(); i++)
	{
		if (std::isdigit(str[i]) && str[i + 1] == ' ')
		{
			numbers.push(str[i] - '0');
		}
		else if ((str[i] == '+' || str[i] == '-' || str[i] == '/'
			|| str[i] == '*') && (str[i + 1] == '\0' || str[i + 1] == ' ') && numbers.size() == 2)
		{
			val2 = numbers.top();
			numbers.pop();
			val1 = numbers.top();
			numbers.pop();
			result = opcalc(str[i], val1, val2);
			numbers.push(result);
		}
		else if (std::isspace(str[i]))
		{
			continue;
		}
		else
		{
			std::cout << "Error" << std::endl;
			return;
		}
	}
	std::cout << result << std::endl;
	return ;
}

int	RPN::opcalc(char &op, int val1, int val2)
{
	if (op == '+')
		return (val1 + val2);
	else if (op == '-')
		return (val1 - val2);
	else if (op == '/' && val2 != 0)
		return (val1 / val2);
	else if (op == '*')
		return (val1 * val2);
	else
		throw (InvalidTokenException());
}
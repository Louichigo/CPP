/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:49:03 by lobertho          #+#    #+#             */
/*   Updated: 2024/03/13 15:06:47 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <stack>
#include <string>

class RPN
{
private:
	std::stack<int> numbers;
	int	opcalc(char &op, int val1, int val2);

public:
	RPN();
	~RPN();
	RPN(const RPN &src);
	RPN	&operator=(const RPN &rhs);

	void	calc(std::string &expression);

	class InvalidTokenException : public std::exception
	{
		const char *what() const throw()
		{
			return ("Error. Invalid token or trying to divise by 0.");
		}
	};
};

#endif
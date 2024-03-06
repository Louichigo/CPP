/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:27:21 by lobertho          #+#    #+#             */
/*   Updated: 2024/02/27 16:10:10 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <stdexcept>

class NoOccurenceException : public std::exception
{
	const char *what() const throw()
	{
		return ("No occurence was found in the container");
	}
};

template<typename T>
typename T::iterator easyfind(T &container, int value)
{
	typename T::iterator it;
	
	it = std::find(container.begin(), container.end(), value);
	if (it == container.end())
		throw NoOccurenceException();
	std::cout << "Occurence of " << value << " found in position " << (std::distance(container.begin(), it) + 1) << std::endl;
	return (it);
}

#endif
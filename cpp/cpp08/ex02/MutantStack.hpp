/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 17:33:21 by lobertho          #+#    #+#             */
/*   Updated: 2024/03/06 18:31:04 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <vector>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack() {std::cout << "Constructor called" << std::endl;}
	~MutantStack() {std::cout << "Destructor called" << std::endl;}
	MutantStack(const MutantStack &src) {*this->c = src.c;}
	MutantStack &operator=(const MutantStack &rhs) {this->c = rhs.c; return *this;}

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin()
	{
		return (this->c.begin());
	}

	iterator end()
	{
		return (this->c.end());
	}

};

#endif
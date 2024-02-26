/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:57:03 by lobertho          #+#    #+#             */
/*   Updated: 2024/02/26 16:42:21 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
private:
	T* elements;
	unsigned int array_size;

public:
	Array<T>() : elements(NULL), array_size(0) 
	{
		std::cout << "Default constructor called" << std::endl;
	}

	Array<T>(unsigned int n) : elements(new T[n]), array_size(n)
	{
		std::cout << "Constructor called" << std::endl;
		for (unsigned int i = 0; i < this->array_size; i++) {
			this->elements[i] = T();
		}
	}

	Array<T>(const Array<T> &src) : elements(new T[src.array_size]), array_size(src.array_size) 
	{
		std::cout << "Copy constructor called" << std::endl;
		for (unsigned int i = 0; i < this->array_size; i++) {
			this->elements[i] = src.elements[i];
		}
	}

	Array<T>	&operator=(const Array<T> &rhs)
	{
		this->elements = new T[rhs.array_size];
		this->array_size = rhs.array_size;
		for (unsigned int i = 0; i < this->array_size; i++) {
			this->elements[i] = rhs.elements[i];
		}
		return (*this);
	}
	
	~Array<T>()
	{
		std::cout << "Destructor called" << std::endl;
		delete[] elements;
	}

	unsigned int	size() const {
		return (array_size);
	}

	T& operator[](unsigned int i)
	{
		if (i >= this->array_size || i < 0)
			throw BadIndexException();
		return (this->elements[i]);
	}

	class BadIndexException : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("Invalid index: out of bounds");
			}
	};
	
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 16:44:31 by lobertho          #+#    #+#             */
/*   Updated: 2024/02/26 14:00:46 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>
#include <string>

template<typename T>
void swap(T &x, T &y) {
	T temp = y;
	y = x;
	x = temp;
}

template<typename T>
T	max(T const & x, T const & y) {
	return ((x>y) ? x : y);
}

template<typename T>
T	min(T const & x, T const & y) {
	return ((x<y) ? x : y);
}

#endif
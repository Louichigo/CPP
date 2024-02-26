/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:19:46 by lobertho          #+#    #+#             */
/*   Updated: 2024/02/26 14:47:03 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T, typename F>
void	iter(T* array, size_t length, F fonction){
	for(size_t i = 0; i < length; i++){
		fonction(array[i]);
	}
}

template<typename T>
void	ft_print(const T &i){
	std::cout << i << std::endl;
}


#endif
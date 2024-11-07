/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:27:45 by juestrel          #+#    #+#             */
/*   Updated: 2024/11/07 12:08:42 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	{
		int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
		iter(array, sizeof(array) / sizeof(array[0]), printArray);
		iter(array, sizeof(array) / sizeof(array[0]), exponential);
		std::cout << "\n";
		iter(array, sizeof(array) / sizeof(array[0]), printArray);
	}

	{
		char string[] = "This is a test";
		iter(string, sizeof(string) / sizeof(string[0]), printArray);		
	}
	return (0);
}
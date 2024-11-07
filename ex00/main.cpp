/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:37:33 by juestrel          #+#    #+#             */
/*   Updated: 2024/11/07 10:52:42 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main(void)
{
	{
		int a = 1, b = 2;
		std::cout << "Value of a is " << a << " and value of b is " << b << std::endl;
		swap(a, b);
		std::cout << "Value of a is " << a << " and value of b is " << b << std::endl;
	}
	std::cout << "\n";
	{
		float a = 1.5f, b = 60.789f;
		std::cout << "Value of a is " << a << " and value of b is " << b << std::endl;
		swap(a, b);
		std::cout << "Value of a is " << a << " and value of b is " << b << std::endl;
	}
	std::cout << "\n";
	{
		std::string a = "This is a string", b = "This is another string";
		std::cout << "Value of a is " << a << " and value of b is " << b << std::endl;
		swap(a, b);
		std::cout << "Value of a is " << a << " and value of b is " << b << std::endl;
	}
	return (0);
}
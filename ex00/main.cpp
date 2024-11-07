/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:37:33 by juestrel          #+#    #+#             */
/*   Updated: 2024/11/07 12:11:17 by juestrel         ###   ########.fr       */
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
	std::cout << "\n";
	{
		int a = 10, b = 5;
		std::cout << "Min is " << min(a, b) << " and max is " << max(a, b) << std::endl;
	}
	std::cout << "\n";
	{
		float a = 312.78f, b = 98521.78f;
		std::cout << "Min is " << min(a, b) << " and max is " << max(a, b) << std::endl;
	}
	std::cout << "\n";
	{
		int a = 2;
		int b = 3;
		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
		std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
		std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
	}
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:22:50 by juestrel          #+#    #+#             */
/*   Updated: 2024/11/07 18:14:46 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	Array <int> array(10);

	for (unsigned int i = 0; i < array.size(); i++)
	{
		array[i] = i + 1;
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;
	Array <int> newArray(array);
	for (unsigned int i = 0; i < newArray.size(); i++)
	{
		newArray[i] += i + 1;
		std::cout << newArray[i] << " ";
	}
	std::cout << std::endl;
	for (unsigned int i = 0; i < array.size(); i++)
		std::cout << array[i] << " ";
	std::cout << std::endl;

	Array<char> string(4);
	string[0] = 'H';
	string[1] = 'o';
	string[2] = 'l';
	string[3] = 'a';
	for (unsigned int i = 0; i < string.size(); i++)
		std::cout << string[i];
	std::cout << std::endl;
	try
	{
		string[600];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}

/*#include <iostream>
#include "Array.hpp"
#include <cstdlib>

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}*/
#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <cstdlib>

template <typename T>
void iter(T *addres, size_t length, void (*func)(T &))
{
	for (size_t i = 0; i < length; i++)
		func(addres[i]);
}

template <typename T>
void printArray(T &item)
{
	std::cout << item << std::endl;
}
template <typename T>
void exponential(T &item)
{
	item *= item;
}
#endif
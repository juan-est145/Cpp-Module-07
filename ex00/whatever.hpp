#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string>

template <typename T>
void swap(T &a, T&b)
{
	T temp = a;
	a = b;
	b = temp;
}
#endif
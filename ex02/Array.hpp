#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array
{
private:
	T *_array;
	unsigned int _length;

public:
	Array(void);
	Array(unsigned int n);
	Array(const Array &toCopy);
	Array &operator=(const Array &toCopy);
	T &operator[](unsigned int index) const;
	unsigned int size(void) const;
	~Array(void);
};

#include "Array.tpp"
#endif
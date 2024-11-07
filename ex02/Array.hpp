#ifndef ARRAY_HPP
#define ARRAY_HPP

template<typename T>
class Array
{
private:
	T *array;
	unsigned int length;
public:
	Array(void);
	Array(unsigned int n);
	Array(Array &toCopy);
	Array &operator=(Array &toCopy);
	T &operator[](unsigned int index);
	unsigned int size(void) const;
	~Array(void);
};
#include "Array.tpp"
#endif
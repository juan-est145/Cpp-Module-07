/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:23:38 by juestrel          #+#    #+#             */
/*   Updated: 2024/11/07 18:11:09 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(void)
{
	this->_length = 0;
	this->_array = NULL;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	this->_length = n;
	this->_array = new T[n];
}

template <typename T>
Array<T>::Array(const Array &toCopy)
{
	this->_length = toCopy._length;
	this->_array = new T[this->_length];
	for (unsigned int i = 0; i < this->_length; i++)
		this->_array[i] = toCopy[i];
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &toCopy)
{
	if (this != &toCopy)
	{
		if (this->_array)
			delete[] this->_array;
		this->_length = toCopy._length;
		this->_array = new T[this->_length];
		for (unsigned int i = 0; i < this->_length; i++)
			this->_array[i] = toCopy[i];
	}
	return (*this);
}

template <typename T>
T &Array<T>::operator[](unsigned int index) const
{
	if (index >= this->_length)
		throw std::exception();
	return (this->_array[index]);
}

template <typename T>
unsigned int Array<T>::size(void) const
{
	return (this->_length);
}

template <typename T>
Array<T>::~Array(void)
{
	delete[] this->_array;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:55:15 by rmeriau           #+#    #+#             */
/*   Updated: 2024/01/09 16:23:24 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template< typename T >
class Array
{
	public:
        class InvalidIndexException : public std::exception
        {
            public:
                virtual const char *what() const throw()
                {
                    return ("Wrong Index");
                }
        };
		Array()
		{
			this->_data = NULL;
			this->_n = 0;	
		}
		Array(unsigned int n) : _n(n)
		{
			this->_data = new T[_n];
			for (unsigned int i = 0; i < _n; i++)
			{
				this->_data[i] = 0;
			}
		}
		Array(Array const &array) : _n(array._n)
		{
			if (array._data)
			{
				this->_data = new T[array._n];
				for (unsigned int i = 0; i < array._n; i++)
				{
					this->_data[i] = array._data[i];
				}
			}
			else
				this->_data = NULL;
		}
		Array &operator=(Array const &array)
		{
			if (this == &array)
				return (*this);
			if (array._data)
			{
				delete [] this->_data;
				this->_data = new T[array._n];
				for (unsigned int i = 0; i < array._n; i++)
				{
					this->_data[i] = array._data[i];
				}
			}
            else
                this->_data = NULL;
            this->_n = array._n;
            return (*this);
		}
	    ~Array()
        {
          if (this->_data)
            delete [] this->_data;
        }
		T &operator[](unsigned int i)
		{
            if (i < 0 || i >= this->_n)
				throw InvalidIndexException();
			return (this->_data[i]);
		}
        unsigned int size()const
        {
            return (this->_n);
        }
	private:
        T *_data;
        unsigned int _n;
};

#endif
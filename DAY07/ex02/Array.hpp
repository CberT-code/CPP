/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 18:59:14 by cbertola          #+#    #+#             */
/*   Updated: 2020/10/15 09:39:03 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ARRAY_HPP
#define	ARRAY_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <exception>

template< typename T>
class Array
{
	public:

	class OutLimitsException : public std::exception
    {
        public:
            OutLimitsException() {}
            OutLimitsException(const OutLimitsException &m) {
				 if (this != &m)
                        this->operator=(m);
			}
            OutLimitsException& operator=(const OutLimitsException &m) {
				if (this != &m)
					(void)m;
 				 return(*this);
			}
            virtual ~OutLimitsException(void) throw() {}
            char const *what(void) const throw(){
  				return("Out of limits");
			}
    };

		Array(void) : _array(NULL), _n(0) {}
		Array(unsigned int n) : _array(new T[n]), _n(n) {}
		Array(Array const & src) : _array(NULL), _n(0) {
			Array::operator=(src);
		}

		virtual ~Array(void){
			delete[] this->_array;
		}

		Array &				operator=( Array const & src){
			if (this->_array != NULL)
				delete[] this->_array;
			this->_n = src._n;
			if (this->_n == 0)
				this->_array = NULL;
			else{
				this->_array = new T[this->_n];
				for (size_t i = 0; i < this->_n; i++){
					this->_array[i] = src._array[i];
				}
			}
			return (*this);
		}
		T &					operator[](unsigned long i){
			if (i >= this->_n || i < 0)
				throw (OutLimitsException());
			return (this->_array[i]);
		}
		size_t				size() const{
			return (this->_n);
		}
	

	private:
		T*		_array;
		size_t	_n;
};

#endif

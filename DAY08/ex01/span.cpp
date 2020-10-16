/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 10:09:23 by cbertola          #+#    #+#             */
/*   Updated: 2020/10/09 16:04:09 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span() : N(0){}

Span::Span(unsigned int n) : N(n){
}

Span::Span(Span const & src) {
	Span::operator=(src);
}

Span::~Span() {}

Span &					Span::operator=(Span const & rhs) {
	if (this != &rhs)
	{}
	return (*this);
}

void					Span::addNumber(int num){
	if (this->tab.size() < this->N)
		this->tab.push_back(num);
	else
		throw (FullSpanException());
}

long long int						Span::shortestSpan(){
	long long int		diff = LONG_MAX;
	long long int		tmp;

	if (this->N == 0 || tab.size() < 2)
		throw (TOOSHORTException());
	for (size_t i = 0; i < this->tab.size(); i++)
	{
		for (size_t j = i + 1; j < this->tab.size(); j++){
			if (this->tab[i] >= this->tab[j] && (this->tab[i] - this->tab[j]) < diff){
				tmp = this->tab[j];
				diff = this->tab[i] - tmp;
			}
			else if (this->tab[i] < this->tab[j] && (this->tab[j] - this->tab[i]) < diff){
				tmp = this->tab[i];
				diff = this->tab[j] - tmp;
			}
		}
	}
	return (diff);
	
}

long int						Span::longestSpan(){
	if (this->N == 0 || tab.size() < 2)
		throw (TOOSHORTException());

	std::vector<int>::iterator it = this->tab.begin();
	long int		min = *it;
	long int		max = *it;
	for (it = this->tab.begin(); it != this->tab.end(); it++)
	{
		if (min > *it)
			min = *it;
		if (max < *it)
			max = *it;
	}
	return (max - min);
}

/**********************
** EXCEPTION FullSPan **
**********************/

Span::FullSpanException::FullSpanException(void)
{}

Span::FullSpanException::~FullSpanException(void) throw()
{}

Span::FullSpanException::FullSpanException(const Span::FullSpanException &src)
{
  Span::FullSpanException::operator=(src);
}

Span::FullSpanException& Span::FullSpanException::operator=(const Span::FullSpanException& rhs)
{
	(void)rhs;
  return(*this);
}

char const        *Span::FullSpanException::what(void) const throw()
{
  return("Span is already full");
}

/**********************
** EXCEPTION TOOSHORT **
**********************/

Span::TOOSHORTException::TOOSHORTException(void)
{}

Span::TOOSHORTException::~TOOSHORTException(void) throw()
{}

Span::TOOSHORTException::TOOSHORTException(const Span::TOOSHORTException &src)
{
  Span::TOOSHORTException::operator=(src);
}

Span::TOOSHORTException& Span::TOOSHORTException::operator=(const Span::TOOSHORTException& rhs)
{
	(void)rhs;
  return(*this);
}

char const        *Span::TOOSHORTException::what(void) const throw()
{
  return("Not enough numbers in the span to try this.");
}

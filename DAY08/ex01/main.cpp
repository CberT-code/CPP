/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 11:37:48 by cbertola          #+#    #+#             */
/*   Updated: 2020/10/16 13:35:16 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main(void)
{

	std::cout << std::endl << "***************TRY LIMITS**************" << std::endl;
	try {
		Span spanlimits = Span(2);
		spanlimits.addNumber(INT_MIN);
		spanlimits.addNumber(INT_MAX);
		std::cout << "longest " << spanlimits.longestSpan() << std::endl;
		std::cout << "shortest " << spanlimits.shortestSpan() << std::endl;

	} catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "*****************TRY 0*****************" << std::endl;
	try {
		Span spanzero = Span(5);
		spanzero.addNumber(0);
		spanzero.addNumber(0);
		spanzero.addNumber(0);
		spanzero.addNumber(0);
		spanzero.addNumber(0);
		std::cout << "longest " << spanzero.longestSpan() << std::endl;
		std::cout << "shortest " << spanzero.shortestSpan() << std::endl;
	} catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "************TRY TOO MUCH************" << std::endl;
	try {
		Span spanzero = Span(2);
		spanzero.addNumber(0);
		spanzero.addNumber(0);
		spanzero.addNumber(0);
		std::cout << "longest " << spanzero.longestSpan() << std::endl;
		std::cout << "shortest " << spanzero.shortestSpan() << std::endl;
	} catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "************TRY No entry************" << std::endl;
	try {
		Span spanno = Span(2);
		std::cout << "longest " << spanno.longestSpan() << std::endl;
		std::cout << "shortest " << spanno.shortestSpan() << std::endl;
	} catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "**********TRY few numbers**********" << std::endl;
	try {
		Span spanfew = Span(10);
		spanfew.addNumber(4);
		spanfew.addNumber(445548);
		spanfew.addNumber(-4542454);
		spanfew.addNumber(56465);
		spanfew.addNumber(-652);
		spanfew.addNumber(5465464);
		spanfew.addNumber(2167);
		spanfew.addNumber(842478);
		spanfew.addNumber(4545);
		spanfew.addNumber(8);
		std::cout << "longest " << spanfew.longestSpan() << std::endl;
		std::cout << "shortest " << spanfew.shortestSpan() << std::endl;
	} catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "**********TRY 10000 numbers**********" << std::endl;
	try {
		srand(time(NULL));
		Span spanfew = Span(10000);
		for (size_t i = 0; i < 10000; i++)
		{
			spanfew.addNumber(rand() % INT_MAX);
		}
		
		std::cout << "longest " << spanfew.longestSpan() << std::endl;
		std::cout << "shortest " << spanfew.shortestSpan() << std::endl;
	} catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
}

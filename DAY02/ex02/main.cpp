/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 17:20:37 by cbertola          #+#    #+#             */
/*   Updated: 2020/10/05 10:10:34 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int		main(void) {
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl << std::endl;
	std::cout << a << std::endl << std::endl;

	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << Fixed::min(a, b) << std::endl;
	std::cout << (a < b) << std::endl;
	std::cout << (a > b) << std::endl;
	std::cout << (a != b) << std::endl;
	std::cout << (a == b) << std::endl;
	std::cout << (a * b) << std::endl;
	std::cout << (a / b) << std::endl;
	std::cout << (a + b) << std::endl;
	std::cout << (a - b) << std::endl;

	return 0;
}
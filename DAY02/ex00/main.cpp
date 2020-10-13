/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 17:21:19 by cbertola          #+#    #+#             */
/*   Updated: 2020/10/01 17:21:23 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int		main(void) {
	Fixed a;
	Fixed b(a);
	Fixed c;
	c = b;
	std::cout << a.getRawBits() << std::endl; std::cout << b.getRawBits() << std::endl; std::cout << c.getRawBits() << std::endl;
	return 0;
}

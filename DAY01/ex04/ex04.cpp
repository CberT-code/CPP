/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 15:18:19 by cbertola          #+#    #+#             */
/*   Updated: 2020/09/24 15:30:02 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int			main(void){
	std::string			str = "HI THIS IS BRAIN";
	std::string			*ptr;
	std::string&		ref = str;

	ptr = &str;
	std::cout << *ptr << "\n";
	std::cout << ref << "\n";
}
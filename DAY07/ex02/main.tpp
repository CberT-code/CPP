/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 18:53:03 by cbertola          #+#    #+#             */
/*   Updated: 2020/10/14 18:54:53 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

template< typename T>
void	iter(T *tab, size_t lenght, void (*f)(T &)) {
	if (tab)
	{
		for (size_t i = 0; i < lenght; i++)
		{
			f(tab[i]);
		}
		
	}
}

template< typename T>
void	display(T &it) {
	std::cout << it << std::endl;
}


int main(void)
{
	int         num[] = {4, 8, 15, 15, 23, 42};
	char		tab[] = {'a', 'b', 'c', 'd'};
    std::string strs[] = {"toto", "tata", "tatie"};

    std::cout << "Test des int : " << std::endl;
    iter <int>(num, 6, display);
    std::cout << std::endl;

	   std::cout << "Test des char : " << std::endl;
    iter <char>(tab, 4, display);
    std::cout << std::endl;

    std::cout << "Test des strings : " << std::endl;
    iter(strs, 3, display);
    std::cout << std::endl;
	
	return 0;
}

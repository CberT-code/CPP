/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 18:53:03 by cbertola          #+#    #+#             */
/*   Updated: 2020/10/15 12:06:40 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

// class Awesome {
// 	public:
// 		Awesome(void) : _n(42) {return;}
// 		int 			get(void) const {return this->_n;}
	
// 	private:
// 		int	_n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs) {o << rhs.get(); return o;}

// template<typename T>
// void print( T & x ) { std::cout << x << std::endl; return; }

template< typename T>
void	iter(T const *tab, size_t const lenght, void (*f)(T const &)) {
	if (tab)
	{
		for (size_t i = 0; i < lenght; i++)
			f(tab[i]);
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

// int main(){
// 	int tab[] = {0, 1, 2, 3, 4};

// 	Awesome tab2[5];

// 	iter(tab,5, print);
// 	iter(tab2,5, print);

// 	return 0;
// }
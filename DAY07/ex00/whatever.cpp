/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 16:54:15 by cbertola          #+#    #+#             */
/*   Updated: 2020/10/15 10:56:31 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


template< typename T>
void		swap(T &x, T &y) {
	T swap;
	swap = x;
	x = y;
	y = swap;
}

template< typename T>
T const		&min(T const &x, T const &y) {
	if (x == y)
		return (y);
	return (x < y ? x : y);
}

template< typename T>
T const		&max(T const &x, T  const &y) {
	if (x == y)
		return (y);
	return (x > y ? x : y);
}

int main(void)
{
	int 		inta = 2;
	int 		intb = 1;
	float 		floata = 2.5;
	float 		floatb = 1.5;
	double 		doublea = 2.5;
	double 		doubleb = 1.5;
	char 		chara = 'a';
	char		charb = 'z';
	std::string stringa = "chaine1";
	std::string stringb = "chaine2";

	std::cout << "----------------------------TEST DU SWAP----------------------------" << std::endl;
	std::cout << "****INT****" << std::endl;
	std::cout << "inta = " << inta << " intb = " << intb << std::endl;
	swap(inta, intb);
	std::cout << "inta = " << inta << " intb = " << intb << std::endl << std::endl;

	std::cout << "****FLOAT****" << std::endl;
	std::cout << "floata = " << floata << " floatb = " << floatb << std::endl;
	swap(floata, floatb);
	std::cout << "floata = " << floata << " floatb = " << floatb << std::endl << std::endl;

	std::cout << "****DOUBLE****" << std::endl;
	std::cout << "doublea = " << doublea << " doubleb = " << doubleb << std::endl;
	swap(doublea, doubleb);
	std::cout << "doublea = " << doublea << " doubleb = " << doubleb << std::endl << std::endl;

	std::cout << "****CHAR****" << std::endl;
	std::cout << "chara = " << chara << " charb = " << charb << std::endl;
	swap(chara, charb);
	std::cout << "chara = " << chara << " charb = " << charb << std::endl << std::endl;

	std::cout << "****STRING****" << std::endl;
	std::cout << "stringa = " << stringa << " stringb = " << stringb << std::endl;
	swap(stringa, stringb);
	std::cout << "stringa = " << stringa << " stringb = " << stringb << std::endl << std::endl;

	std::cout << "----------------------------TEST DU MIN----------------------------" << std::endl;
	std::cout << "****INT****" << std::endl;
	std::cout << "inta = " << inta << " intb = " << intb << std::endl;
	std::cout << "res = " << min(inta, intb) << std::endl << std::endl;

	std::cout << "****FLOAT****" << std::endl;
	std::cout << "floata = " << floata << " floatb = " << floatb << std::endl;
	std::cout << "res = " << min(floata, floatb) << std::endl << std::endl;

	std::cout << "****DOUBLE****" << std::endl;
	std::cout << "doublea = " << doublea << " doubleb = " << doubleb << std::endl;
	std::cout << "res = " << min(doublea, doubleb) << std::endl << std::endl;

	std::cout << "****CHAR****" << std::endl;
	std::cout << "chara = " << chara << " charb = " << charb << std::endl;
	std::cout << "res = " << min(chara, charb) << std::endl << std::endl;

	std::cout << "****STRING****" << std::endl;
	std::cout << "stringa = " << stringa << " stringb = " << stringb << std::endl;
	std::cout << "res = " << ::min(stringa, stringb) << std::endl << std::endl;

	std::cout << "****EGALITE****" << std::endl;
	std::cout << "inta = " << inta << " = " << &inta << " intb = " << (intb = 1) << " = " << &intb << std::endl;
	std::cout << "res = " << &min(inta, intb) << std::endl << std::endl;

		std::cout << "----------------------------TEST DU MAX----------------------------" << std::endl;
	std::cout << "****INT****" << std::endl;
	std::cout << "inta = " << inta << " intb = " << (intb = 2) << std::endl;
	std::cout << "res = " << max(inta, intb) << std::endl << std::endl;

	std::cout << "****FLOAT****" << std::endl;
	std::cout << "floata = " << floata << " BB = " << floatb << std::endl;
	std::cout << "res = " << max(floata, floatb) << std::endl << std::endl;

	std::cout << "****DOUBLE****" << std::endl;
	std::cout << "doublea = " << doublea << " doubleb = " << doubleb << std::endl;
	std::cout << "res = " << max(doublea, doubleb) << std::endl << std::endl;

	std::cout << "****CHAR****" << std::endl;
	std::cout << "doublea = " << chara << " charb = " << charb << std::endl;
	std::cout << "res = " << max(chara, charb) << std::endl << std::endl;

	std::cout << "****STRING****" << std::endl;
	std::cout << "stringa = " << stringa << " stringb = " << stringb << std::endl;
	std::cout << "res = " << ::max(stringa, stringb) << std::endl << std::endl;

	std::cout << "****EGALITE****" << std::endl;
	std::cout << "inta = " << inta << " = " << &inta << " intb = " << (intb = 1) << " = " << &intb << std::endl;
	std::cout << "res = " << &max(inta, intb) << std::endl << std::endl;
	
	return 0;
}
// int main( void ) {
// 	int a = 2;
// 	int b = 3;
	
// 	::swap( a, b );
// 	std::cout << "a = " << a << ", b = " << b << std::endl;
// 	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
// 	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
// 	std::string c = "chaine1";
// 	std::string d = "chaine2";
// 	::swap(c, d);
// 	std::cout << "c = " << c << ", d = " << d << std::endl;
// 	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
// 	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
// 	return 0;
// }
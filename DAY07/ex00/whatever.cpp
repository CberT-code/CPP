/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 16:54:15 by cbertola          #+#    #+#             */
/*   Updated: 2020/10/15 15:38:43 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Awesome {
    public:
        Awesome(int n): _n(n) {}
        bool operator==(Awesome const &rhs) { return (this->_n == rhs._n); }
        bool operator=(Awesome const &rhs) { return (this->_n = rhs._n); }
        bool operator>(Awesome const &rhs) { return (this->_n > rhs._n); }
        bool operator<(Awesome const &rhs) { return (this->_n < rhs._n); }
        bool operator>=(Awesome const &rhs) { return (this->_n >= rhs._n); }
        bool operator<=(Awesome const &rhs) { return (this->_n <= rhs._n); }
    private:
        int _n;
};

template< typename T>
void		swap(T &x, T &y) {
	T swap = x;
	x = y;
	y = swap;
}

template< typename T>
T		&min(T &x, T &y) {
	return (x < y ? x : y);
}

template< typename T>
T		&max(T &x, T &y) {
	return (x > y ? x : y);
}

int main(void)
{
	const int			inta = 2;
	const int			intb = 1;
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
	
	std::cout << "----------------------------TEST AWESOME----------------------------" << std::endl;
	Awesome aA(0);
    Awesome bA(1);

	std::cout << "aA = 0 = " << &aA << " bA = 1 = " << &bA << std::endl;
	std::cout << "MAX : " << &max(aA, bA) << std::endl;
    std::cout << "MIN : " << &min(aA, bA) << std::endl;
	std::cout << "TEST SWAP : " << std::endl;
	swap(aA, bA);
	std::cout << "MAX : " << &max(aA, bA) << std::endl;
    std::cout << "MIN : " << &min(aA, bA) << std::endl;
	return 0;
}

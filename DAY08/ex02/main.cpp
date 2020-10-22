/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 11:37:48 by cbertola          #+#    #+#             */
/*   Updated: 2020/10/19 10:04:22 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main()
{

	
	std::cout << "********************TEST MUTANTSTACK*******************" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);

	std::cout << "test top: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "test size: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	std::cout << "test size: " << mstack.size() << std::endl;
	 //[...] mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	std::vector<int>::iterator::iterator_category::
	
	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
	++it; }


	std::cout << "********************TEST VECTOR*******************" << std::endl;
	std::vector<int> vecteur;
	vecteur.push_back(5);
	vecteur.push_back(17);
	vecteur.pop_back();
	std::cout << "test size: " << vecteur.size() << std::endl;
	vecteur.push_back(3);
	vecteur.push_back(5);
	vecteur.push_back(737);
	std::cout << "test size: " << vecteur.size() << std::endl;
	std::vector<int>::iterator itv = vecteur.begin();
	std::vector<int>::iterator itve = vecteur.end();
	++itv;
	--itv;
	while (itv != itve) {
		std::cout << *itv << std::endl;
	++itv; }

	std::cout << "********************MORE TEST*******************" << std::endl;
	MutantStack<int> nstack;
	nstack = mstack;
	MutantStack<int>::iterator nit = nstack.begin();
	MutantStack<int>::iterator nite = nstack.end();

	while (nit != nite) {
		std::cout << *nit << std::endl;
	++nit; }
		std::cout << "test size: " << nstack.size() << std::endl << std::endl;

	MutantStack<int> ntstack(mstack);
	MutantStack<int>::iterator nnit = ntstack.begin();
	MutantStack<int>::iterator nnite = ntstack.end();

	while (nnit != nnite) {
		std::cout << *nnit << std::endl;
	++nnit; }
		std::cout << "test size: " << ntstack.size() << std::endl;

	std::cout << "********************Verification deep copy*******************" << std::endl;
	nstack.pop();
	nstack.push(17);

	nit = nstack.begin();
	nite = nstack.end();
	while (nit != nite) {
		std::cout << *nit << std::endl;
	++nit; }
		std::cout << "test size: " << nstack.size() << std::endl << std::endl;

	nnit = ntstack.begin();	
	nnite = ntstack.end();
	while (nnit != nnite) {
		std::cout << *nnit << std::endl;
	++nnit; }
		std::cout << "test size: " << ntstack.size() << std::endl;
	return 0;
}
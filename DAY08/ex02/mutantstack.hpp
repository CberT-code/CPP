
#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H

#include <iostream>
#include <fstream>
#include <string>
#include <iterator>
#include <stack>
#include <vector>
#include <iomanip>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void) : _size(0){}
		MutantStack(MutantStack & src){
			MutantStack::operator=(src);
		}
		virtual ~MutantStack(void){}
		MutantStack &				operator=( MutantStack & src){
			if (this != &src ){
				for (MutantStack<T>::iterator i = src._vector.begin(); i < src._vector.end(); i++)
				{
					this->push(*i);
				}
			}
			return (*this);
		}
		
		void						push(T t){
			this->_stack.push(t);
			this->_vector.push_back(t);
			this->_size += 1;
		}

		void						pop(){
			this->_stack.pop();
			this->_vector.pop_back();
			this->_size -= 1;
		}

		bool						empty(){
			if (this->_size == 0)
				return (1);
			return (0);
		}

		size_t						size(){
			return (this->_size);
		}

		T							top(){
			return (*(this->_vector.begin() + 1));
		}

		typedef typename std::vector<T>::iterator iterator;

		iterator					begin(void) {
			return (this->_vector.begin());
		}
		iterator					end(void) {
			return (this->_vector.end());
		}


	private:
		std::stack<T>				_stack;
		std::vector<T>				_vector;
		size_t						_size;

};

#endif

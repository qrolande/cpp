//
// Created by Quayle Rolande on 03/04/2022.
//

#ifndef CPP08_MUTANTSTACK_H
#define CPP08_MUTANTSTACK_H

#include "iostream"
#include "list"
#include "stack"

template<typename T>
class MutantStack : public std::stack<T> {
public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	MutantStack<T>() {}
	~MutantStack<T>(){}
	MutantStack<T>(const MutantStack<T>& a) {
		this->c = a.c;
	}
	MutantStack<T>& operator=(const MutantStack<T>& a) {
		this->c = a.c;
	}
	iterator begin() {
		return (this->c.begin());
	}
	iterator end() {
		return (this->c.end());
	}
};

#endif //CPP08_MUTANTSTACK_H

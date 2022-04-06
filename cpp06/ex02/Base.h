//
// Created by Quayle Rolande on 3/31/22.
//

#ifndef CPP06_BASE_H
#define CPP06_BASE_H

#include "iostream"

class Base {
public:
	virtual ~Base() {
		std::cout << "Base destructor called!" << std::endl;
	}
};

class A : public Base {
public:
	virtual ~A() {
		std::cout << "A destructor called!" << std::endl;
	};
};

class B : public Base {
public:
	virtual ~B() {
		std::cout << "B destructor called!" << std::endl;
	};
};

class C : public Base {
public:
	virtual ~C() {
		std::cout << "C destructor called!" << std::endl;
	};
};

Base* generate(void);
void identify(Base* p);
void identify(Base& p);

#endif //CPP06_BASE_H

//
// Created by Quayle Rolande on 3/31/22.
//

#include "Base.h"

Base* generate(void) {
	int i = rand();
	switch (i % 3) {
		case 1:
			return (new A);
			case 2:
				return (new B);
	}
	return (new C);
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "class A";
	else if (dynamic_cast<B*>(p))
		std::cout << "class B";
	else if (dynamic_cast<C*>(p))
		std::cout << "class C";
	else
		std::cout << "Error!";
	std::cout << std::endl;
}

void identify(Base& p) {
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "class A";
	}
	catch (std::exception &e) {
		try {
			(void)dynamic_cast<B&>(p);
			std::cout << "class B";
		}
		catch (std::exception &e) {
			try {
				(void)dynamic_cast<C&>(p);
				std::cout << "class C";
			}
			catch (std::exception &e) {
				std::cout << "Error";
			}
		}
	}
	std::cout << std::endl;
}
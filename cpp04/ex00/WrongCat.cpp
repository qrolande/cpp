//
// Created by Quayle Rolande on 3/26/22.
//

#include "WrongCat.h"

WrongCat::WrongCat() : WrongAnimal("WrongCat"){
	std::cout << "Default WrongCat constructor called!" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &a) : WrongAnimal(a.type) {
	std::cout << "WrongCat copy constructor called!" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &a) {
	this->type = a.type;
	std::cout << "WrongCat assigment operator called!" << std::endl;
	return (*this);
}

void WrongCat::makeSound() const {
	std::cout << "WrongCat says: MEOW MTFCKR!" << std::endl;
}
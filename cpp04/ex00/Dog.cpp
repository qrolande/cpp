//
// Created by Quayle Rolande on 3/26/22.
//

#include "Dog.h"

Dog::Dog() : Animal("Dog"){
	std::cout << "Default Dog constructor called!" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog destructor called!" << std::endl;
}

Dog::Dog(const Dog &a) : Animal(a.type) {
	std::cout << "Dog copy constructor called!" << std::endl;
}

Dog &Dog::operator=(const Dog &a) {
	this->type = a.type;
	std::cout << "Dog assigment operator called!" << std::endl;
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "Dog says: Гав-Гав" << std::endl;
}
//
// Created by Quayle Rolande on 3/26/22.
//

#include "Dog.h"

Dog::Dog() : Animal("Dog"){
	brain = new Brain;
	std::cout << "Default Dog constructor called!" << std::endl;
}

Dog::~Dog() {
	delete(brain);
	std::cout << "Dog destructor called!" << std::endl;
}

Dog::Dog(const Dog &a) : Animal(a.type) {
	this->brain = new Brain;
	this->brain = a.brain;
	std::cout << "Dog copy constructor called!" << std::endl;
}

Dog &Dog::operator=(const Dog &a) {
	this->type = a.type;
	this->brain = a.brain;
	std::cout << "Dog assigment operator called!" << std::endl;
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "Dog says: Гав-Гав" << std::endl;
}
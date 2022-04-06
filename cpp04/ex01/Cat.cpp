//
// Created by Quayle Rolande on 3/26/22.
//

#include "Cat.h"

Cat::Cat() : Animal("Cat"){
	brain = new Brain;
	std::cout << "Default Cat constructor called!" << std::endl;
}

Cat::~Cat() {
	delete(brain);
	std::cout << "Cat destructor called!" << std::endl;
}

Cat::Cat(const Cat &a) : Animal(a.type) {
	this->brain = new Brain;
	this->brain = a.brain;
	std::cout << "Cat copy constructor called!" << std::endl;
}

Cat &Cat::operator=(const Cat &a) {
	this->type = a.type;
	this->brain = a.brain;
	std::cout << "Cat assigment operator called!" << std::endl;
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "Cat says: Мяу-Мяу" << std::endl;
}
//
// Created by Quayle Rolande on 3/26/22.
//

#include "Animal.h"

Animal::Animal() {
	this->type = "Human";
	std::cout << "Default Animal constructor called!" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destructor called!" << std::endl;
}

Animal::Animal(std::string type) {
	this->type = type;
	std::cout << "Animal constructor called!" << std::endl;
}

Animal::Animal(const Animal &a) {
	type = a.type;
	std::cout << "Animal copy constructor called!" << std::endl;
}

Animal &Animal::operator=(const Animal &a) {
	this->type = a.type;
	std::cout << "Animal assigment operator called!" << std::endl;
	return *this;
}

std::string Animal::getType() const {
	return type;
}

void Animal::makeSound() const {
	std::cout << "Human says: Я не хочу на работу!" << std::endl;
}
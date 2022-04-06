//
// Created by Quayle Rolande on 3/26/22.
//

#include "WrongAnimal.h"

WrongAnimal::WrongAnimal() {
	this->type = "Alien";
	std::cout << "Default WrongAnimal constructor called!" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called!" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) {
	this->type = type;
	std::cout << "WrongAnimal constructor called!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &a) {
	type = a.type;
	std::cout << "WrongAnimal copy constructor called!" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &a) {
	this->type = a.type;
	std::cout << "WrongAnimal assigment operator called!" << std::endl;
	return *this;
}

void WrongAnimal::makeSound() const {
	std::cout << "Alien says: Мы пришли с миром!" << std::endl;
}
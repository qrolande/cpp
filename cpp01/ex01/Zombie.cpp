#include "Zombie.hpp"

Zombie::Zombie(){
	this->name = "nameless";
}

Zombie::~Zombie() {
	std::cout << this->name << " is dying, so sad :c" << std::endl;
}

void Zombie::announce(void) {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setname(std::string name) {
	this->name = name;
}
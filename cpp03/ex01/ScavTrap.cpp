//
// Created by Quayle Rolande on 3/23/22.
//

#include "ScavTrap.h"

ScavTrap::ScavTrap() {
	this->name = "Rebels";
	this->damage = 20;
	this->hitpoint = 100;
	this->stamina = 50;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20) {
	std::cout << "ScavTrap constructor with name called" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called, GL HF!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &a) : ClapTrap(a.name, a.hitpoint, a.stamina, a.damage) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &a) {
	this->name = a.name;
	this->hitpoint = a.hitpoint;
	this->stamina = a.stamina;
	this->damage = a.damage;
	std::cout << "ScavTrap assignation operator called" << std::endl;
	return *this;
}

void ScavTrap::guardGate(void) {
	std::cout << this->name << " has entered in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(std::string const &target) {
	std::cout << this->name << " attacks " << target << " like a ScavTrap, causing ";
	std::cout << this->damage << " points of damage!" << std::endl;
}

//
// Created by Quayle Rolande on 3/24/22.
//

#include "FragTrap.h"

FragTrap::FragTrap() {
	this->name = "Rebels";
	this->damage = 20;
	this->hitpoint = 100;
	this->stamina = 50;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 50, 20) {
	std::cout << "FragTrap constructor with name called" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called, GL HF!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &a) : ClapTrap(a.name, a.hitpoint, a.stamina, a.damage) {
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &a) {
	this->name = a.name;
	this->hitpoint = a.hitpoint;
	this->stamina = a.stamina;
	this->damage = a.damage;
	std::cout << "FragTrap assignation operator called" << std::endl;
	return *this;
}

void FragTrap::highFiveGuys() {
	std::cout << '\n' << this->name << ": Hey Rebels give me High Five!" << std::endl;
}
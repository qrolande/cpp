//
// Created by Quayle Rolande on 3/22/22.
//

#include "ClapTrap.h"

ClapTrap::ClapTrap() {
	this->name = "Rebels";
	this->damage = 0;
	this->hitpoint = 10;
	this->stamina = 10;
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
	this->name = name;
	this->damage = 0;
	this->hitpoint = 10;
	this->stamina = 10;
	std::cout << "ClapTrap constructor with name called" << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hitpoint, int stamina, int damage) {
	this->name = name;
	this->hitpoint = hitpoint;
	this->stamina = stamina;
	this->damage = damage;
	std::cout << "ClapTrap constructor with all parameters called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &a) {
	*this = a;
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &a) {
	this->name = a.name;
	this->damage = a.damage;
	this->hitpoint = a.hitpoint;
	this->stamina = a.stamina;
	std::cout << "ClapTrap assignation operator called" << std::endl;
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called, bye bye!" << std::endl;
}

int ClapTrap::getHealth(void) const {
	return this->hitpoint;
}

void ClapTrap::setHealth(int hitpoint) {
	if (hitpoint >= 0)
		this->hitpoint = hitpoint;
}

int ClapTrap::getEnergy(void) const {
	return this->stamina;
}

void ClapTrap::setEnergy(int stamina) {
	this->stamina = stamina;
}

int ClapTrap::getDamage(void) const {
	return this->damage;
}

void ClapTrap::setDamage(int damage) {
	this->damage = damage;
}

std::string ClapTrap::getName() const {
	return this->name;
}


void ClapTrap::attack(const std::string &target) {
	this->stamina -= 1;
	std::cout << this->name << " attacks " << target << " with " << this->damage << " strength!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	this->hitpoint -= amount;
	this->stamina -= 1;
	std::cout << this->name << " took " << amount << " points of damage!" << std::endl;
	if (this->hitpoint <= 0)
		this->hitpoint = 0;
}

void ClapTrap::beRepaired(unsigned int amount) {
	this->hitpoint += amount;
	std::cout << this->name << " took " << amount << " points of heal!" << std::endl;
}
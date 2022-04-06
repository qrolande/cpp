//
// Created by Quayle Rolande on 3/22/22.
//

#ifndef CPP03_CLAPTRAP_H
#define CPP03_CLAPTRAP_H

#include <iostream>
#include <string>

class ClapTrap {

private:
	std::string name;
	int     hitpoint;
	int     stamina;
	int     damage;
public:
	ClapTrap();
	~ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &a);
	ClapTrap &operator=(const ClapTrap &a);

	int getHealth(void) const;
	void setHealth(int hitpoint);
	int getEnergy(void) const;
	void setEnergy(int stamina);
	int getDamage(void) const;
	void setDamage(int damage);
	std::string getName(void) const;

	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

};


#endif //CPP03_CLAPTRAP_H
